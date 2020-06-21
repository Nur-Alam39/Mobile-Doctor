#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<string.h>
int MOuse()
{
    int x, y;
    while(!ismouseclick(WM_RBUTTONDOWN))
        delay(50);
    getmouseclick(WM_LBUTTONDOWN, x,y);
    return x;
}
int i=1;
void logo()
{
    setcolor(WHITE);
    setfillstyle(XHATCH_FILL, 1);
    bar3d(100, 30, 160, 90, 26, 1);
    settextstyle(10,HORIZ_DIR,4);
    outtextxy(109,31,"M");
    outtextxy(129,51,"D");
    setfillstyle(SOLID_FILL, 14);
    rectangle(170, 44, 175, 66);
    floodfill(174, 65, WHITE);
    rectangle(163,53, 181, 58);
    floodfill(170, 45, WHITE);
    floodfill(169, 57, WHITE);
    floodfill(180, 57, WHITE);
    setfillstyle(SOLID_FILL, 1);
    floodfill(140,25,15);
    floodfill(162,32,15);
    setcolor(3);
    settextstyle(4,HORIZ_DIR,2);
    outtextxy(600,20,"Mobile Doctor");
    settextstyle(3,HORIZ_DIR,1);
    setcolor(WHITE);
    outtextxy(1050,105,"Date:");
    outtextxy(1050,135,"Time:");
    setcolor(3);
    outtextxy(1100,105,__DATE__);
    outtextxy(1100,135,__TIME__);
}
int main()
{
    int gd=DETECT,gm;
    initwindow(1360,760);
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    cleardevice();
    settextstyle(4,DEFAULT_FONT,2);
    setcolor(3);
    outtextxy(580,80,"HOME PAGE");
    settextstyle(3,DEFAULT_FONT,1);
    outtextxy(190,110,"Welcome,");
    setcolor(WHITE);
    // outtextxy(280,110,namea);
    setcolor(WHITE);
    outtextxy(200,200,"Weight chart");
    outtextxy(360,200,"Sugar level chart");
    outtextxy(560,200,"Body temperature chart");
    outtextxy(830,200,"Blood pressure chart");
    outtextxy(1065,200,"Diagnose");
    outtextxy(200,255,"Drugs Index");
    outtextxy(350,255,"Profile");
    outtextxy(600,255,"Logout");
    setcolor(3);
    rectangle(190,194,320,230);
    rectangle(350,194,520,230);
    rectangle(550,194,780,230);
    rectangle(820,194,1020,230);
    rectangle(190,250,310,285);
    rectangle(340,250,410,285);
    rectangle(440,250,560,285);
    rectangle(590,250,665,285);
    rectangle(1050,194,1160,230);
    outtextxy(200,370,"Tips for today :");
    line(200,394,320,394);
    setcolor(2);
    outtextxy(447,255,"Refreshment");
    logo();
    closegraph();
    getch();
    return 0;
}
