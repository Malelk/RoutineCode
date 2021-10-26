#include<stdio.h>

int ans[10];
int isNum(char i) {
    if(i>='0'&&i<='9') return 1;
    return 0;
}

int main() {

    char c;
    while(scanf("%c",&c)!=EOF) {
        if(isNum(c)) ans[c-'0']++;
    }
    printf("Digit:	0	1	2	3	4	5	6	7	8	9\nOccurrences:	");
    for(int i = 0;i<10;i++) 
        printf("%d ",ans[i]);
    return 0;
}