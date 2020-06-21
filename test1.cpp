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
int day;
float w_n;
char mont1[20];
FILE*all_fp;
void logo()
{
    setcolor(WHITE);
    setfillstyle(XHATCH_FILL, 1);
    bar3d(100, 30, 160, 90, 26, 1);
    settextstyle(10,HORIZ_DIR,4);
    setcolor(WHITE);
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
void calender()
{
    logo();
    int color=7;
    setcolor(10);
    settextstyle(3,HORIZ_DIR,2);
    outtextxy(630,130,"Month :");
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
    setcolor(color);
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
    setcolor(color);
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
    outtextxy(1235,420,"31");
    setcolor(color);
    line(250, 450, 1295, 450);
    line(250,500,1295,500);
    int i12,j112=450,j212=500;
    for(i12=250; i12<=1295; i12+=95)
        line(i12,j112,i12,j212);
    setcolor(9);
    settextstyle(0,0,4);
    outtextxy(1200,660,"Back");
    setcolor(3);
    int x1=200,y1=580,x2,y2,i11;
    for(i11=1; i11<=12; i11++)
    {
        rectangle(x1,y1,x1+80,y1+35);
        x1=x1+90;
    }
    setcolor(10);
    settextstyle(3,HORIZ_DIR,1);
    outtextxy(200,540,"Select month :");
    setcolor(15);
    settextstyle(3,HORIZ_DIR,1);
    outtextxy(220,585,"JAN");
    outtextxy(220+90,585,"FEB");
    outtextxy(220+90*2,585,"MAR");
    outtextxy(220+90*3,585,"APR");
    outtextxy(220+90*4,585,"MAY");
    outtextxy(220+90*5,585,"JUN");
    outtextxy(220+90*6,585,"JUL");
    outtextxy(220+90*7,585,"AUG");
    outtextxy(220+90*8,585,"SEP");
    outtextxy(220+90*9,585,"OCT");
    outtextxy(220+90*10,585,"NOV");
    outtextxy(220+90*11,585,"DEC");
}
void day_view()
{
    int c,i=260,j=261;
    char y[10];
    all_fp=fopen("add_t.txt","r");
    if(!all_fp)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    /*while(fscanf(a_t,"%s",mont1))
    {
        c=strcmp("Feb",mont1);
        if(c==0)*/
    while(fscanf(all_fp,"%d %f",&day,&w_n)==2)
    {
        settextstyle(3,DEFAULT_FONT,1);
        setcolor(WHITE);
        if(day==1)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i,j,y);
        }
        else if(day==2)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i+100,j,y);
        }
        else if(day==3)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i+200,j,y);
        }
        else if(day==4)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i+300,j,y);
        }
        else if(day==5)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i+390,j,y);
        }
        else if(day==6)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i+490,j,y);
        }
        else if(day==7)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i+585,j,y);
        }
        else if(day==8)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i+670,j,y);
        }
        else if(day==9)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i+770,j,y);
        }
        else if(day==10)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i+870,j,y);
        }
        else if(day==11)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i,j+100,y);
        }
        else if(day==12)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i+100,j+100,y);
        }
        else if(day==13)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i+200,j+100,y);
        }
        else if(day==14)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i+300,j+100,y);
        }
        else if(day==15)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i+390,j+100,y);
        }
        else if(day==16)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i+490,j+100,y);
        }
        else if(day==17)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i+585,j+100,y);
        }
        else if(day==18)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i+670,j+100,y);
        }
        else if(day==19)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i+770,j+100,y);

        }
        else if(day==20)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i+870,j+100,y);
        }
        else if(day==21)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i,j+200,y);
        }
        else if(day==22)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i+100,j+200,y);
        }
        else if(day==23)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i+200,j+200,y);
        }
        else if(day==24)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i+300,j+200,y);
        }
        else if(day==25)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i+390,j+200,y);
        }
        else if(day==26)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i+490,j+200,y);
        }
        else if(day==27)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i+585,j+200,y);
        }
        else if(day==28)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i+670,j+200,y);
        }
        else if(day==29)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i+770,j+200,y);
        }
        else if(day==30)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i+870,j+200,y);
        }
        else if(day==31)
        {
            sprintf(y,"%.2f",w_n);
            outtextxy(i+970,j+200,y);
        }
    }
}
void month()
{
    int f,g;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        if(f>=200 && f<=280 && g>=580 && g<=615)
        {
            outtextxy(720,130,"January      ");
            day_view();
        }
        else if(f>=290 && f<=370 && g>=580 && g<=615)
        {
            outtextxy(720,130,"February     ");
        }
        else if(f>=380 && f<=460 && g>=580 && g<=615)
        {
            outtextxy(720,130,"March        ");
        }
        else if(f>=470 && f<=550  && g>=580 && g<=615)
        {
            outtextxy(720,130,"April        ");
        }
        else if(f>=560 && f<=640  && g>=580 && g<=615)
        {
            outtextxy(720,130,"May           ");
        }
        else if(f>=650 && f<=730  && g>=580 && g<=615)
        {
            outtextxy(720,130,"June          ");
        }
        else if(f>=740 && f<=820  && g>=580 && g<=615)
        {
            outtextxy(720,130,"July           ");
        }
        else if(f>=830 && f<=910  && g>=580 && g<=615)
        {
            outtextxy(720,130,"August         ");
        }
        else if(f>=920 && f<=1000  && g>=580 && g<=615)
        {
            outtextxy(720,130,"September     ");
        }
        else if(f>=1010 && f<=1090  && g>=580 && g<=615)
        {
            outtextxy(720,130,"October        ");
        }
        else if(f>=1100 && f<=1180 && g>=580 && g<=615)
        {
            outtextxy(720,130,"November       ");
        }
        else if(f>=1190 && f<=1270 && g>=580 && g<=615)
        {
            outtextxy(720,130,"December     ");
        }
    }
}
int main()
{
    int gd=DETECT,gm;
    initwindow(1360,760);
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    cleardevice();
    settextstyle(3,HORIZ_DIR,2);
    outtextxy(570,80,"DATA OF BODY TEMPERATURE");
    setcolor(WHITE);
    outtextxy(50,260,"Temperature(   F )->");
    circle(176,269,4);
    outtextxy(50,360,"Temperature(   F )->");
    circle(176,369,4);
    outtextxy(50,460,"Temperature(   F )->");
    circle(176,469,4);
    calender();
    month();
    getch();
    closegraph();
    return 0;
}
