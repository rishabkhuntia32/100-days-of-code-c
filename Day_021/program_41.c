// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main()
{
    int num, temp, first_digit, last_digit, divisor, middle_part, new_num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 10 && num > -10)
    {
        printf("Swapped number: %d\n", num);
        return 0;
    }

    last_digit = num % 10;

    temp = num;
    divisor = 1;
    while (temp >= 10)
    {
        temp /= 10;
        divisor *= 10;
    }

    first_digit = num / divisor;

    middle_part = (num % divisor) / 10;

    new_num = (last_digit * divisor) + (middle_part * 10) + first_digit;

    printf("Output: \n%d\n", new_num);

    return 0;
}