#include <stdio.h>
int main() {
    char str[100], search;
    int count = 0;
    printf("String: "); gets(str);
    printf("Char: "); scanf("%c", &search);

    for(int i = 0; str[i] != '\0'; i++) {
        // Check both cases
        if(str[i] == search || str[i] == search-32 || str[i] == search+32) {
            count++;
        }
    }
    printf("Occurrences: %d", count);
    return 0;
}
