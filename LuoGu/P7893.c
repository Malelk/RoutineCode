#include <stdio.h>

int main()
{
    unsigned long long t, n, p;
    //long long t, n, p;
    scanf("%lld", &t);
    while (t--)
    {
        scanf("%lld%lld", &n, &p);
        if (p == 1) {
            printf("0\n");
            continue;
        }
        if (n == 0) {
            printf("0\n");
            continue;
        }
        unsigned long long ans = n,now = 1;
        int cnt = 0;
      //  printf("%lld\n", now);
        int flag = 1;
        now = p;
        while (now<=n&&now%p==0)
        {
            
            if(now>n) break;
            flag *= -1;
            if(flag == -1)             
                ans -= (n/now);
            else ans+=(n/now);
            now *= p;
        //    now /= p;
        }
        printf("%lld\n", ans);
    }
    return 0;
}