#include<graphics.h>
#include<conio.h>

main()
{
   int gd = DETECT, gm;

   initgraph(&gd, &gm, "C:\\TC\\BGI");

   setfillstyle(SOLID_FILL, RED);
   //circle(100, 100, 50);
   rectangle(200,200,260,220);
   //floodfill(100, 100, WHITE);
   floodfill(207,207, WHITE);

   getch();
   closegraph();
   return 0;
}

