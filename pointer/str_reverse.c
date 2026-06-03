#include <stdio.h>

void strReverse(char *s) {
    char *end = s;
    while (*end != '\0')  // move end pointer to last character
        end++;
    end--;  // step back one (from '\0' to last real character)

    while (s < end) {     // swap characters from both ends moving inward
        char temp = *s;
        *s   = *end;
        *end = temp;
        s++;
        end--;
    }
}

int main() {
    char str[100];
    printf("Enter a string: "); scanf("%s", str);
    strReverse(str);
    printf("Reversed: %s\n", str);
    return 0;
}
