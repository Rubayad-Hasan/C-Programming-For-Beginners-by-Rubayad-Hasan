
#include <stdio.h>

int main()
{
    float num1, num2;   // numbers can be decimal
    char op;            // operator (+, -, *, /)

    printf("Enter expression (e.g. 5 + 3): ");
    scanf("%f %c %f", &num1, &op, &num2);

    // Check operator

    if (op == '+')
    {
        printf("Addition: %.2f\n", num1 + num2);
    }
    else if (op == '-')
    {
        printf("Subtraction: %.2f\n", num1 - num2);
    }
    else if (op == '*')
    {
        printf("Multiplication: %.2f\n", num1 * num2);
    }
    else if (op == '/')
    {
        // Important check: division by zero
        if (num2 == 0)
        {
            printf("Division: Zero as divisor is not valid!\n");
        }
        else
        {
            printf("Division: %.6f\n", num1 / num2);
        }
    }
    else
    {
        printf("Invalid operator\n");
    }

    return 0;
}
