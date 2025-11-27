#include <stdio.h>
int main()
{
    int a, b;
    char op;
    printf("enter two numbers and operator (+,-,*,%%): ");
    scanf("%d %d %c", &a, &b, &op);
    switch (op)
    {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d", a - b);
            break;
        case '*':
            printf("%d", a * b);
            break;
        case '/':
            printf("%d", a / b);
            break;
        case '%':
            printf("%d", a % b);
            break;
        default:
            printf("invalid");
    }
    return 0;
}
