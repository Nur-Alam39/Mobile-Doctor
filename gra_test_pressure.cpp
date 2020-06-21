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
    setfillstyle(XHATCH_FILL, BLUE);
    settextstyle(4,HORIZ_DIR,2);
    setcolor(BLUE);
    outtextxy(580,30,"Mobile Doctor");
    setcolor(3);
    settextstyle(4,DEFAULT_FONT,2);
    outtextxy(540,80,"DIAGNOSTIC CENTER");
    settextstyle(3,DEFAULT_FONT,1);
    setcolor(WHITE);
    outtextxy(1050,105,"Date:");
    outtextxy(1050,135,"Time:");
    setcolor(3);
    outtextxy(1100,105,__DATE__);
    outtextxy(1100,135,__TIME__);
    outtextxy(100,150,"You have chosen blood pressure .");
    outtextxy(100,182,"Have you any of them -");
    line(100,210,320,210);
    setcolor(WHITE);
    outtextxy(104,228,"1");
    rectangle(100,227,122,250);
    outtextxy(130,225,"Nervousness");
    outtextxy(104,260,"2");
    rectangle(100,259,122,282);
    outtextxy(130,257,"Sweating");
    outtextxy(104,292,"3");
    rectangle(100,292,122,315);
    outtextxy(130,289,"Difficulty to sleep");
    outtextxy(104,324,"4");
    rectangle(100,323,122,346);
    outtextxy(130,323,"Blood spots in the eye");
    outtextxy(104,357,"5");
    rectangle(100,356,122,379);
    outtextxy(130,356,"Facial flushing");
    outtextxy(104,390,"6");
    rectangle(100,389,122,412);
    outtextxy(130,389,"Severe headaches and anxiety");
    outtextxy(104,423,"7");
    rectangle(100,422,122,445);
    outtextxy(130,422,"Shortness of breath");
    outtextxy(104,456,"8");
    rectangle(100,455,122,478);
    outtextxy(130,455,"Nosebleeds");
    setcolor(3);
    outtextxy(100,499,"Choose your symptoms : ");
    rectangle(325,499,430,529);
    rectangle(100,548,137,573);
    setcolor(15);
    outtextxy(102,549,"OK");
    int f,g,sum[10],i=0,m,n,c=180;
    int num,mod;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        if(f>=325 && f<=430 && g>=499 && g<=529)
        {
            printf("Choose:");
            scanf("%d",&num);
            char y[2];
            setcolor(WHITE);
            sprintf(y,"%d",num);
            outtextxy(330,500,y);
        }
        else if(f>=100 && f<=137 && g>=548 && g<=572)
        {
            cleardevice();
            system("cls");
            setfillstyle(XHATCH_FILL, BLUE);
            settextstyle(4,HORIZ_DIR,2);
            setcolor(BLUE);
            outtextxy(580,30,"Mobile Doctor");
            setcolor(3);
            settextstyle(4,DEFAULT_FONT,2);
            outtextxy(540,80,"DIAGNOSTIC CENTER");
            settextstyle(3,DEFAULT_FONT,1);
            setcolor(3);
            outtextxy(1050,105,"Date:");
            outtextxy(1050,135,"Time:");
            setcolor(WHITE);
            outtextxy(1100,105,__DATE__);
            outtextxy(1100,135,__TIME__);
            setcolor(3);
            outtextxy(100,170,"Your symptoms are:");
            line(100,197,280,197);
            while(num!=0)
            {
                mod=num%10;
                num=num/10;
                sum[i]=mod;
                i++;
            }
            int j;
            setcolor(WHITE);
            for(j=i; j>=0; j--)
            {
                if(sum[j]==1)
                    outtextxy(100,c," - Nervousness");
                else if(sum[j]==2)
                    outtextxy(100,c," - Sweating");
                else if(sum[j]==3)
                    outtextxy(100,c," - Difficulty to sleep");
                else if(sum[j]==4)
                    outtextxy(100,c," - Blood spots in the eye");
                else if(sum[j]==5)
                    outtextxy(100,c," - Facial flushing");
                else if(sum[j]==6)
                    outtextxy(100,c," - Severe headaches and anxiety");
                else if(sum[j]==7)
                    outtextxy(100,c," - Shortness of breath");
                else if(sum[j]==8)
                    outtextxy(100,c," - Nosebleeds");
                c=c+30;
            }
            outtextxy(102,c+40,"OK");
            setcolor(3);
            rectangle(100,c+38,125,c+58);
            while(1)
            {
                while(!ismouseclick(WM_LBUTTONDOWN))
                {
                    delay(50);
                }
                getmouseclick(WM_LBUTTONDOWN, f,g);
                if(f>=100 && f<=125 && g>=c+38 && g<=c+58)
                {
                    cleardevice();
                    setfillstyle(XHATCH_FILL, BLUE);
                    settextstyle(4,HORIZ_DIR,2);
                    setcolor(BLUE);
                    outtextxy(580,30,"Mobile Doctor");
                    setcolor(3);
                    settextstyle(4,DEFAULT_FONT,2);
                    outtextxy(540,80,"DIAGNOSTIC CENTER");
                    settextstyle(3,DEFAULT_FONT,1);
                    setcolor(WHITE);
                    outtextxy(1050,105,"Date:");
                    outtextxy(1050,135,"Time:");
                    setcolor(3);
                    outtextxy(1100,105,__DATE__);
                    outtextxy(1100,135,__TIME__);
                    int c=210;
                    outtextxy(100,150,"It's something wrong.");
                    outtextxy(100,180,"You have to measure your blood pressure.");
                    setcolor(WHITE);
                    outtextxy(102,240,"OK");
                    setcolor(3);
                    rectangle(100,239,130,260);
                    while(1)
                    {
                        while(!ismouseclick(WM_LBUTTONDOWN))
                        {
                            delay(50);
                        }
                        getmouseclick(WM_LBUTTONDOWN, f,g);
                        if(f>=100 && f<=130 && g>=239 && g<=260)
                        {
                            cleardevice();
                            int p1,p2;;
                            setfillstyle(XHATCH_FILL, BLUE);
                            settextstyle(4,HORIZ_DIR,2);
                            setcolor(BLUE);
                            outtextxy(580,30,"Mobile Doctor");
                            setcolor(3);
                            settextstyle(4,DEFAULT_FONT,2);
                            outtextxy(540,80,"DIAGNOSTIC CENTER");
                            settextstyle(3,DEFAULT_FONT,1);
                            setcolor(3);
                            outtextxy(1050,105,"Date:");
                            outtextxy(1050,135,"Time:");
                            setcolor(15);
                            outtextxy(1100,105,__DATE__);
                            outtextxy(1100,135,__TIME__);
                            setcolor(15);
                            outtextxy(100,145,"Input your test report : -");
                            line(100,169,310,169);
                            setcolor(2);
                            outtextxy(100,180+10,"Input your blood pressure,that you have measured : -");
                            setcolor(YELLOW);
                            rectangle(430,251,535,276);
                            rectangle(430,301,535,326);
                            setcolor(3);
                            outtextxy(110,230+20,"- Systolic Pressure(upper#mm Hg) :");
                            outtextxy(110,280+20,"- Diastolic Pressure(lower#mm Hg) :");
                            rectangle(109,389,140,414);
                            setcolor(15);
                            outtextxy(110,390,"OK");
                            int f,g;
                            char y[7];
                            while(1)
                            {
                                while(!ismouseclick(WM_LBUTTONDOWN))
                                {
                                    delay(50);
                                }
                                getmouseclick(WM_LBUTTONDOWN, f,g);
                                if(f>=430 && f<=535 && g>=251 && g<=276)
                                {
                                    printf("Systolic Pressure(upper#mm Hg):");
                                    scanf("%d",&p1);
                                    settextstyle(3,DEFAULT_FONT,1);
                                    setcolor(WHITE);
                                    sprintf(y,"%d",p1);
                                    outtextxy(435,252,y);
                                }
                                else  if(f>=430 && f<=535 && g>=301 && g<=326)
                                {
                                    printf("Diastolic Pressure(lower#mm Hg):");
                                    scanf("%d",&p2);
                                    settextstyle(3,DEFAULT_FONT,1);
                                    setcolor(WHITE);
                                    sprintf(y,"%d",p2);
                                    outtextxy(435,302,y);
                                }
                                else  if(f>=109 && f<=140 && g>=389 && g<=414)
                                {

                                    if(p1<=120&&p2<=80)
                                    {
                                        setcolor(2);
                                        outtextxy(100,465,"Don't worry,its normal.Be careful and lead a healthy life .");
                                    }
                                    else if((p1>120&&p1<140)&&(p2>80&&p2<89))
                                    {
                                        setcolor(15);
                                        outtextxy(100,465,"It is not high.Almost normal(prehypertension).But you");
                                        outtextxy(100,465,"are in risk.Now you are on high pressure boundary.Take");
                                        outtextxy(100,465,"a balance diet,physical exercise and reduce your current weight");
                                    }
                                    else if((p1>=140&&p1<=159)&&(p2>=90&&p2<=99))
                                    {
                                        setcolor(RED);
                                        outtextxy(100,465,"It is hypertension(high blood pressure)-Stage 1.");
                                    }
                                    else if((p1>=160&&p1<=180)&&(p2>=99&&p2<=110))
                                    {
                                        setcolor(RED);
                                        outtextxy(100,465,"It is hypertension(high blood pressure)-Stage 2.");
                                    }
                                    else if(p1>=180&&p2>=110)
                                    {
                                        setcolor(RED);
                                        outtextxy(100,465,"It is hypertensive(Emergency care need).You should go your nearest hospital");
                                    }
                                    setcolor(2);
                                    outtextxy(100,435,"Result :");
                                    rectangle(1219,659,1340,684);
                                    setcolor(15);
                                    outtextxy(1220,660,"HOME PAGE");
                                    while(1)
                                    {
                                        while(!ismouseclick(WM_LBUTTONDOWN))
                                        {
                                            delay(50);
                                        }
                                        getmouseclick(WM_LBUTTONDOWN, f,g);
                                        if(f>=1219 && f<=1340 && g>=659 && g<=684)
                                        {
                                            cleardevice();
                                            //home();
                                        }
                                    }
                                }
                            }


                        }
                    }
                }
            }
        }
    }
    closegraph();
    getch();
    return 0;
}


