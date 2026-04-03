
#include <stdio.h>

int main()
{
    char ch;   // Character variable

    printf("Enter a character: ");
    scanf(" %c", &ch);   // space before %c avoids input issues

    // Check if alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("Alphabet\n");
    }

    // Check if digit
    else if (ch >= '0' && ch <= '9')
    {
        printf("Digit\n");
    }

    // Otherwise special character
    else
    {
        printf("Special\n");
    }

    return 0;
}
