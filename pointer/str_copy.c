#include <stdio.h>
void strConcat(char *dest, char *src) {
    while (*dest != '\0')
        dest++;

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main() {
    char s1[200], s2[100];
    printf("Enter first string:  ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);
    strConcat(s1, s2);
    printf("Concatenated: %s\n", s1);
    return 0;
}
