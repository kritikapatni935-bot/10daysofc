#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int x = a, y = b;

    // Find HCF (GCD)
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    int hcf = x;

    // LCM formula
    int lcm = (a * b) / hcf;

    printf("%d", lcm);

    return 0;
}
