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
    setcolor(BLUE);
    bar(200,200,215,215);
    int n=10;char l[80];
    sprintf(l,"%d",n);
    outtextxy(10,20,"Point : ");
    int f,g;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        if(f>=200 && f<=215 && g>=200 && g<=215)
            {
                setcolor(BROWN);
                circle(207,207,5);

            }
    }
    closegraph();
    getch();
    return 0;
}
