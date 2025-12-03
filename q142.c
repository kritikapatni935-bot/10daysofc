//Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    // Input details of 5 students
    for (i = 0; i < 5; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Print details in tabular form
    printf("\n---------------------------------------------\n");
    printf("Name\t\tRoll No\tMarks\n");
    printf("---------------------------------------------\n");

    for (i = 0; i < 5; i++) {
        printf("%-15s\t%d\t\t%.2f\n", s[i].name, s[i].roll_no, s[i].marks);
    }

    printf("---------------------------------------------\n");

    return 0;
}
