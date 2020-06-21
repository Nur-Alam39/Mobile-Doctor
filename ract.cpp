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
    int a1=170,b1=210,i,a=60,b=75,c=200,d=85,e=180,f1=190;
    for(i=1; i<=15; i++)
    {
        setcolor(3);
        rectangle(50,a1,1300,b1);
        a1=a1+46;
        b1=b1+46;
        setcolor(15);
        line(a,c,b,e);
        line(b,e,d,c);
        line(a,c,b,f1);
        line(b,f1,d,c);
        c=c+46;
        e=e+46;
        f1=f1+46;
    }
    closegraph();
    getch();
    return 0;
}
