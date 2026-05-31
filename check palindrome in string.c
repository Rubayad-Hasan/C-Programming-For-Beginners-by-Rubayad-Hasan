
#include <stdio.h>
int main() {
    char str[100];
    int len = 0, pal = 1;
    gets(str);
    while(str[len] != '\0') len++;

    for(int i = 0; i < len/2; i++) {
        if(str[i] != str[len-1-i]) {
            pal = 0;
            break;
        }
    }
    if(pal) printf("yes"); else printf("no");
    return 0;
}
