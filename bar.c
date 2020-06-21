#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<time.h>
int main()
{
    int day1;
    float bt1;
    char name[10];
    outtextxy(70,100,"Temperature(degree Fahrenheit)");
    outtextxy(140,610,"1");
    outtextxy(1240,585,"Day");
    setcolor(WHITE);
    line(150, 150,150, 600);
    moveto(150, 600);
    lineto(1200, 600);
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
    outtextxy(79,142,"108");
    //outtextxy(k,180,"");
    outtextxy(79,218,"105");
    //outtextxy(k,256,"");
    //outtextxy(k,296,"");
    outtextxy(79,334,"100");
    //outtextxy(k,372,"");
    //outtextxy(k,410,"");
    outtextxy(k,448,"95");
    //outtextxy(k,486,"");
    //outtextxy(k,524,"");
    outtextxy(k,562,"90");
    setcolor(BLUE);
    int i,i1,i1a;
    float j,j1,j1a;
    FILE *fp;
    fp=fopen("add_t.txt","r+");
    while(fscanf(fp,"%d %f %d %f",&day,&bt,&day1,&bt1)==4)
    {
        i=day;
        i=i*33+150;
        j=bt;
        j=562-(j-90)*7.6;
        i1=day1;
        i1=i1*33+150;
        i1a=i1;
        j1=bt1;
        j1=562-(j1-90)*7.6;
        j1a=j1;
        bar(i1,j1,i1a,j1a);
        setcolor(YELLOW);
        circle(i,j,5);
        setcolor(BLUE);
        line( i, j,i1, j1);
        setcolor(YELLOW);
        circle(i1,j1,5);
        setcolor(BLUE);
        //line(i1a,j1a,i,j);
    }
    setcolor(9);
    settextstyle(0,0,4);
    outtextxy(1200,660,"Back");
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        cleardevice();
        if(f>=1190 && f<=1300 && g>=600 && g<=700)
        {
            system("cls");
            home();
        }
    }
    closegraph();
    getch();
}

