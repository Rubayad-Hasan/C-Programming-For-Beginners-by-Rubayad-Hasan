#include <stdio.h>
#define SIZE 6

int main() {
    int arr[SIZE];
    int *ptr = arr;

    printf("Enter %d integers:\n", SIZE);
    for (int i = 0; i < SIZE; i++)
        scanf("%d", ptr + i);

    printf("Even elements: ");
    for (int i = 0; i < SIZE; i++)
        if (*(ptr + i) % 2 == 0)
            printf("%d ", *(ptr + i));

    printf("\nOdd elements: ");
    for (int i = 0; i < SIZE; i++)
        if (*(ptr + i) % 2 != 0)
            printf("%d ", *(ptr + i));

    printf("\n");
    return 0;
}
