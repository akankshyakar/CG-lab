
#include<graphics.h> 
int main()
{
   int gd = DETECT,gm,x=10,y=10,r=5;
   initgraph(&gd,&gm,NULL);
   while(1)
   {
      circle(x, y, 10);
      x=(x+10)%400;
      y=(y+10)%400;
   }
   delay(5000);
   closegraph();
   return 0;
}
