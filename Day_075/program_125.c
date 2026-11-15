//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>

int main() {
    FILE *fp;
    char text[1000];

    // Open data.txt in append mode ("a")
    fp = fopen("data.txt", "a");
    if (fp == NULL) {
        printf("Error: Could not open data.txt\n");
        return 1;
    }

    // Read a new line of text from the user
    printf("Enter text to append: ");
    if (fgets(text, sizeof(text), stdin) == NULL) {
        fclose(fp);
        return 1;
    }

    // Append the text to the end of the file
    fprintf(fp, "\n%s", text);

    // Close the file to save changes
    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}