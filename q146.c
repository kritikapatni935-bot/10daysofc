//Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/
#include <stdio.h>

// Nested structure for Date
struct Date {
    int day;
    int month;
    int year;
};

// Employee structure
struct Employee {
    char name[50];
    int id;
    struct Date joining_date;
};

int main() {
    struct Employee e;

    // Input
    printf("Enter Employee Name: ");
    scanf(" %[^\n]", e.name);

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Joining Date (DD MM YYYY): ");
    scanf("%d %d %d",
          &e.joining_date.day,
          &e.joining_date.month,
          &e.joining_date.year);

    // Output
    printf("\nName: %s | ID: %d | Joining Date: %02d/%02d/%04d",
           e.name,
           e.id,
           e.joining_date.day,
           e.joining_date.month;
           &e.joining_date.year);
 printf("\nName: %s | ID: %d | Joining Date: %02d/%02d/%04d",
           e.name,
           e.id,
           e.joining_date.day,
           e.joining_date.month,
           e.joining_date.year);

    return 0;
}
