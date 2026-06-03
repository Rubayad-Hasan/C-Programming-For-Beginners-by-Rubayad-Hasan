#include <stdio.h>
#define SIZE 6

int main() {
    int arr[SIZE];
    int *ptr = arr;

    printf("Enter %d numbers:\n", SIZE);
    for (int i = 0; i < SIZE; i++)
        scanf("%d", ptr + i);

    printf("Even index values (0,2,4,...): ");
    for (int i = 0; i < SIZE; i += 2)
        printf("%d ", *(ptr + i));

    printf("\nOdd index values (1,3,5,...): ");
    for (int i = 1; i < SIZE; i += 2)
        printf("%d ", *(ptr + i));

    printf("\n");
    return 0;
}
