/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *



Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 7; i++)
    {

        int row = (i <= 4) ? i : (8 - i);
        int spaces = 4 - row;
        int stars = 2 * row - 1;

        for (int s = 1; s <= spaces; s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= stars; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}