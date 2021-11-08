#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
char word[1005][105],in_word[1005][105];

bool cmp(char *c1, char *c2)
{
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
    sort(1, cnt, cmp);
    printf("Smallest word: %s\nLargest word: %s\n",word[1],word[cnt]);
    return 0;
}