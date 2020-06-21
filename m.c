#include<graphics.h>
#include<conio.h>

main()
{
   int gd = DETECT, gm;

   initgraph(&gd, &gm, "C:\\TC\\BGI");

   setfillstyle(XHATCH_FILL, RED);
   circle(100, 100, 50);
   floodfill(100, 100, WHITE);

    moveto(400, 400);
   lineto(200, 200);


   getch();
   closegraph();
   return 0;
}
