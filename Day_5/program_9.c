//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include <stdio.h>
#include <math.h>

int main()
{
    float p,si,intrest,ci = 0.0f;

    int year = 0;
    
    

    printf("Enter the principal amout\n");
    scanf("%f", &p);

    printf("Enter the Rate of Intrest\n");
    scanf("%f", &intrest);

    printf("How many year investment\n");
    scanf("%d", &year);

    si = (p * intrest * year) / 100;
    ci=p*pow((1+(intrest/100)),year)-p;

    printf("The Simple Intrest is %0.1f\n", si);
    printf("The Compound Intrest is %0.2f\n", ci);

    

    return 0;
}