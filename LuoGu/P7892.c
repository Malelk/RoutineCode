#include<stdio.h>
#include<math.h>

int main() {
    int t,n,m;
    scanf("%d",&t);
    while(t--) {
        scanf("%d%d",&n,&m);
        int cnt = 1;
        while(cnt*cnt <= n) cnt++;
        cnt--;
        while(n%cnt&&cnt) cnt--;
        
        if(!cnt) cnt = 1;//printf("%d",cnt);
        if(m>= (cnt+1+(n/cnt)+1)*2) printf("Good\n");
        else printf("Miss\n");
    }
    return 0;
}