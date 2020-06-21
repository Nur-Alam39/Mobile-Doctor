#include <stdio.h>
#include <stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<time.h>
#include<string.h>
/* the tic tac toe matrix */
char check(void);
void play();
char matrix[3][3];
int MOuse()
{
    int x, y;
    while(!ismouseclick(WM_RBUTTONDOWN))
        delay(50);
    getmouseclick(WM_LBUTTONDOWN, x,y);
    return x;
}
/* See if there is a winner. */
char check(void)
{
    int i,f,g;
    char done=' ';
    for(i=0; i<3; i++) /* check rows */
        if(matrix[i][0]==matrix[i][1] && matrix[i][0]==matrix[i][2])
            done= matrix[i][0];
    for(i=0; i<3; i++) /* check columns */
        if(matrix[0][i]==matrix[1][i] && matrix[0][i]==matrix[2][i])
            done= matrix[0][i];
    /* test diagonals */
    if(matrix[0][0]==matrix[1][1] && matrix[1][1]==matrix[2][2])
        done= matrix[0][0];
    if(matrix[0][2]==matrix[1][1] && matrix[1][1]==matrix[2][0])
        done= matrix[0][2];
    if(done=='X')
    {
        outtextxy(770,480,"You won ! ! !");
        setcolor(3);
        outtextxy(770,440,"Result : ");
        setcolor(WHITE);
        settextstyle(1,DEFAULT_FONT,1);
        outtextxy(772,650,"Play Again");
        outtextxy(991,650,"Exit");
        setcolor(3);
        rectangle(770,649,925,672);
        rectangle(990,649,1065,672);
        while(1)
        {
            while(!ismouseclick(WM_LBUTTONDOWN))
            {
                delay(50);
            }
            getmouseclick(WM_LBUTTONDOWN, f,g);
            if(f>=770 && f<=916 && g>=649 && g<=672)
            {
                cleardevice();
                play();
            }
            else if(f>=990 && f<=1035 && g>=649 && g<=672)
                exit(0);
        }

    }
    else if(done=='O')
    {

        outtextxy(770,480,"You lost . . .");
        setcolor(3);
        outtextxy(770,440,"Result : ");
        setcolor(WHITE);
        settextstyle(1,DEFAULT_FONT,1);
        outtextxy(772,650,"Play Again");
        outtextxy(991,650,"Exit");
        setcolor(3);
        rectangle(770,649,925,672);
        rectangle(990,649,1055,672);
        while(1)
        {
            while(!ismouseclick(WM_LBUTTONDOWN))
            {
                delay(50);
            }
            getmouseclick(WM_LBUTTONDOWN, f,g);
            if(f>=770 && f<=916 && g>=649 && g<=672)
            {
                cleardevice();
                play();
            }
            else if(f>=990 && f<=1035 && g>=649 && g<=672)
                exit(0);
        }
    }

}
void play()
{
    setfillstyle(XHATCH_FILL, BLUE);
    settextstyle(4,DEFAULT_FONT,2);
    setcolor(WHITE);
    outtextxy(600,100,"Tic-Tac-Toe");
    settextstyle(1,DEFAULT_FONT,1);
    setcolor(3);
    outtextxy(770,170,"Instruction : ");
    rectangle(770,200,1270,400);
    setcolor(WHITE);
    outtextxy(780,220,"This is the game of Tic Tac Toe.You ");
    outtextxy(780,250,"will be playing against the computer.");
    setcolor(RED);
    outtextxy(780,280,"Just click mouse in your desire box");
    outtextxy(780,310,"and check whether you have got a");
    outtextxy(780,340,"side or corner with 'X' . If you make");
    outtextxy(780,370,"'X-X-X' first,you will win.");
    setcolor(WHITE);
    line(300,400,600,400);
    line(300,500,600,500);
    line(400,300,400,600);
    line(500,300,500,600);
    settextstyle(4,DEFAULT_FONT,2);
    setcolor(RED);
    int f,g,x,y;
    int i, j;
    for(i=0; i<3; i++)
        for(j=0; j<3; j++) matrix[i][j] = ' ';
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        if(f>=300 && f<=400 && g>=300 && g<=400)
        {
            x=0;
            y=0;
            if(matrix[x][y]==' ')
            {
                matrix[x][y] = 'X';
                outtextxy(340,340,"X");
            }

        }
        else if(f>=400 && f<=500 && g>=300 && g<=400)
        {
            x=0;
            y=1;
            if(matrix[x][y]==' ')
            {
                matrix[x][y] = 'X';
                outtextxy(440,340,"X");
            }
        }
        else if(f>=500 && f<=600 && g>=300 && g<=400)
        {
            x=0;
            y=2;
            if(matrix[x][y]==' ')
            {
                matrix[x][y] = 'X';
                outtextxy(540,340,"X");
            }
        }
        else if(f>=300 && f<=400 && g>=400 && g<=500)
        {
            x=1;
            y=0;
            if(matrix[x][y]==' ')
            {
                matrix[x][y] = 'X';
                outtextxy(340,440,"X");
            }
        }
        else if(f>=400 && f<=500 && g>=400 && g<=500)
        {
            x=1;
            y=1;
            if(matrix[x][y]==' ')
            {
                matrix[x][y] = 'X';
                outtextxy(440,440,"X");
            }
        }
        else if(f>=500 && f<=600 && g>=400 && g<=500)
        {
            x=1;
            y=2;
            if(matrix[x][y]==' ')
            {
                matrix[x][y] = 'X';
                outtextxy(540,440,"X");
            }
        }
        else if(f>=300 && f<=400 && g>=500 && g<=600)
        {
            x=2;
            y=0;
            if(matrix[x][y]==' ')
            {
                matrix[x][y] = 'X';
                outtextxy(340,540,"X");
            }

        }
        else if(f>=400 && f<=500 && g>=500 && g<=600)
        {
            x=2;
            y=1;
            if(matrix[x][y]==' ')
            {
                matrix[x][y] = 'X';
                outtextxy(440,540,"X");
            }

        }
        else if(f>=500 && f<=600 && g>=500 && g<=600)
        {
            x=2;
            y=2;
            if(matrix[x][y]==' ')
            {
                matrix[x][y] = 'X';
                outtextxy(540,540,"X");
            }

        }
        int i, j;
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
                if(matrix[i][j]==' ') break;
            if(matrix[i][j]==' ') break;
        }
        matrix[i][j] = 'O';
        if(i==0&&j==0)
            outtextxy(340,340,"0");
        else if(i==0&&j==1)
            outtextxy(440,340,"0");
        else if(i==0&&j==2)
            outtextxy(540,340,"0");
        else if(i==1&&j==0)
            outtextxy(340,440,"0");
        else if(i==1&&j==1)
            outtextxy(440,440,"0");
        else if(i==1&&j==2)
            outtextxy(540,440,"0");
        else if(i==2&&j==0)
            outtextxy(340,540,"0");
        else if(i==2&&j==1)
            outtextxy(440,540,"0");
        else if(i==2&&j==2)
            outtextxy(540,540,"0");
        else if(i*j==4)
        {

            outtextxy(770,480,"The game is drawn .");
            setcolor(3);
            outtextxy(770,440,"Result : ");
            setcolor(WHITE);
            settextstyle(1,DEFAULT_FONT,1);
            outtextxy(772,650,"Play Again");
            outtextxy(991,650,"Exit");
            setcolor(3);
            rectangle(770,649,925,672);
            rectangle(990,649,1035,672);
            while(1)
            {
                while(!ismouseclick(WM_LBUTTONDOWN))
                {
                    delay(50);
                }
                getmouseclick(WM_LBUTTONDOWN, f,g);
                if(f>=770 && f<=916 && g>=649 && g<=672)
                {
                    cleardevice();
                    play();
                }
                else if(f>=990 && f<=1035 && g>=649 && g<=672)
                    exit(0);
            }
        }
        check();
    }
    getch();
    closegraph();
}
int main()
{
    int gd=DETECT,gm;
    initwindow(1360,760);
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    cleardevice();
    play();
    getch();
    closegraph();
    return 0;
}

