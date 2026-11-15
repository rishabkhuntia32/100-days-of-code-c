//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    FILE *fp;
    int ch;
    int characters = 0, words = 0, lines = 0;
    bool in_word = false;

    // Open sample.txt in read mode
    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open sample.txt\n");
        return 1;
    }

    // Read file character by character until EOF
    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (isspace((unsigned char)ch)) {
            in_word = false;
        } else if (!in_word) {
            in_word = true;
            words++;
        }
    }

    // If the file is non-empty and doesn't end with a newline, count the last line
    if (characters > 0 && ch != '\n') {
        lines++;
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}