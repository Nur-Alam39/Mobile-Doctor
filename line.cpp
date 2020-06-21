#include <graphics.h>
#include <conio.h>

main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TC\\BGI");
    settextstyle(3,HORIZ_DIR,2);
    outtextxy(600,20,"Mobile Doctor\n\n\n");
    settextstyle(3,HORIZ_DIR,2);
    outtextxy(580,80,"DATA OF WEIGHT");
    setcolor(BLUE);
    outtextxy(145,220,"Date->");
    outtextxy(285,220,"01");
    outtextxy(380,220,"02");
    outtextxy(475,220,"03");
    outtextxy(570,220,"04");
    outtextxy(665,220,"05");
    outtextxy(760,220,"06");
    outtextxy(855,220,"07");
    outtextxy(950,220,"08");
    outtextxy(1045,220,"09");
    outtextxy(1140,220,"10");
    setcolor(WHITE);
    outtextxy(100,260,"Weight(Kg)->");
    line(250, 250, 1200, 250);
    line(250,300,1200,300);
    int i,j1=250,j2=300;
    for(i=250; i<=1200; i+=95)
        line(i,j1,i,j2);
    setcolor(BLUE);
    outtextxy(145,320,"Date->");
    setcolor(BLUE);
    outtextxy(285,320,"11");
    outtextxy(380,320,"12");
    outtextxy(475,320,"13");
    outtextxy(570,320,"14");
    outtextxy(665,320,"15");
    outtextxy(760,320,"16");
    outtextxy(855,320,"17");
    outtextxy(950,320,"18");
    outtextxy(1045,320,"19");
    outtextxy(1140,320,"20");
    setcolor(WHITE);
    outtextxy(100,360,"Weight(Kg)->");
    line(250, 350, 1200, 350);
    line(250,400,1200,400);
    int i1,j11=350,j21=400;
    for(i1=250; i1<=1200; i1+=95)
        line(i1,j11,i1,j21);
    setcolor(BLUE);
    outtextxy(145,420,"Date->");

    outtextxy(285,420,"21");
    outtextxy(380,420,"22");
    outtextxy(475,420,"23");
    outtextxy(570,420,"24");
    outtextxy(665,420,"25");
    outtextxy(760,420,"26");
    outtextxy(855,420,"27");
    outtextxy(950,420,"28");
    outtextxy(1045,420,"29");
    outtextxy(1140,420,"30");
    setcolor(WHITE);
    outtextxy(100,460,"Weight(Kg)->");
    line(250, 450, 1200, 450);
    line(250,500,1200,500);
    int i12,j112=450,j212=500;
    for(i12=250; i12<=1200; i12+=95)
        line(i12,j112,i12,j212);


    getch();
    closegraph();
    return 0;
}
