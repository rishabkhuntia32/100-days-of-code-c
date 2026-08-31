//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

int main() {
    int n,temp,rem,pro=1,sum=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    temp=n;
    while (temp!=0)
    {
        pro=1;
       rem=temp%10;
       if (rem==0)
       {
       pro=1;
       }
       else {
       for (int i = 1; i <=rem; i++)
       {
        pro*=i;
       }
    }
       temp/=10;
       sum+=pro;
    
       
    }
    if (sum==n)
    {
       printf("Strong number");
    }
    else
       printf("Not Strong number");

    

    
    return 0;
}