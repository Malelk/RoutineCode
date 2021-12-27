#include<stdio.h>

int main()
{
	struct st {
		unsigned date : 6;
		unsigned month : 4;
		unsigned year :23;
	} date;
	date.date = 1;
	date.month = 1;
	date.year = 1;
	printf("%u %u %u\n",date.date,date.month,date.year);
	printf("%d\n",sizeof(date));
	unsigned char * pc = &date;
	for(int i = 0; i < sizeof(date); i++) 
	{
		printf("%2x ",pc[i]);
	}
	struct  test
	{
		int i : 5;
		//int :2;
		int j : 30;
	}tt;
	int l = sizeof(tt);
	pc = &tt;
	tt.i = 16;
	tt.j = -1;
	printf("\n%d\n",sizeof(tt));
	for(int i = 0;i<l;i++)
	{
		printf("%x ",pc[i]);
	}
}