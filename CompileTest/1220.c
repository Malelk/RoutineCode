#include<stdio.h>
#include<windows.h>
 
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0) //必要的，我是背下来的 
 

int main(){
    int cnt = 0;
	while(1){

		if(KEY_DOWN(VK_LBUTTON))printf("%d\n",cnt++);

		
		if(KEY_DOWN(VK_RBUTTON))printf("Y\n");


		
		if(KEY_DOWN(VK_MBUTTON))printf("Y\n");

		
		
	}
 
	return 0;
}