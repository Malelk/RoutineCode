/*
 * @Author: your name
 * @Date: 2022-01-12 21:27:53
 * @LastEditTime: 2022-01-12 21:38:37
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \undefinedf:\RoutineCode\C\马原.c
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
				printf("单选第%d题错误\t",i+1);
				sincnt++;
			}
			
		}
		for(int i = 0;i<5;i++)
		{
			scanf("%s",s);
			if(strcmp(dou[i],s)!=0)
			{
				printf("多选第%d题错误\n",i+1);
				doucnt++;
			}
			printf("单选一共错\t%d\t分\n得\t%d\t分\n",sincnt,(20-sincnt));
			printf("多选一共错\t%d\t分\n得\t%d\t分\n",doucnt*2,(10-doucnt*2));
		}
		cnt++;
	}
	

		
}