#include <stdio.h>
#define SIZE 5

int main() {
    int arr[SIZE];
    int *ptr = arr;

    printf("Enter %d numbers:\n", SIZE);
    for (int i = 0; i < SIZE; i++)
        scanf("%d", ptr + i);


    int left = 0, right = SIZE - 1;
    while (left < right) {
        int temp = *(ptr + left);
        *(ptr + left)  = *(ptr + right);
        *(ptr + right) = temp;
        left++;
        right--;
    }

    printf("Reversed array: ");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", *(ptr + i));
    printf("\n");
    return 0;
}
