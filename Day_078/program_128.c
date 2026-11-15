//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    int ch;
    int vowels = 0, consonants = 0;

    // Open text.txt in read mode ("r")
    fp = fopen("text.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open text.txt\n");
        return 1;
    }

    // Read file character by character until EOF
    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha((unsigned char)ch)) {
            char lower = tolower((unsigned char)ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    // Close the file
    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}