#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n / 2; i++)
    {
        int cnt = (n - i * 2 + 1) / 2;
        for (int j = 1; j <= cnt; j++)
            printf(" ");
        for (int j = 1; j <= i * 2 - 1; j++)
            printf("*");
        for (int j = 1; j <= cnt; j++)
            printf(" ");
        puts("");
    }
    if (n % 2)
    {
        for (int j = 1; j <= n; j++)
            printf("*");
        puts("");
    }

    for (int i = n / 2; i; i--)
    {
        int cnt = (n - i * 2 + 1) / 2;
        for (int j = 1; j <= cnt; j++)
            printf(" ");
        for (int j = 1; j <= i * 2 - 1; j++)
            printf("*");
        for (int j = 1; j <= cnt; j++)
            printf(" ");
        puts("");
    }    
    return;
}

int main()
{
    solve();
    return 0;
}