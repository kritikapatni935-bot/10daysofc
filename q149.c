//Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student *s;

    // Dynamically allocate memory
    s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    // Input
    printf("Enter Name: ");
    scanf(" %[^\n]", s->name);

    printf("Enter Roll: ");
    scanf("%d", &s->roll_no);

    printf("Enter Marks: ");
    scanf("%f", &s->marks);

    // Output
    printf("\nName: %s | Roll: %d | Marks: %.0f",
           s->name, s->roll_no, s->marks);

    // Free allocated memory
    free(s);

    return 0;
}
