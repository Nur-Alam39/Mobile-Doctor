#include <graphics.h>
#include <conio.h>

main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TC\\BGI");
    settextstyle(4,HORIZ_DIR,2);
    outtextxy(600,20,"Mobile Doctor\n\n\n");
    setcolor(WHITE);
    setfillstyle(XHATCH_FILL, BLUE);
    bar3d(100, 20, 160, 80, 10, 1);
    setcolor(WHITE);
    outtextxy(110,28,"M");
    outtextxy(128,49,"D");
    getch();
    closegraph();
    return 0;
}
