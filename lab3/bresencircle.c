#include<graphics.h>
#include<stdio.h>
#include<math.h>
void drawcircle(int, int, int, int);
int main()
{
 int gd=DETECT ,gm,xc,yc,r;
 char ch;
 initgraph(&gd,&gm,NULL);
 printf("enter x, y and r  :");
 scanf("%d%d%d",&xc,&yc,&r);
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
 delay(20000); 	
 scanf("%d",&ch);
 closegraph();
 getch();
 return 0;
}

void drawcircle(int x, int y, int p, int q)
{
  putpixel(x+p,y+q,RED);
  putpixel(x-p,y+q,RED);
  putpixel(x+p,y-q,RED); 
  putpixel(x-p,y-q,RED);
  putpixel(x+q,y+p,RED);
  putpixel(x-q,y+p,RED);
  putpixel(x+q,y-p,RED);
  putpixel(x-q,y-p,RED);
}
