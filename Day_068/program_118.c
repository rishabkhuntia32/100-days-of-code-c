//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
#include <stdio.h>

int main() {
    int n;
    
    // Read the size of the array
    if (scanf("%d", &n) != 1) return 1;
    
    int nums[n];
    long long actual_sum = 0;
    
    // Read array elements and calculate their sum
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        actual_sum += nums[i];
    }
    
    // Expected sum of all integers from 0 to n is n * (n + 1) / 2
    long long expected_sum = (long long)n * (n + 1) / 2;
    
    // The difference gives the missing number
    printf("%lld\n", expected_sum - actual_sum);
    
    return 0;
}