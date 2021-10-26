#include <stdio.h>
#include <string.h>

char c[105];
int main()
{
    scanf("%s", c);
    printf("%d\n", strlen(c));
    for (int i = 0; i < strlen(c); i++)
        printf("%c ", c[i]);
    puts("");
    for (int i = strlen(c) - 1; i >= 0; i--)
        printf("%c", c[i]);
    return 0;
}