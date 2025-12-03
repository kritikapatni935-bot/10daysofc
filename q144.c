//Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include <stdio.h>

// Structure definition
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function that accepts structure and prints data
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %.0f", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student s;

    // Read input
    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Roll: ");
    scanf("%d", &s.roll_no);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    // Call function and pass structure
    printStudent(s);

    return 0;
}
