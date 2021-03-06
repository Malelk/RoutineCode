#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
char word[1005][105],in_word[1005][105];

bool cmp(char *c1, char *c2)//判断c1是否小于c2
{
    //printf("true");
    // for (int i = 0; i < strlen(c1); i++)
    // {
    //     if ('a' <= c1[i] && c1[i] <= 'z')
    //         c1[i] = 'A' + c1[i] - 'a';
    // }
    // for (int i = 0; i < strlen(c2); i++)
    // {
    //     if ('a' <= c2[i] && c2[i] <= 'z')
    //         c2[i] = 'A' + c2[i] - 'a';
    // }
    //printf("%s\n",c2);
    int l1 = strlen(c1), l2 = strlen(c2);
    int now = 0,char_1,char_2;
    while((now<l1)&&(now<l2)) {
        int i = now;
        if ('a' <= c1[i] && c1[i] <= 'z') char_1 = 'A' + c1[i] - 'a';
        if('a' <= c2[i] && c2[i] <= 'z') char_2 = 'A' + c2[i] - 'a';
        if(char_1<char_2) return true;
        if(char_1>char_2) return false;
        now++;
    }
    if(now == l1) return true;
    return false;
}

void sort(int l, int r, bool (*cmp)(char *,char *))
{
    if(l>=r) return;
    int ll = l,rr = r;
    char tmp[1005];
    while(l < r) {
        while(r>l&&cmp(word[l],word[r])) {
            r--;
        }
        strcpy(tmp,word[l]);
        strcpy(word[l],word[r]);
        strcpy(word[r],tmp);
   //     swap(word[l],word[r]);
        while(l<r&&(cmp(word[l],word[r]))) 
        {
            l++;
        }
        strcpy(tmp,word[l]);
        strcpy(word[l],word[r]);
        strcpy(word[r],tmp);
    }
    sort(ll,l-1,cmp);
    sort(l+1,rr,cmp);
    return;
}

int main()
{
    int cnt = 0;
    while (scanf("%s", word[++cnt]))
        if (strlen(word[cnt]) == 4)
            break;
    // char c1[5]="abcd";
    // char c2[5]="abba";
    // printf("%d",cmp(c1,c2));
    sort(1, cnt, cmp);
   // printf("%d\n",cnt);
    // for(int i =1;i<=cnt;i++) 
    // {
    //     printf("%s\n",word[i]);
    // }
    printf("%s %s",word[1],word[cnt]);
    return 0;
}