
#include <stdio.h>
#define SIZE 5

int main() {
    int arr[SIZE];
    int *ptr = arr;
    int key, found = 0;

    printf("Enter %d numbers:\n", SIZE);
    for (int i = 0; i < SIZE; i++)
        scanf("%d", ptr + i);

    printf("Enter number to search: ");
    scanf("%d", &key);

    for (int i = 0; i < SIZE; i++) {
        if (*(ptr + i) == key) {   // if element matches key
            printf("Found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found) printf("Not found\n");

    return 0;
}
