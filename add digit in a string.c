#i
#include <stdio.h>
int main() {
    char str[100];
    int sum = 0;
    gets(str);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            sum += (str[i] - '0');
        }
    }
    printf("Sum: %d", sum);
    return 0;
}
