
#include <stdio.h>
#define SIZE 5

void reverseArray(int *arr, int size) {
    int left = 0, right = size - 1;
    while (left < right) {
        int temp    = *(arr + left);
        *(arr + left)  = *(arr + right);
        *(arr + right) = temp;
        left++;
        right--;
    }
}

int main() {
    int arr[SIZE] = {10, 20, 30, 40, 50};

    reverseArray(arr, SIZE);

    printf("Reversed: ");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", *(arr + i));
    printf("\n");
    return 0;
}
