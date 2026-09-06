// Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>

int main()
{
    float cp, sp;
    printf("Enter Cost Price\n");
    scanf("%f", &cp);
    printf("Enter Selling Price\n");
    scanf("%f", &sp);
    if (cp > sp)
    {
        printf("Loss\t%0.2f%%", ((cp-sp)*100)/cp);
    }

    else if (sp > cp)
    {
        printf("Profit\t%0.2f%%", ((sp-cp)*100)/cp);
    }
    else
    {
        printf("No Profit No Loss");
    }

    return 0;
}