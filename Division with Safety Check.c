
#include <stdio.h>

int main()
{
    float a, b;
    int choice, sub;

    scanf("%f %f", &a, &b);
    scanf("%d", &choice);

    if (choice == 4)
    {
        // Check divisor first
        if (b == 0)
        {
            printf("Error: Divisor is zero\n");
        }
        else
        {
            scanf("%d", &sub);

            if (sub == 1)
            {
                printf("Quotient: %d\n", (int)(a / b));
            }
            else if (sub == 2)
            {
                printf("Remainder: %d\n", (int)a % (int)b);
            }
        }
    }

    return 0;
}
