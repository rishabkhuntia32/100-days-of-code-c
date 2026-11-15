//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

void insertElement(int arr[], int *n, int pos, int val) {
    if (pos < 0 || pos > *n) {
        return; // Invalid 0-based position
    }

    // Shift elements to the right starting from the end
    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = val;
    (*n)++;
}

int main() {
    int n;
    scanf("%d", &n);

    // Allocate capacity for n + 1 elements
    int arr[n + 1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pos, val;
    scanf("%d %d", &pos, &val);

    insertElement(arr, &n, pos, val);

    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}