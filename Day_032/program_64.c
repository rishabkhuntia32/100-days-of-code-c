//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int mostFrequentDigit(long long n) {
    if (n < 0) {
        n = -n;
    }

    if (n == 0) {
        return 0;
    }

    int freq[10] = {0};

    while (n > 0) {
        freq[n % 10]++;
        n /= 10;
    }

    int maxFreq = 0;
    int resultDigit = 0;

    // Iterating from 0 to 9 with strictly '>' ensures the smallest digit wins ties
    for (int d = 0; d <= 9; d++) {
        if (freq[d] > maxFreq) {
            maxFreq = freq[d];
            resultDigit = d;
        }
    }

    return resultDigit;
}

int main() {
    long long n;
    scanf("%lld", &n);

    printf("%d\n", mostFrequentDigit(n));

    return 0;
}