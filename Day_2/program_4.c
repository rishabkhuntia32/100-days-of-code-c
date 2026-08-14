//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include <stdio.h>

int main()
{
    float r, b, area, cir = 0;
    printf("Enter the Radius of Rectangle\n");
    scanf("%f", &r);
    
    area = 3.1416*r*r;
    cir = 2 *3.1416*r;
    printf("AREA= %0.2f, PERIMETER=%0.2f\n", area, cir);

    return 0;
}