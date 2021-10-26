#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
int main()
{
    int i;
    char a[10];
    
    scanf("%s",a);
    int n=strlen(a);
    printf("%d\n",n);
    
    for(i=0;i<=n-1;i++)
    printf("%c ",a[i]);
   
    printf("\n");
    for(;n>=1;n--)
    printf("%c",a[n-1]);
    
    return 0;
}