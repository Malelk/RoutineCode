/*
 * @Author: your name
 * @Date: 2022-01-12 21:27:53
 * @LastEditTime: 2022-01-12 21:38:37
 * @LastEditors: Please set LastEditors
 * @Description: ��koroFileHeader�鿴���� ��������: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \undefinedf:\RoutineCode\C\��ԭ.c
 */
#include <stdio.h>
#include <string.h>
int main()
{
	int cnt = 1;
	char s[100];
	char sin[25]="bcdddbbdbdbcbdbcaccb";
	char dou[6][10]={
		"bd","abc","bd","abcd","abd"
	};
	while(1)
	{
		int sincnt = 0;
		int doucnt = 0;
		printf("CNT = %d\n",cnt);
		scanf("%s",s);
		for(int i = 0; i < 20; i++)
		{
			if(s[i]!=sin[i])
			{
				printf("��ѡ��%d�����\t",i+1);
				sincnt++;
			}
			
		}
		for(int i = 0;i<5;i++)
		{
			scanf("%s",s);
			if(strcmp(dou[i],s)!=0)
			{
				printf("��ѡ��%d�����\n",i+1);
				doucnt++;
			}
			printf("��ѡһ����\t%d\t��\n��\t%d\t��\n",sincnt,(20-sincnt));
			printf("��ѡһ����\t%d\t��\n��\t%d\t��\n",doucnt*2,(10-doucnt*2));
		}
		cnt++;
	}
	

		
}