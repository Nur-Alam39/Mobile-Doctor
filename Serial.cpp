#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<string.h>
void serial(int a,int b,int n)
{
    int i;
    char x[10];
    settextstyle(3,DEFAULT_FONT,1);
    for(i=1; i<=n; i++)
    {
        if(i<10)
            sprintf(x,"%2d",i);
        else
            sprintf(x,"%d",i);
        outtextxy(a,b,x);
        rectangle(a-5,b+1,a+25,b+21);
        b=b+30;
    }
}
int main()
{
    int gd=DETECT,gm;
    initwindow(1360,760);
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    serial(100,100,20);
    getch();
    closegraph();
    return 0;
}
