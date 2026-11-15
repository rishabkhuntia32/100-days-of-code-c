//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main() {
    char source_name[100], dest_name[100];
    FILE *src, *dest;
    int ch;

    // Take source and destination filenames from the user
    printf("Source File: ");
    scanf("%99s", source_name);

    printf("Destination File: ");
    scanf("%99s", dest_name);

    // Open source file in read mode ("r")
    src = fopen(source_name, "r");
    if (src == NULL) {
        printf("Error: Could not open source file %s\n", source_name);
        return 1;
    }

    // Open destination file in write mode ("w")
    dest = fopen(dest_name, "w");
    if (dest == NULL) {
        printf("Error: Could not create destination file %s\n", dest_name);
        fclose(src);
        return 1;
    }

    // Copy character by character using fgetc() and fputc()
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    // Close both files
    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", dest_name);

    return 0;
}