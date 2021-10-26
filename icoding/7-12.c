#include<stdio.h>

double ans ,now;
char c;

int main() {
    scanf("%lf",&ans);
    while(scanf("%c",&c)!=EOF) {
        scanf("%lf",&now);
        switch (c)
        {
        case '+':
            ans+=now;
            break;
        case '-':
            ans-=now;
            break;
        case '*':
            ans*=now;
            break;
        case '/':
            ans/=now;
            break;
        
        default:
            break;
        }

    }
    printf("%lf",ans);
    return 0;
}