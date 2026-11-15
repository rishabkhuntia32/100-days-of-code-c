//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>
#include <stdbool.h>

#define MAX_VAL 100001

int main() {
    int n;
    
    // Read the size of the array
    if (scanf("%d", &n) != 1) return 1;
    
    int nums[n];
    bool seen[MAX_VAL] = {false};
    int repeated = -1;
    
    // Single iteration to read and detect the repeated element
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        
        if (seen[nums[i]]) {
            repeated = nums[i];
        } else {
            seen[nums[i]] = true;
        }
    }
    
    printf("%d\n", repeated);
    
    return 0;
}