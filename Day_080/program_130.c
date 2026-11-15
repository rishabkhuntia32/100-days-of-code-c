//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    int marks;
};

int main() {
    FILE *fp;
    int n;

    // Ask for the number of student records
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    struct Student s;

    // Open students.txt in write mode ("w") to store records
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not open students.txt for writing\n");
        return 1;
    }

    // Take input and write each record using fprintf()
    for (int i = 0; i < n; i++) {
        printf("Student %d -> Name: ", i + 1);
        scanf("%99s", s.name);

        printf("Roll: ");
        scanf("%d", &s.roll);

        printf("Marks: ");
        scanf("%d", &s.marks);

        fprintf(fp, "%s %d %d\n", s.name, s.roll, s.marks);
    }

    // Close the file after writing
    fclose(fp);

    // Reopen students.txt in read mode ("r") to read records
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open students.txt for reading\n");
        return 1;
    }

    printf("\n--- Student Records ---\n");
    // Read each record using fscanf() until all 3 fields fail to match (EOF)
    while (fscanf(fp, "%99s %d %d", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
    }

    // Close the file
    fclose(fp);

    return 0;
}