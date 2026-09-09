// Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>

int main()
{
    int n, x, k=-1;
    printf("Enter the array size\n");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d\n", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter the number to be searched\n");
    scanf("%d", &x);
    for (int j = 0; j < n; j++)
    {
        if (x == a[j])
        {
            
            k = j;
            break;
        }
    }
    if (k != -1)
    {
        printf("Found at index %d", k);
    }
    else
        printf("%d",k);

    return 0;
}