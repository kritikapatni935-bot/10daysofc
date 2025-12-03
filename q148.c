//Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1, s2;

    // Input for Student 1
    printf("Enter Student 1 details\n");
    printf("Name: ");
    scanf(" %[^\n]", s1.name);

    printf("Roll: ");
    scanf("%d", &s1.roll_no);

    printf("Marks: ");
    scanf("%f", &s1.marks);

    // Input for Student 2
    printf("\nEnter Student 2 details\n");
    printf("Name: ");
    scanf(" %[^\n]", s2.name);

    printf("Roll: ");
    scanf("%d", &s2.roll_no);

    printf("Marks: ");
    scanf("%f", &s2.marks);

    // Compare two students
    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll_no == s2.roll_no &&
        s1.marks ==
