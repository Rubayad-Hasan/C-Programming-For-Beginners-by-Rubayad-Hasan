
#include <stdio.h>

int main()
{
    int x;        // number chosen by Player-1
    int g1, g2, g3;  // guesses
    int win = 0;     // flag variable (0 = no win yet)

    printf("Enter secret number: ");
    scanf("%d", &x);

    // First guess
    scanf("%d", &g1);

    if (g1 == x)
    {
        printf("Right, Player-2 wins!\n");
        win = 1;
    }
    else
    {
        printf("Wrong, 2 Chance(s) Left!\n");

        // Second guess
        scanf("%d", &g2);

        if (g2 == x)
        {
            printf("Right, Player-2 wins!\n");
            win = 1;
        }
        else
        {
            printf("Wrong, 1 Chance(s) Left!\n");

            // Third guess
            scanf("%d", &g3);

            if (g3 == x)
            {
                printf("Right, Player-2 wins!\n");
                win = 1;
            }
            else
            {
                printf("Wrong, 0 Chance(s) Left!\n");
            }
        }
    }

    // If player never guessed correctly
    if (win == 0)
    {
        printf("Player-1 wins!\n");
    }

    return 0;
}
