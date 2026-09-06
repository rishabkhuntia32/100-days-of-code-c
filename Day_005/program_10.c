//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include <stdio.h>

int main() {
    int hour,min,sec,time=0;
    printf("ENter Time in SEcOUNDs\n");
    scanf("%d",&time);
    hour=time/3600;
    min=(time%3600)/60;
    sec=time%60;
    printf("The Time is %d:%d:%d",hour,min,sec);
    return 0;
}