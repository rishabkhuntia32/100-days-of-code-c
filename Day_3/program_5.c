//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>

int main()
{
    float c = 0.0f;

    printf("Enter the temprature in celcuis \n");

    scanf("%f", &c);

    printf("The temprature in Fareinhiet is %0.2f\n", (c * 1.8) + 32);

    return 0;
}