
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0 && (num & (num - 1)) == 0)
    {
        printf("Yes\n");   // It is power of 2
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
