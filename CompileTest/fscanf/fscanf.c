#include<stdio.h>
#include<stdbool.h>
#define len 10
#define TEST "test.txt"
int mode  = 1;
//定义结构体
typedef struct 
{   
    float time;
    char name[50];
}players;
players player[len+5];

//判断时间是否能冲进前十
bool is_topten(float time){
    //定义一个有效数据的个数
    int valid_data;
    FILE *fp1,*fp2,*fp3;
    //定义三个文件指针
    fp1 = fopen(TEST,"r"); 
    fp2 = fopen(TEST,"r"); 
    fp3 = fopen(TEST,"r");
    //选择模式
	players tmp;
    for(valid_data = 0;valid_data<len;valid_data++){
        if(fscanf(fp1,"%s%f",tmp.name,&tmp.time)!=EOF)
			player[valid_data] = tmp;
		else 
			break;
    }

	printf("TEST");
    for(int i=0;i<10;i++){
        printf("%lf\n",player[i].time);
    }
	printf("%d\n",valid_data);
    if(valid_data < 10)
        return true;
    //比较时间
    else{
        if(time < player[valid_data-1].time)
        return true;
        else{ 
        
        return false;
        }
    }

}
void sort(float time,char *name){
    int valid_data;
    FILE *fp,*fp1,*fp2,*fp3;
    //不同模式读取不同文件
    
        fp1 = fopen(TEST,"w+");
   
        fp2 = fopen(TEST,"w+");
   
        fp3 = fopen(TEST,"w+");
    
    for(valid_data = 0;valid_data<len;valid_data++){
        if(mode == 1){
                fp = fp1;
                if((fscanf(fp1,"%s%f",&player[valid_data].name,&player[valid_data].time) )== EOF )
                break;
                else continue;
        }
        if(mode == 2){
                fp = fp2;
                if((fscanf(fp2,"%s %f",&player[valid_data].name,&player[valid_data].time) )== EOF )
                break;
                else continue;
        }
        if(mode == 3){
                fp = fp3;
                if((fscanf(fp3,"%s %f",&player[valid_data].name,&player[valid_data].time) )== EOF )
                break;
                else continue;
        }
    }
//无有效数据
    if(valid_data == 0){
    player[0].name[50] = *name;
    player[0].time = time; 
    fprintf(fp,"%s %f",player[0].name[50],player[0].time);
    return;
    }
//找到输入的time在文件里排的位置
    int j;
    
//j+1就是玩家新的排名
    for(j = 0;j < valid_data;j++){
        if(player[j].time > time)
        break;
    }
    
    //只在文件中存len（10）个有效数据
    
    //h用于交换数据
    if(j == valid_data - 1){
    player[j].name[50] = *name;
    player[j].time = time;
    
    }
    else{
        for(int h = valid_data-1;h > j;h --){
            player[h] = player[h-1];

        }

        player[j].name[50] = *name;
        player[j].time = time;
    }
    for(int count = 0;count < valid_data;count++){
        fprintf(fp,"%s %f\n",player[count].name[50],player[count].time);
    }

    fclose(fp);
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return;
}

void test()
{
	FILE *fp = fopen(TEST,"r");
	char name[55];
	double time;
	fscanf(fp,"%s%lf",name,&time);
	printf("%s%lf",name,time);
}

int main(){
    int mode=1;
     if(is_topten(11.0)){
         printf("true\n");
     }
     else printf("false\n");
     for(int i = 0;i < 10;i++)
        printf("%s %f\n",player[i].name,player[i].time);
    FILE *fw = fopen(TEST,"w");
    for(int i = 0;i < 10;i++)
        fprintf(fw,"%s %f\n",player[i].name,player[i].time);
     return 0;
}