#include<graphics.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
	int gd = DETECT,gm;
	float x1,y1,x2,y2,dx,dy, steps, xincrement,yincrement, v;
	
	printf("Enter 1st point coordinates: ");
	scanf("%f%f",&x1,&y1);
	printf("Enter 2nd point coordinates: ");
	scanf("%f%f",&x2,&y2);
	
	dx=x2-x1;
	dy=y2-y1;
	
	if(dx>dy)
		steps=fabs(dx);
	else
		steps=fabs(dy);
		
	xincrement= dx/(float)steps;
	yincrement= dy/(float)steps;
	
	initgraph(&gd,&gm,NULL);
	//putpixel(x, y, 2);
	for(v=0; v<steps; v++)
	{
		x1= x1 + xincrement;
		y1= y1 + yincrement;
		putpixel(x1, y1, 2);
	}
	
	getch();
    closegraph();
    return 0;
}
