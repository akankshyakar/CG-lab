#include<stdio.h>
#include<graphics.h>

#include<math.h>

void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	int x=200,y=200,r=20,x1=300,y1=200;;
	float c=.1,i,scale=1;
        int q=90;
        r=r*scale;
       
        
	for( i=0;i<100;i=i+.1)
	{
        x=abs(x*cos(q)-y*sin(q));
        y=abs(x*sin(q)+y*cos(q));
        x1=abs(x1*cos(q)-y1*sin(q));
        y1=abs(x1*sin(q)+y1*cos(q));
                 
		delay(10);
		cleardevice();
//man
                circle((x+x1+2*i)/2,y-60,10);//head
                line((x+x1+2*i)/2,(y-50),(x+x1+2*i)/2,y);//body
                line(((x+x1+2*i)/2)-10,y-40,((x+x1+2*i)/2)+10,(y-40));//hands
                line(((x+x1+2*i)/2),y,((x+x1+2*i)/2)+10,(y+10));//right leg
                line(((x+x1+2*i)/2)-10,(y+10),((x+x1+2*i)/2),y);//left leg
//bike                
                line((x+i),y-20,(x1+i)*scale,y1-20);
                
//wheel 1
		line(x+i,y,x+i+r*cos(i),(scale*y+r*sin(i)));
		line(x+i,y*scale,x+i+r*cos(90+i),scale*y+r*sin(90+i));
		line(x+i,y*scale,x+i+r*cos(135+i),scale*y+r*sin(135+i));
		line(x+i,y*scale,x+i+r*cos(180+i),scale*y+r*sin(180+i));
		line(x+i,y*scale,x+i+r*cos(225+i),scale*y+r*sin(225+i));
		line(x+i,y*scale,x+i+r*cos(315+i),scale*y+r*sin(315+i));
		circle(x+i,y*scale,r);
//wheel 2
                line(x1+i,y1,x1+i+r*cos(i),y1+r*sin(i));
		line(x1+i,y1,x1+i+r*cos(90+i),y1+r*sin(90+i));
		line(x1+i,y1,x1+i+r*cos(135+i),y1+r*sin(135+i));
		line(x1+i,y1,x1+i+r*cos(180+i),y1+r*sin(180+i));
		line(x1+i,y1,x1+i+r*cos(225+i),y1+r*sin(225+i));
		line(x1+i,y1,x1+i+r*cos(315+i),y1+r*sin(315+i));
		circle(x1+i,y1,r);
//for pausing
		if(kbhit())
		{
			if(getch())
			{
				printf("break");
				if(getch()){}
			 }

		}
	}
        
	
}
