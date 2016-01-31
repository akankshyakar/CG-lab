#include<graphics.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>

void linedraw(float x1, float y1, float x2, float y2)
{
	
	float dx,dy, steps, xincrement,yincrement, v;
	
	dx=x2-x1;
	dy=y2-y1;
	
	if(dx>dy)
		steps=fabs(dx);
	else
		steps=fabs(dy);
		
	xincrement= dx/(float)steps;
	yincrement= dy/(float)steps;
	
	
	//putpixel(x, y, 2);
	for(v=0; v<steps; v++)
	{
		x1= x1 + xincrement;
		y1= y1 + yincrement;
		putpixel(x1, y1, 2);
	}
	
	//getch();
    
    
}

int main()
{
	int gd = DETECT,gm;
	initgraph(&gd,&gm,NULL);
	linedraw(20,20,20,100);
	getch();
	closegraph();
	return 0;
}
