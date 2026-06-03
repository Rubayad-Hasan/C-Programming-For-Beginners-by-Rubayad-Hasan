
#include <stdio.h>

int isSubstring(char *str, char *sub) {
    char *s, *p;
    while (*str != '\0') {          // try every starting position
        s = str;
        p = sub;
        while (*p != '\0' && *s == *p) {  // match characters one by one
            s++;
            p++;
        }
        if (*p == '\0') return 1;   // p reached end = full match found!
        str++;                          // try next position
    }
    return 0;  // no match found
}

int main() {
    char str[200], sub[100];
    printf("Enter main string:   "); scanf("%s", str);
    printf("Enter substring:     "); scanf("%s", sub);

    if (isSubstring(str, sub))
        printf("Substring found!\n");
    else
        printf("Substring NOT found.\n");
    return 0;
}
