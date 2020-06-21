#include <graphics.h>
#include <conio.h>

main()
{
   int gd = DETECT, gm;

   initgraph(&gd, &gm, "C:\\TC\\BGI");

   line(110,66,80,89);sector(100, 290, 999, 45, 10, 35);settextstyle(4,HORIZ_DIR,2);setcolor(BLUE);
   outtextxy(110,260,"M");
   outtextxy(128,290,"D");
   getch();
   closegraph();
   return 0;
}
