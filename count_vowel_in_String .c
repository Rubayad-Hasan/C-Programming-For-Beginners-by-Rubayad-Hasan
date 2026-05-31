#include<stdio.h>
int main()
{
    char str [100];
    int count = 0;
    gets (str);

    for (int i = 0 ;str [i] != '\0';i++){
        char c = str[i];
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
            count++;
        }
    }
    printf("Vowels: %d", count);
    return 0;
}
