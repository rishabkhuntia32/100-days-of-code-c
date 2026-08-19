// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include <stdio.h>

int main()
{
    int l1, l2, l3;
    printf("Enter side 1 of Triangle\n");
    scanf("%d", &l1);
    printf("Enter side 2 of Triangle\n");
    scanf("%d", &l2);

    printf("Enter side 3 of Triangle\n");
    scanf("%d", &l3);

    if (l1 == l2 && l2 == l3 && l1 == l3)

        printf("Equilateral\n");

    else if (l1 == l2 || l2 == l3 || l3 == l1)

        printf("Isosceles\n");

    else
        printf("Scalene\n");

    return 0;
}