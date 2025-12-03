//Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>

int main() {
    // Define enum for months
    enum Months {JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

    // Array to store number of days in each month (non-leap year)
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Print number of days for each month
    printf("January has %d days\n", days[JAN]);
    printf("February has %d or 29 days\n", days[FEB]);
    printf("March has %d days\n", days[MAR]);
    printf("April has %d days\n", days[APR]);
    printf("May has %d days\n", days[MAY]);
    printf("June has %d days\n", days[JUN]);
    printf("July has %d days\n", days[JUL]);
    printf("August has %d days\n", days[AUG]);
    printf("September has %d days\n", days[SEP]);
    printf("October has %d days\n", days[OCT]);
    printf("November has %d days\n", days[NOV]);
    printf("December has %d days\n", days[DEC]);

    return 0;
}
