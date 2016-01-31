#include<graphics.h>
#include<stdio.h>
#include<math.h>
void linedda(int,int,int,int);
int main()
{
 int gd=DETECT ,gm,x1,x2,y1,y2;
 char ch;
 initgraph(&gd,&gm,NULL);
 printf("enter x1,y1,x2,y2");
 scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
 linedda(x1,y1,x2,y2);
delay(5000); 	
 scanf("%d",&ch);
 return 0;
}

void linedda(int x1,int y1, int x2, int y2)
{
 int dx,dy,steps,Xinc,Yinc,x,y,i;
 dx=x1-x2;
 dy=y1-y2;
 if (dx > dy)
   steps = abs(dx);
 else
   steps = abs(dy);
 Xinc = dx / (float) steps;
 Yinc = dy / (float) steps;
 for(i=0;i<steps;i++)
 {
   x=x+Xinc;
   y=y+Yinc;
   putpixel(x,y,RED);
 }

}
