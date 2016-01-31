#include<graphics.h>
#include<stdio.h>
#include<math.h>
void mpcircle(int xc,int yc,int r);
void pixel(int xc,int yc,int x,int y);
void blineup(int x1,int y1,int x2, int y2);
void blinedown(int x1,int y1,int x2, int y2);
int main()
{
 int gd=DETECT ,gm;
 char ch;
 initgraph(&gd,&gm,NULL);
 //stickman1
 mpcircle(100,100,50);
 blineup(100,150,100,300);//body
 blineup(100,300,180,250);//rightleg
 blinedown(20,350,100,300);//left leg
 blineup(100,200,20,150);//left hand
 blinedown(100,200,180,150);//right hand
 //stickman2
 mpcircle(300,100,50);
 blineup(300,150,300,300);//body
 blineup(300,300,380,250);//rightleg
 blinedown(220,350,300,300);//left leg
 blineup(300,200,220,200);//left hand
 blineup(300,200,380,200);//right hand
//stickman3
 mpcircle(500,100,50);
 blineup(500,150,500,300);//body
 blineup(500,300,580,250);//rightleg
 blinedown(420,350,500,300);//left leg
 blineup(500,200,420,150);//left hand
 blinedown(500,200,580,150);//right hand
 getch();
 return 0;
}
void blineup(int x1,int y1,int x2, int y2)
{
  	int dx,dy,end,p,x,y;
	dx=abs(x1-x2);
	dy=abs(y1-y2);
	p=2*dy-dx;
	
	if(x1>x2)
	{
		x=x2;y=y2;
		end=x1;
	}
	else
	{
		x=x1;y=y1;
		end=x2;
	}
	
	putpixel(x,y,7);
	while(x<end)
	{
		x=x+1;
		
		if(p<0)
			p=p+2*dy;
		
		else
		{
			y=y+1;
			p=p+2*(dy-dx);
		}
	
		putpixel(x,y,7);
	}
	if(x1==x2)
	{
		while(y<=y2)
		{
			//x=x+1;
		
			if(p<0)
				p=p+2*dy;
		
			else
			{
				y=y+1;
				p=p+2*(dy-dx);
			}
	
			putpixel(x,y,7);
		}
	}

}  

void blinedown(int x1,int y1,int x2, int y2)
{
       int end1,end,dx,dy,p,x,y;
	dx=abs(x1-x2);
	dy=abs(y1-y2);
	p=2*dy-dx;
	
	if(x1>x2)
	{
		x=x2;y=y2;
		end=x1;
		end1=y1;
	}
	else
	{
		x=x1;y=y1;
		end=x2;
		end1=y2;
	}
	
	putpixel(x,y,7);
	while(x<end&&y>end1)
	{
		x=x+1;
		
		if(p<0)
			p=p+2*dy;
		
		else
		{
			y=y-1;
			p=p+2*(dy-dx);
		}
	
		putpixel(x,y,7);
	}
	
}

void mpcircle(int xc,int yc,int r)
{
	    int x,y,Pk;
            x=0;
            y=r;
            Pk=1-r;
            pixel(xc,yc,x,y);
            while(x<y)
            {
                        if(Pk<0)
                        {
                                    x=x+1;
                                    Pk=Pk+(2*x)+1;
                        }
                        else
                        {
                                    x=x+1;
                                    y=y-1;
                                    Pk=Pk+(2*x)-(2*y)+1;
                        }
                        pixel(xc,yc,x,y);
            }
}
void pixel(int xc,int yc,int x,int y)
{
            putpixel(xc+x,yc+y,7);
            putpixel(xc+y,yc+x,7);
            putpixel(xc-y,yc+x,7);
            putpixel(xc-x,yc+y,7);
            putpixel(xc-x,yc-y,7);
            putpixel(xc-y,yc-x,7);
            putpixel(xc+y,yc-x,7);
            putpixel(xc+x,yc-y,7);
}
