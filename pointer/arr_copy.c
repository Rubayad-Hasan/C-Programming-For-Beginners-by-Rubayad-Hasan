#include <stdio.h>
#define SIZE 5

int main() {
    int src[SIZE], dest[SIZE];
    int *p = src, *q = dest;

    printf("Enter %d numbers:\n", SIZE);
    for (int i = 0; i < SIZE; i++)
        scanf("%d", p + i);

    for (int i = 0; i < SIZE; i++)
        *(q + i) = *(p + i);

    printf("Copied array: ");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", *(q + i));
    printf("\n");
    return 0;
}
