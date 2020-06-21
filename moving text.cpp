#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<time.h>
int main()
{
    int gd = DETECT, gm;
    // initwindow(1000, 600);
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    int j=0;
    setfillstyle(XHATCH_FILL, RED);
    circle(100, 100, 50);
    floodfill(100, 100, WHITE);
    while(j!=2)
    {
        int i=0,x=200,y=400;
        for(i=0;i<500; i+=30)
        {
            if(j==0)
            {
                settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
                outtextxy(x,y+i,"The weather is very cold and dry.Use mask.");

                delay(800);
                cleardevice();
            }
            else
            {
                settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
                outtextxy(x,y+i,"The weather is very cold and dry.Use mouirsturising creame.");
                delay(800);
                cleardevice();

            }

        }
        j++;
    }
    getch();
    return 0;
}
