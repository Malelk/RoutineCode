#include <stdio.h>

int main()
{
	enum{a=100,b=102,c=105}s;
	s = c;
	printf("%d",b);
}