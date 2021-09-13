#include<stdio.h>
char s[2][5] = {"PM","AM"};
int main() {
    int h,m;
    int ah;
    int cnt;
    scanf("%d:%d",&h,&m);
    if(h==0) {
        
        ah = 12;
        cnt = 1;
    }
    if(h==12) {
        ah = 12;
        cnt = 0;
    }
    if(0<h&&h<12) {
        cnt = 1;
        ah = h;
    }
    if(12<h)   {
        ah = h - 12;
        cnt = 0;
    }  
    printf("%d:%02d %s",ah,m,s[cnt]);
    return 0;
}