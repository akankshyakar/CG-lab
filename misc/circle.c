#include<graphics.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
	int gd = DETECT,gm;
	float x,y,r,p,q,d;

	printf("Enter coordinates of centre of circle: ");
	scanf("%f%f",&x,&y);
	printf("Enter radius of circle: ");
	scanf("%f",&r);

	initgraph(&gd,&gm,NULL);
	
	d=3-2*r;
	p=0; q=r;
	
	putpixel(x+p,y-q,1);
	
	while(x<y)
	{
		drawcircle(x,y,p,q);
		p++;
		
		if(d<0)
			d=d+4*x+6;
		else
		{
			y++;
			d+=4*(x-y)+10;
			drawcircle(x,y,p,q);
		}
	}
	
	closegraph();
	getch();
}
