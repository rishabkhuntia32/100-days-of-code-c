// Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>

int main()
{
    int n, target;

    printf("Enter array size: ");
    if (scanf("%d", &n) != 1)
        return 0;

    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter target element to search: ");
    scanf("%d", &target);

    int left = 0;
    int right = n - 1;
    int result = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            result = mid;
            break;
        }

        if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    printf("\n");
    if (result != -1)
    {
        printf("Found at index %d\n", result);
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}