/*Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to
 find the maximum element in each subarray of size k moving from left to right. Print the maximum 
 elements for each window separated by spaces as output.


Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/
#include <stdio.h>

void printMaxInWindows(int arr[], int n, int k) {
    if (n < k || k <= 0) {
        return;
    }

    int deque[n]; // Stores indices of useful elements in decreasing order of values
    int front = 0, rear = -1;

    for (int i = 0; i < n; i++) {
        // Remove indices that are out of the current window (i - k)
        if (front <= rear && deque[front] <= i - k) {
            front++;
        }

        // Remove indices whose corresponding values are smaller than arr[i]
        while (front <= rear && arr[deque[rear]] <= arr[i]) {
            rear--;
        }

        // Add current element's index at the rear
        deque[++rear] = i;

        // Print the maximum for the window once the first k elements are processed
        if (i >= k - 1) {
            printf("%d", arr[deque[front]]);
            if (i < n - 1) {
                printf(" ");
            }
        }
    }
    printf("\n");
}

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    printMaxInWindows(arr, n, k);

    return 0;
}