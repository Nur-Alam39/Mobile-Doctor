#include<graphics.h>
#include<conio.h>
#include"stdio.h"

main()
{

    int gd=DETECT,gm,points[]= {320,150,420,300,150,300,320,150,90,400};

    initgraph(&gd, &gm, "C:\\TC\\BGI");
    setfillstyle(XHATCH_FILL, RED);floodfill(100, 100, RED);
    settextstyle(4,HORIZ_DIR,2);
    outtextxy(600,20,"Mobile Doctor\n\n\n");
    outtextxy(600,60,"HOME PAGE\n\n");

    settextstyle(4,HORIZ_DIR,2);
    outtextxy(85,100,"Weight(Kg)");
    outtextxy(140,610,"0");
    outtextxy(1240,585,"Day");
    setcolor(WHITE);
    moveto(150, 150);
    lineto(150, 600);
    moveto(150, 600);
    lineto(1200, 600);
    setcolor(BLUE);
    float i,j,i1,j1,i2;
   /*for(*/i=183,j=463.6,i1=315,j1=490;/* i<=1200&&i1<=1200&&j<=1200&&j1<=1200; i+=7,j+=11,i1+=19,j1+=1)
    {*/

        moveto(i, j);
        lineto(i1, j1);
        setcolor(YELLOW);
        circle(i1,j1,5);
         setcolor(BLUE);
        moveto( 315,777);
        lineto(447,435);
         moveto(447,435);
        lineto(579, 435);
        setcolor(YELLOW);
        circle(579,435,5);
         setcolor(BLUE);
        moveto( 579,425);
        lineto(711,425);
   // }
    int j2=610,k=107;
    setcolor(BLUE);
    outtextxy(325-10,j2,"05");
    outtextxy(500-10,j2,"10");
    outtextxy(675-10,j2,"15");
    outtextxy(850-10,j2,"20");
    outtextxy(1025-10,j2,"25");
    outtextxy(1200-10,j2,"30");
    setcolor(WHITE);
    outtextxy(500,650,"(with five days interval)");
    setcolor(BLUE);
    outtextxy(90,142,"100");
    outtextxy(k,180,"95");
    outtextxy(k,218,"90");
    outtextxy(k,256,"85");
    outtextxy(k,296,"80");
    outtextxy(k,334,"75");
    outtextxy(k,372,"70");
    outtextxy(k,410,"65");
    outtextxy(k,448,"60");
    outtextxy(k,486,"55");
    outtextxy(k,524,"50");
    outtextxy(k,562,"45");

    //floodfill(100, 100, WHITE);
    //drawpoly(9, points);
    getch();
    closegraph();
    return 0;
}
