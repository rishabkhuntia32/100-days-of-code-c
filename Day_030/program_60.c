//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>

int main() {
    int n,pos=0,neg=0,zero=0;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d\n",i+1);
        scanf("%d",&a[i]);
    }

    for (int j = 0; j < n; j++)
    {
       if (a[j]>0)
       {
        pos++;
       }
       else if (a[j]<0)
       {
        neg++;
       }
       else{
        zero++;
       }
       
       
    }
    printf("Positive : %d , Negative : %d and Zero : %d",pos,neg,zero);
    return 0;
}