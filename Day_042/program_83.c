//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>
#include <ctype.h>

void countVowelsAndConsonants(const char *str, int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)str[i];

        if (isalpha(ch)) {
            char lower = (char)tolower(ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
    }
}

int main() {
    char str[100005];
    scanf("%s", str);

    int vowels, consonants;
    countVowelsAndConsonants(str, &vowels, &consonants);

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}