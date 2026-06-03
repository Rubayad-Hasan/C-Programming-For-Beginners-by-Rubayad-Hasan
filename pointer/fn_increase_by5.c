
#include <stdio.h>

void increaseBy5(int *n) {   // receives an address (pointer to int)
    *n = *n + 5;              // go to that address and add 5
}

int main() {
    int x = 10;
    printf("Before: %d\n", x);
    increaseBy5(&x);          // pass the address of x
    printf("After:  %d\n", x);  // x is now 15
    return 0;
}
