//Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include <stdio.h>

int main() {
    FILE *fp;
    int num, count = 0;
    long long sum = 0;

    // Open numbers.txt in read mode ("r")
    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    // Read all integers from the file until EOF
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    // Close the file
    fclose(fp);

    if (count > 0) {
        double average = (double)sum / count;
        printf("Sum = %lld\n", sum);
        printf("Average = %.2f\n", average);
    } else {
        printf("No integers found in numbers.txt\n");
    }

    return 0;
}