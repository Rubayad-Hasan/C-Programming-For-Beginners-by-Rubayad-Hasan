
#include <stdio.h>

int main()
{
    char ch;
    int count = 1;

    while (1)
    {
        printf("Enter input: ");
        scanf(" %c", &ch);

        if (ch == 'A')
        {
            break;
        }

        printf("Input %d: %c\n", count, ch);

        count = count + 1;
    }

    return 0;
}
