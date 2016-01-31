#include <stdio.h>
  #include <graphics.h>
  #include <math.h>
 

  int main() {
        /* request auto detection */
        int gdriver = DETECT, gmode;
        int x1 = 100, y1 = 150, x2, y2;
        int err, x, y, dx, dy, dp, xEnd;
        int twody, twodxdy;

        /* initialize graphic driver */
        initgraph(&gdriver, &gmode, NULL);
     

        /* max position in x and y axis */
        x2 = 100;
        y2 = 300;

        /* draws line from (0, 0) to (x2, y2) */
        dx = x2 - x1;
        dy = y2 - y1;

        twody = 2 * dy;
        twodxdy = 2 * (dy - dx);

        dp = twody - dx;

        if (x1 > x2) {
                x = x2;
                y = y2;
                xEnd = x1;
        } else {
                x = x1;
                y = y1;
                xEnd = x2;
        }

        /* put a dot at the position (x, y) */
        putpixel(x, y, WHITE);

        /* calculate x and y successor and plot the points */
        while (x < xEnd) {
                x = x + 1;
                if (dp < 0) {
                        dp = dp + twody;
                } else {
                        y = y + 1;
                        dp = dp + twodxdy;
                }

                /* put a dot at the given position(x, y) */
                putpixel(x, y, WHITE);

                /* sleep for 50 milliseconds */
                delay(50);
        }

        getch();

        /* deallocate memory allocated for graphic screen */
        closegraph();

        return 0;
  }
