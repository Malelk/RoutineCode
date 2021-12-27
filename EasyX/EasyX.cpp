#include <stdio.h>
#include <graphics.h>
#include <easyx.h>
#include "picture\basic.h"

#define PLSBLUE (RGB(0,49,83))

int main()
{
	initgraph(600, 400,EW_SHOWCONSOLE);
	
	//setbkcolor(LIGHTMAGENTA);
	//154,180,205
	setbkcolor(RGB(218, 227, 230));
	setbkmode(TRANSPARENT);
	settextcolor(RGB(154, 180, 205));
	cleardevice();
	IMAGE img;
	loadimage(&img, "./res/2.jpg",657/2,767/2);
	int cnt = 0;
	while (true)
	{
		
	if (MouseHit())
	{
		MOUSEMSG msg = GetMouseMsg();
		printf("第%d操作 x = %d, y = %d \n", ++cnt, msg.x, msg.y);
		cleardevice();
		putimage(0, 0, &img);
		
		switch (msg.uMsg)
		{
		case WM_LBUTTONDOWN:
			outtextxy(msg.x - textwidth("左键按下")/2, msg.y - textheight("左键按下")/2, "左键按下");
			break;
		case WM_RBUTTONDOWN:
			outtextxy(msg.x - textwidth("右键按下") / 2,msg.y - textheight("右键按下")/2, "右键按下");
			break;
		default:
			break;
		}
	}
	//cleardevice();
	}

	closegraph();
	
	return 0;
}