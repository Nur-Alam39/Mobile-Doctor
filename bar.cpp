#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
    int gd=DETECT,gm;
    initwindow(1360,760);
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    settextstyle(4,HORIZ_DIR,2);
    outtextxy(560,80,"DATA OF WEIGHT");
    outtextxy(85,100,"Weight(Kg)");
    outtextxy(140,610,"0");
    outtextxy(1240,585,"Day");
    setcolor(WHITE);
    line(150, 150,150, 600);
    moveto(150, 600);
    lineto(1200, 600);
    settextstyle(4,HORIZ_DIR,2);
    outtextxy(600,20,"Mobile Doctor\n\n\n");
    setcolor(WHITE);
    setfillstyle(XHATCH_FILL, BLUE);
    bar3d(100, 20, 160, 80, 10, 1);
    setcolor(WHITE);
    outtextxy(110,28,"M");
    outtextxy(128,49,"D");
    int j2=610,k=107;
    setcolor(BLUE);
    outtextxy(310,j2,"05");
    outtextxy(470,j2,"10");
    outtextxy(630,j2,"15");
    outtextxy(790,j2,"20");
    outtextxy(950,j2,"25");
    outtextxy(1110,j2,"30");
    setcolor(RED);
    line(150,488,1180,488);
    setcolor(WHITE);
    outtextxy(1215,475,"Normal");
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
    setcolor(BLUE);
    int day;
    float weight,i,j;
    FILE *fp;
    fp=fopen("add_w.txt","r+");
    while(fscanf(fp,"%d %f",&day,&weight)==2)
    {
        i=day;
        i=i*33+150;
        j=weight;
        j=562-(j-45)*7.6;
        setcolor(BLUE);
        rectangle(i,j,i+32,598);
    }
    setcolor(9);
    settextstyle(0,0,4);
    outtextxy(1200,660,"Back");
    closegraph();
    getch();
    return 0;
}





