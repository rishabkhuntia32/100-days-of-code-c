//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
#include <string.h>

enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    char input[20];
    int a, b;
    enum Operation op;

    scanf("%s %d %d", input, &a, &b);

    if (strcmp(input, "ADD") == 0) {
        op = ADD;
    } else if (strcmp(input, "SUBTRACT") == 0) {
        op = SUBTRACT;
    } else {
        op = MULTIPLY;
    }

    switch (op) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}