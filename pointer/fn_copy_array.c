#include <stdio.h>
#define SIZE 5

void copyArray(int *src, int *dest, int size) {
    for (int i = 0; i < size; i++)
        *(dest + i) = *(src + i);
}

int main() {
    int src[SIZE] = {1, 2, 3, 4, 5};
    int dest[SIZE];

    copyArray(src, dest, SIZE);

    printf("Destination array: ");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", *(dest + i));
    printf("\n");
    return 0;
}
