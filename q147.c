//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>

// Employee structure
struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp, empRead;
    FILE *fp;

    /* --------- Taking input from user --------- */
    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp.name);

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    /* --------- Writing to file (binary) --------- */
    fp = fopen("employee.dat", "wb");

    if (fp == NULL) {
        printf("Error opening file for writing!");
        return 1;
    }

    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee data stored successfully in file!\n");

    /* --------- Reading from file (binary) --------- */
    fp = fopen("employee.dat", "rb");

    if (fp == NULL) {
        printf("Error opening file for reading!");
        return 1;
    }

    fread(&empRead, sizeof(struct Employee), 1, fp);
    fclose(fp);

    /* --------- Displaying data --------- */
    printf("\nEmployee data read from file:\n");
    printf("Name : %s\n", empRead.name);
    printf("ID   : %d\n", empRead.id);
    printf("Salary: %.2f\n", empRead.salary);

    return 0;
}
