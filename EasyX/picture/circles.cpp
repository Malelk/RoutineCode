#include <graphics.h>
#include "basic.h"

void circles()
{
	setlinestyle(0, 1);
	for (int i = 1; i <= 300; i+=20)
	{
		circle(i, i, i);
	}
	return;
}