//Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr;

    // Pointer pointing to structure
    ptr = &s;

    // Modify data using pointer and -> operator
    printf("Enter Name: ");
    scanf(" %[^\n]", ptr->name);

    printf("Enter Roll: ");
    scanf("%d", &ptr->roll_no);

    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);

    // Display modified data
    printf("\nModified Data: ");
    printf("Name: %s | Roll: %d | Marks: %.0f\n",
           ptr->name, ptr->roll_no, ptr->marks);

    return 0;
}
