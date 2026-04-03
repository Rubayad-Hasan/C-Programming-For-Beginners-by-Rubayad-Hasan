
#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year conditions:
    // 1. Divisible by 4 AND not divisible by 100
    // OR
    // 2. Divisible by 400

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("Yes\n");   // It is a leap year
    }
    else
    {
        printf("No\n");    // Not a leap year
    }

    return 0;
}
