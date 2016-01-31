 #include <graphics.h>
#include <ctype.h>
#include <math.h>

#include <stdio.h>



void Initialize(void);void drawEllipse1(int color);
void drawEllipse2(int color);void drawEllipse3(int color);
void drawEllipse4(int color);void border(void);int check(int color, char ch);

	void main() {
	  int color, color1;
	  char ch;

	   Initialize();
	   border();
	   ch = 'R';color1=1;color=1;
	   setcolor(WHITE);outtextxy(100,400,"[ ] Clockwise");
	   setcolor(12);outtextxy(100,400," R");
	   setcolor(WHITE);outtextxy(400,400,"[ ] Counter Clockwise");
	   setcolor(12);outtextxy(400,400," L");
	   setcolor(WHITE);circle(getmaxx()/2,getmaxy()/2,20);
	   do {
	if (ch == 'R' || ch == 'L') {
	  if (ch == 'L') {
		if (color1 == 4) color = 1;
		else color = ++color1;
	  }
	  drawEllipse1(color);color1 = color;color = check(color, ch);
	  drawEllipse2(color);color = check(color, ch);
	  drawEllipse3(color);color = check(color, ch);
	  drawEllipse4(color);
	}
	ch = toupper(getche());
	   } while (ch!='X');
	   closegraph();
	}

	void Initialize(void) {
	  int driver = DETECT,mode, errorcode;
	  initgraph(&driver,&mode, "c:\\tc\\bgi");
	  errorcode = graphresult();
	  if (errorcode != grOk) {
		 printf("Graphics error: %s\n", grapherrormsg(errorcode));
		 printf("<Copy egavga.bgi to c:\\tc\\bgi>");
		 getch();
		 exit(1);
	  }
	}

	void border(void) {
	  int i,b,c,p,q,x,w,y,z;
	  clearviewport();
	  for (i=0,x=w=0,y=479,z=639;
			 i<=15,w<15,x<15,y>464,z>624;
			 i+=1,w+=1,x+=1,y-=1,z-=1) {
		   setcolor(i);
		   line(0,x,639,x);line(z,0,z,479);
		   line(w,0,w,479);line(0,y,639,y);
		 }
	}

	void drawEllipse1(int color) {
	   setfillstyle(SOLID_FILL,color);
	   setcolor(color);
	   fillellipse((getmaxx()/2), (getmaxy()/3), 25, 50);
	}

	void drawEllipse3(int color) {
	   setfillstyle(SOLID_FILL,color);
	   setcolor(color);
	   fillellipse((getmaxx()/2),((getmaxy() / 3)*2), 25, 50);
	}

	void drawEllipse4(int color) {
	   setfillstyle(SOLID_FILL,color);
	   setcolor(color);
	   fillellipse((((getmaxx() / 6)*2)+20),(getmaxy() / 2), 50, 25);
	}

	void drawEllipse2(int color) {
	   setfillstyle(SOLID_FILL,color);
	   setcolor(color);
	   fillellipse((((getmaxx() / 6)*4)-20),getmaxy()/2, 50,25);
	}

	int check(int color,char ch) {
	 if (ch == 'R') {
	   if (color < 4)
		  ++color;
	   else if (color == 4)
		  color = 1;
	 }
	 if (ch == 'L') {
	   if (color == 4)
		 color = 1;
	   else color++;
	 }
	 return color;
	}


