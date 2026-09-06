// Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    double sum1, sum2;
    printf("Enter (A)X^2+(B)X+(C)\n");

    printf("Enter A B C\n");
    scanf("%d %d %d", &a, &b, &c);
    sum1 =(double)((-b) + sqrt((b * b) - (4 * a * c))) / (2 * a);
    sum2 = (double)((-b) - sqrt((b * b) - (4 * a * c))) / (2 * a);
    if (sum1 == sum2 && sum1 > 0)
    {
        printf("Roots are real and same %0.2f\n", sum1);
    }
    else if (sum1 == sum2 && sum1 < 0)
    {
        printf("Roots are Complex and same\n");
    }
    else if (sum1 != sum2 && sum1 > 0 && sum2 > 0)
    {
        printf("Roots are real and Diffrent %0.2f and %0.2f\n",sum1,sum2);
    }
    else
    {
        printf("Roots are complex \n");
    }

    return 0;
}