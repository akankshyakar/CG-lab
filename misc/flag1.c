#include<graphics.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#define PI 3.14159265

int main()
{
	int gd = DETECT,gm, i;
	float x1,y1,x2,y2,dx,dy, steps, xincrement,yincrement, v;
	
	y1=20;y2=20;
	for(i=0;i<100;i++)
	{
	x1=20;x2=470;
	//y1=20;y2=600;
	
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
		putpixel(x1, y1, 12);
	}
	y1++; y2++;
	}
	//horizontal
	y1=120;y2=120;
	for(i=0;i<100;i++)
	{
	x1=20;x2=470;
	
	
	dx=x2-x1;
	dy=y2-y1;
	
	if(dx>dy)
		steps=fabs(dx);
	else
		steps=fabs(dy);
		
	xincrement= dx/(float)steps;
	yincrement= dy/(float)steps;
	
	//initgraph(&gd,&gm,NULL);
	//putpixel(x, y, 2);
	for(v=0; v<steps; v++)
	{
		
		x1= x1 + xincrement;
		y1= y1 + yincrement;
		putpixel(x1, y1, WHITE);
	}
	y1++;
	y2++;
	}
	
	//horizontal2
	y1=220;y2=220;
	for(i=0;i<100;i++)
	{
	x1=20;x2=470;
	
	dx=x2-x1;
	dy=y2-y1;
	
	if(dx>dy)
		steps=fabs(dx);
	else
		steps=fabs(dy);
		
	xincrement= dx/(float)steps;
	yincrement= dy/(float)steps;
	
	//initgraph(&gd,&gm,NULL);
	//putpixel(x, y, 2);
	for(v=0; v<steps; v++)
	{
		x1= x1 + xincrement;
		y1= y1 + yincrement;
		putpixel(x1, y1, 2);
	}
	y1++;
	y2++;
	}
	
	//horizontal3
	/*x1=20;x2=470;
	y1=220;y2=220;
	
	dx=x2-x1;
	dy=y2-y1;
	
	if(dx>dy)
		steps=fabs(dx);
	else
		steps=fabs(dy);
		
	xincrement= dx/(float)steps;
	yincrement= dy/(float)steps;
	
	//initgraph(&gd,&gm,NULL);
	//putpixel(x, y, 2);
	for(v=0; v<steps; v++)
	{
		x1= x1 + xincrement;
		y1= y1 + yincrement;
		putpixel(x1, y1, WHITE);
	}
	
	//horizontal4
	x1=20;x2=470;
	y1=320;y2=320;
	
	dx=x2-x1;
	dy=y2-y1;
	
	if(dx>dy)
		steps=fabs(dx);
	else
		steps=fabs(dy);
		
	xincrement= dx/(float)steps;
	yincrement= dy/(float)steps;
	
	//initgraph(&gd,&gm,NULL);
	//putpixel(x, y, 2);
	for(v=0; v<steps; v++)
	{
		x1= x1 + xincrement;
		y1= y1 + yincrement;
		putpixel(x1, y1, WHITE);
	}
	
	//vertical right
	x1=470;x2=470;
	y1=20;y2=320;
	
	dx=x2-x1;
	dy=y2-y1;
	
	if(dx>dy)
		steps=fabs(dx);
	else
		steps=fabs(dy);
		
	xincrement= dx/(float)steps;
	yincrement= dy/(float)steps;
	
	//initgraph(&gd,&gm,NULL);
	//putpixel(x, y, 2);
	for(v=0; v<steps; v++)
	{
		x1= x1 + xincrement;
		y1= y1 + yincrement;
		putpixel(x1, y1, WHITE);
	}
	
	*/
	//Chakra
	int r=50,x,y,p,xc=245,yc=170;

	x=0;
	y=r;
//	putpixel(xc+x,yc-y,1);

	p=3-(2*r);

	for(x=0;x<=y;x++)
	{
		if (p<0)
		{
			y=y;
			p=(p+(4*x)+6);
		}
		else
		{
			y=y-1;

			p=p+((4*(x-y)+10));
		}

		putpixel(xc+x,yc-y,1);
		putpixel(xc-x,yc-y,1);
		putpixel(xc+x,yc+y,1);
		putpixel(xc-x,yc+y,1);
		putpixel(xc+y,yc-x,1);
		putpixel(xc-y,yc-x,1);
		putpixel(xc+y,yc+x,1);
		putpixel(xc-y,yc+x,1);

	}
	
	//spokes
	int angle=0;
	x1=245;y1=170;
	float val = PI / 180;
	for(i=0;i<=24;i++)
	{
		x1=245;y1=170;
		x2=x1+r*sin(i*15*val);
		y2=y1+r*cos(i*15*val);
		
		dx=x2-x1;
		dy=y2-y1;
	
		if(dx>dy)
			steps=fabs(dx);
		else
			steps=fabs(dy);
			
		xincrement= dx/(float)steps;
		yincrement= dy/(float)steps;
	
	//initgraph(&gd,&gm,NULL);
	//putpixel(x, y, 2);
	
		for(v=0; v<steps; v++)
		{
			x1= x1 + xincrement;
			y1= y1 + yincrement;
			putpixel(x1, y1, 1);
		}
	}
	
	x1=245; y1=170;
	x2=245; y2=120;
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
		putpixel(x1, y1, 12);
	}
	getch();
    closegraph();
    return 0;
}
