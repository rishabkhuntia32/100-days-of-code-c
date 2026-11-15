//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>

int main() {
    int day, month, year;
    const char *months[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    if (scanf("%d/%d/%d", &day, &month, &year) != 3) {
        return 0;
    }

    if (month < 1 || month > 12) {
        printf("Invalid month\n");
        return 0;
    }

    printf("%02d-%s-%04d\n", day, months[month], year);

    return 0;
}