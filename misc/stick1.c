#include<graphics.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int i, gd = DETECT,gm;
	initgraph(&gd,&gm,NULL);
	
	int xc=100, yc=100, x=0, r=50;
	int y=r, p=1.25-r;
	
	while(x<y)
	{
		putpixel(xc+x,yc+y,2);
		putpixel(xc-x,yc+y,2);
		putpixel(xc+x,yc-y,2);
		putpixel(xc-x,yc-y,2);
		putpixel(xc+y,yc+x,2);
		putpixel(xc-y,yc+x,2);
		putpixel(xc+y,yc-x,2);
		putpixel(xc-y,yc-x,2);
		x=x+1;
	
		if(p<0)
			p=p+2*x+1;
		else
		{
			y=y-1;
			p=p+2*(x-y)+1;	
		}
		
		//drawcircle(xc,yc,x,y);
	}
	
	//body
	int dx,dy,end, x1=100,y1=150,x2=100,y2=400;
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
	
	putpixel(x,y,2);
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
	
		putpixel(x,y,2);
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
	
			putpixel(x,y,2);
		}
	}
	
	//right hand
	x1=100;y1=200;x2=180;y2=50;
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
	
	putpixel(x,y,2);
	while(x<end)
	{
		x=x+1;
		
		if(p<0)
			p=p+2*dy;
		
		else
		{
			y=y-1;
			p=p+2*(dy-dx);
		}
	
		putpixel(x,y,2);
	}
	
	//right leg
	x1=100;y1=400;x2=180;y2=250;
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
	
	putpixel(x,y,2);
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
	
		putpixel(x,y,2);
	}
	
	//left leg
	int end1;
	x1=100;y1=230;x2=20;y2=480;
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
	
	putpixel(x,y,2);
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
	
		putpixel(x,y,2);
	}
	
	//left hand
	x1=100;y1=800;x2=20;y2=30;
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
	
	putpixel(x,y,2);
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
	
		putpixel(x,y,2);
	}
	
	
	delay(10000);
	
	closegraph();
	return 0;
}		
