//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must contain at least 2 elements.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d elements for the array (separated by spaces):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int second_largest;
    int found_second = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            found_second = 1;
            largest = arr[i];
        } else if (arr[i] < largest) {
            if (!found_second || arr[i] > second_largest) {
                second_largest = arr[i];
                found_second = 1;
            }
        }
    }

    if (!found_second) {
        printf("\nThere is no second largest element.\n");
    } else {
        printf("\nSecond Largest Element:\n%d\n", second_largest);
    }

    return 0;
}