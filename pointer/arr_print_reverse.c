#include <stdio.h>
#define SIZE 5

int main() {
    int arr[SIZE];
    int *ptr = arr;

    printf("Enter %d numbers:\n", SIZE);
    for (int i = 0; i < SIZE; i++)
        scanf("%d", ptr + i);

    printf("Reversed: ");
    for (int i = SIZE - 1; i >= 0; i--)
        printf("%d ", *(ptr + i));

    printf("\n");
    return 0;
}
