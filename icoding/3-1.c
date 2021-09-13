#include<stdio.h>
#include<string.h>
char s[100];
int d[4];
int cnt = 3, now;
int main() {
    scanf("%s",s);
    // printf("%d",strlen(s));
    for(int i = 0;i < strlen(s); i++) {
        if(s[i]=='/') {
            d[cnt] = now;
            now = -1;
            cnt--;
            printf("%d\n",i);
            continue;

        }
        if(now == -1) now = s[i] - '0';
        else now = now * 10 + s[i] - '0';
      //  if(now == -1) now 
    }
    d[1] = now;
    printf("%d%02d%02d",d[1],d[3],d[2]);
    return 0;
}