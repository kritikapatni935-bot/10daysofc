//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;

    // Read input
    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);   // for full name with spaces

    printf("Enter Roll: ");
    scanf("%d", &s.roll_no);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    // Print output
    printf("Name: %s | Roll: %d | Marks: %.0f", s.name, s.roll_no, s.marks);

    return 0;
}
