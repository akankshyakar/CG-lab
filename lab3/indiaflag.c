#include<graphics.h>
#include<stdio.h>
#include<math.h>
#define PI 3.14159265
void circle(int xc,int yc,int r);
void drawcircle(int x, int y, int p, int q);
void linedda(int x1,int y1, int x2, int y2,int col);
void spokes();
int main()
{
 int gd=DETECT ,gm,xc,yc,r,i;
 char ch;
 initgraph(&gd,&gm,NULL);
//orange
 linedda(100,30,400,30,12);
 linedda(100,30,100,60,12);
 linedda(400,30,400,60,12);
 linedda(100,60,400,60,12);
 for(i=0;i<30;i++)
   linedda(100,30+i,400,30+i,4);

//white
 linedda(100,61,400,61,15);
 linedda(100,61,100,90,15);
 linedda(400,61,400,90,15);
 linedda(100,90,400,90,15); 
 for(i=30;i<61;i++)
   linedda(100,30+i,400,30+i,7);
//green
 linedda(100,91,400,91,10);
 linedda(100,91,100,120,10);
 linedda(400,91,400,120,10);
 linedda(100,120,400,120,10);
  for(i=61;i<90;i++)
   linedda(100,30+i,400,30+i,10);
//circle now
 circle(250,75,15);

 spokes();

 delay(20000); 	
 scanf("%d",&ch);
 closegraph();
 getch();
 return 0;
}
void circle(int xc,int yc,int r)
{
 int x=0,y=r,d=3-2*r;
 while(x<y)
 {
   drawcircle(xc,yc,x,y);
   x=x+1;
   if(d<0)
    d=d+4*x+6;
   else
   {
     y=y-1;
     d=d+4*(x-y)+10;
   }
   drawcircle(xc,yc,x,y);
 }
}
void drawcircle(int x, int y, int p, int q)
{
  putpixel(x+p,y+q,BLUE);
  putpixel(x-p,y+q,BLUE);
  putpixel(x+p,y-q,BLUE); 
  putpixel(x-p,y-q,BLUE);
  putpixel(x+q,y+p,BLUE);
  putpixel(x-q,y+p,BLUE);
  putpixel(x+q,y-p,BLUE);
  putpixel(x-q,y-p,BLUE);
}

void linedda(int x1,int y1, int x2, int y2,int col)
{
    int  s, dx, dy, m;
    float xi, yi, x, y;
    
 
    dx = x2 - x1;
    dy = y2 - y1;
 
    if (abs(dx) > abs(dy))
	s = abs(dx);
    else
	s = abs(dy);
 
    xi = dx / (float) s;
    yi = dy / (float) s;
 
    x = x1;
    y = y1;
 
    putpixel(x1, y1, col);
 
    for (m = 0; m < s; m++) {
	x += xi;
	y += yi;
	putpixel(x, y, col);
    }

}

void spokes()
{

        int angle=0,steps,xincrement,yincrement,dx,dy,x1,y1,v,x2,y2,i,r=15;
	x1=150;y1=75;
	float val = PI / 180;
	for(i=0;i<=24;i++)
	{
		x1=250;y1=75;
		x2=x1+r*sin(i*15*val);
		y2=y1+r*cos(i*15*val);
		linedda(x1,y1,x2,y2,1);

	}

}
