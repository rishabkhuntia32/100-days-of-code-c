/*Q23: Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.


Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/
#include <stdio.h>

int main()
{
    int day, fine;
    printf("Enter no of days\n");
    scanf("%d", &day);
    fine=0;
    if (day <= 5)
    {
        fine = 2 * day;
        printf("Fine Rs%d\n", fine);
    }
    else if (day > 5 && day <= 10)
    {
        fine = 10 + (day-5) * 4;
        printf("Fine Rs%d\n", fine);
    }
    else if (day > 10 && day <= 30)
    {
        fine = 10+20 + (day-10) * 6;
        printf("Fine Rs%d\n", fine);
    }
    else
    {
        printf("MEMBERSHIP CANCELLED\n");
    }

    return 0;
}