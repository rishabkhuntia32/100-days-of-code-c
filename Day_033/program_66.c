//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main() {
    int n, target;
    
    printf("Enter array size: ");
    if (scanf("%d", &n) != 1) return 0;

    int arr[n + 1]; 
    
    for (int i = 0; i < n; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &target);

    int i = n - 1;
    
    while (i >= 0 && arr[i] > target) {
        arr[i + 1] = arr[i];
        i--;
    }
    
    arr[i + 1] = target;
    
    n++;

    printf("\n");
    for (int j = 0; j < n; ++j) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}