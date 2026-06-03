#include <stdio.h>
int strCompare(char *s1, char *s2) {
    while (*s1 != '\0' && *s2 != '\0') {
        if (*s1 != *s2)
            return *s1 - *s2;
        s1++;
        s2++;
    }
    return *s1 - *s2;
}
int main() {
    char s1[100], s2[100];
    printf("Enter first string:  ");
    scanf("%s", s1);
    printf("Enter second string: ");
     scanf("%s", s2);

    int result = strCompare(s1, s2);
    if      (result == 0){
            printf("Strings are equal\n");
    }
    else if (result >  0) {
        printf("First string is greater\n");
    }
    else {
         printf("Second string is greater\n");
    }
    return 0;
}
