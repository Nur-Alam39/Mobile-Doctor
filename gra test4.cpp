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

int main()
{
    int gd=DETECT,gm;
    initwindow(1360,760);
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    /*For Diabetic*/
    float bd,ad,a1c;
    //logo();
    setcolor(3);
    settextstyle(4,DEFAULT_FONT,2);
    outtextxy(540,80,"DIAGNOSTIC CENTER");
    settextstyle(3,DEFAULT_FONT,1);
    setcolor(15);
    outtextxy(100,150,"You have chosen Diabetic.");
    setcolor(3);
    outtextxy(100,182,"Have you any of them -");
    line(100,210,320,210);
    setcolor(WHITE);
    outtextxy(142,225,"Increased thirst , usually with frequent urination");
    outtextxy(142,255,"Fatigue(extreme tiredness)");
    outtextxy(142,285,"Blurred(become unclear or less distinct)vision");
    outtextxy(142,315,"Slow-healing wounds or infections");
    outtextxy(142,345,"Overweight, obese, or physically inactive");
    int b=225,i,c1=107;
    for(i=1; i<=5; i++)
    {
        rectangle(c1,b+1,c1+29,b+21);
        b=b+30;
    }
    setcolor(3);
    rectangle(100,449,140,473);
    setcolor(15);
    outtextxy(102,450,"OK");
    int f,g,sum[10],m=226,n=247,j,c=200,c2=122;
    i=0;
    int num,mod;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        if(f>=c1 && f<=c1+29 && g>=m && g<=n)
        {
            sum[i++]=1;
            setcolor(YELLOW);
            line(112,m+9,116,n-5);
            line(116,n-5,130,m+4);
        }
        else if(f>=c1 && f<=c1+29 && g>=m+30 && g<=n+30)
        {
            sum[i++]=2;
            setcolor(YELLOW);
            line(112,m+9+30,116,n-5+30);
            line(116,n-5+30,130,m+4+30);
        }
        else if(f>=c1 && f<=c1+29 && g>=m+60 && g<=n+60)
        {
            sum[i++]=3;
            setcolor(YELLOW);
            line(112,m+9+60,116,n-5+60);
            line(116,n-5+60,130,m+4+60);
        }
        else if(f>=c1 && f<=c1+29 && g>=m+90 && g<=n+90)
        {
            sum[i++]=4;
            setcolor(YELLOW);
            line(112,m+9+90,116,n-5+90);
            line(116,n-5+90,130,m+4+90);
        }
        else if(f>=c1 && f<=c1+29 && g>=m+120 && g<=n+120)
        {
            sum[i++]=5;
            setcolor(YELLOW);
            line(112,m+9+120,116,n-5+120);
            line(116,n-5+120,130,m+4+120);
        }
        else if(f>=100 && f<=140 && g>=449 && g<=473)
        {
            cleardevice();
            system("cls");
            setcolor(3);
            settextstyle(4,DEFAULT_FONT,2);
            outtextxy(540,80,"DIAGNOSTIC CENTER");
            settextstyle(3,DEFAULT_FONT,1);
            outtextxy(100,170,"Your symptoms are:");
            line(100,197,280,197);
            int m1,n1;
            setcolor(WHITE);
            for(m1=0; m1<i; m1++)
            {
                for(n1=0; n1<i; n1++)
                    if(m1!=n1)
                    {
                        if(sum[m1]==sum[n1])
                        {
                            sum[n1]=0;
                        }
                    }
            }
            for(j=0; j<i; j++)
            {
                if(sum[j]==1)
                    outtextxy(100,c," - Increased thirst , usually with frequent urination");
                else if(sum[j]==2)
                    outtextxy(100,c," - Fatigue (extreme tiredness)");
                else if(sum[j]==3)
                    outtextxy(100,c," - Blurred (become unclear or less distinct)vision");
                else if(sum[j]==4)
                    outtextxy(100,c," - Slow-healing wounds or infections");
                else if(sum[j]==5)
                    outtextxy(100,c," - Overweight, obese, or physically inactive");
                c=c+30;
            }
        }
    }
    closegraph();
    getch();
    return 0;
}

