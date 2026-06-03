#include <stdio.h>

int main() {
    int a, b, sum;
    int *p1, *p2;
    p1 = &a;
    p2 = &b;

    printf("Enter two numbers: ");
    scanf("%d %d", p1, p2);
    sum = *p1 + *p2;
    printf("Sum = %d\n", sum);
    return 0;
}
