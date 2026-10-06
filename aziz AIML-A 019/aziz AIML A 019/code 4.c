#include <stdio.h>

int main()
{
    int a, b;
    char choice;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &choice);

    switch(choice)
    {
        case '+':
            printf("Addition = %d\n", a + b);
            break;

        case '-':
            printf("Subtraction = %d\n", a - b);
            break;

        case '*':
            printf("Multiplication = %d\n", a * b);
            break;

        case '/':
            printf("Division = %d\n", a / b);
            break;

        case '%':
            printf("Remainder = %d\n", a % b);
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}
