#include <stdio.h>
#include <string.h>

int main() 
{
    char s[1005];
    int l;
    gets(s);
    l = strlen(s);
    while(l) {
        printf("%c",s[--l]);
    }
    return 0;
}