#include<stdio.h>
void main()
{
	float pi =3.14159 ,area;
	int r;
	for(r=1 ; r<=10;r++)
	{
		area=pi*r*r;
		if(area>100) 
		{
			break ;
		}
		printf("r=%g,area=%g\n",r,area);
	}
}