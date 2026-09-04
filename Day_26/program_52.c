/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*




Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main(void) {
    int total_groups = 5;

    for (int i = 1; i <= total_groups; i++) {
        
        int stars;
        if (i <= 3) {
            stars = 2 * i - 1;      
        } else {
            stars = 2 * (6 - i) - 1; 
        }

       
        for (int j = 0; j < stars; j++) {
            printf("*\n");
        }

        
        if (i < total_groups) {
            printf("\n");
        }
    }

    return 0;
}