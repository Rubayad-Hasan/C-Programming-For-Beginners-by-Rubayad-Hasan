
#include <stdio.h>

void addBtoA(int *a, int b) {
   *a = *a + b;
}

int main() {
    int a = 10, b = 3;
    printf("Before: a = %d\n", a);
    addBtoA(&a, b);
    printf("After:  a = %d\n", a);
    return 0;
}
