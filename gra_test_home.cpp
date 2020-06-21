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
int d;
float a;
int main()
{
    int gd=DETECT,gm;
    initwindow(1360,760);
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    setcolor(3);
    settextstyle(4,DEFAULT_FONT,2);
    outtextxy(540,80,"DIAGNOSTIC CENTER");
    settextstyle(3,DEFAULT_FONT,1);
    setcolor(3);
    char x[7];
    int number,i;
    outtextxy(280,250,"Last       days your average body temperature was : ");
    setcolor(15);
    sprintf(x,"%d",d);
    outtextxy(328,250,x);
    sprintf(x,"%.2f",a);
    outtextxy(730,250,x);
    setcolor(RED);
    outtextxy(280,290,"It is something wrong.");
    setcolor(3);
    outtextxy(280,330,"Have you any of them :");
    line(280,352,480,352);
    setcolor(WHITE);
    int b=370,c1=280;
    for(i=1; i<=7; i++)
    {
        rectangle(c1,b+1,c1+29,b+21);
        b=b+30;
    }
    outtextxy(317,370,"Sudden high fever(104 degree F)");
    outtextxy(317,400,"Severe headache or pain behind the eyes");
    outtextxy(317,430,"Joint,muscle and/or bone pain");
    outtextxy(317,460,"Gum and nose bleeds");
    outtextxy(317,490,"Easy bruising");
    outtextxy(317,520,"Low white blood cell(WBC)count");
    outtextxy(317,550,"Skin rash");
    outtextxy(281,625,"OK");
    setcolor(3);
    rectangle(280,624,310,645);
    int f,g,sum[10],m=379,n=388,c=180,d1=283,e=288,f1=305;
    char y[2];
    i=0;
    long  long int num,mod;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        if(f>=280 && f<=280+29 && g>=371 && g<=370+21)
        {
            sum[i++]=1;
            setcolor(YELLOW);
            line(d1,m,e,n);
            line(e,n,f1,m-4);
        }
        else if(f>=295 && f<=280+29 && g>=371+30*1 && g<=370+21+30*1)
        {
            sum[i++]=2;
            setcolor(YELLOW);
            line(d1,m+30*1,e,n+30*1);
            line(e,n+30*1,f1,m+30*1-4);
        }
        else if(f>=295 && f<=280+29 && g>=371+30*2 && g<=370+21+30*2)
        {
            sum[i++]=3;
            setcolor(YELLOW);
            line(d1,m+30*2,e,n+30*2);
            line(e,n+30*2,f1,m+30*2-4);
        }
        else if(f>=295 && f<=280+29 && g>=371+30*3 && g<=370+21+30*3)
        {
            sum[i++]=4;
            setcolor(YELLOW);
            line(d1,m+30*3,e,n+30*3);
            line(e,n+30*3,f1,m+30*3-4);
        }
        else if(f>=295 && f<=280+29 && g>=371+30*4 && g<=370+21+30*4)
        {
            sum[i++]=5;
            setcolor(YELLOW);
            line(d1,m+30*4,e,n+30*4);
            line(e,n+30*4,f1,m+30*4-4);
        }
        else if(f>=295 && f<=280+29 && g>=371+30*5 && g<=370+21+30*5)
        {
            sum[i++]=6;
            setcolor(YELLOW);
            line(d1,m+30*5,e,n+30*5);
            line(e,n+30*5,f1,m+30*5-4);
        }
        else if(f>=295 && f<=280+29 && g>=371+30*6 && g<=370+21+30*6)
        {
            sum[i++]=7;
            setcolor(YELLOW);
            line(d1,m+30*6,e,n+30*6);
            line(e,n+30*6,f1,m+30*6-4);
        }
        else if(f>=280 && f<=310 && g>=624 && g<=645)
        {
            int j,k=1;
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
            cleardevice();
            setcolor(3);
            settextstyle(4,DEFAULT_FONT,2);
            outtextxy(540,80,"DIAGNOSTIC CENTER");
            settextstyle(3,DEFAULT_FONT,1);
            setcolor(3);
            outtextxy(100,150,"Your symptoms are");
            setcolor(WHITE);
            for(j=0; j<i; j++)
            {
                if(sum[j]==1)
                    outtextxy(100,c," - Sudden high fever(104 degree F)");
                else if(sum[j]==2)
                    outtextxy(100,c," - Severe headache or pain behind the eyes");
                else if(sum[j]==3)
                    outtextxy(100,c," - Joint,muscle and/or bone pain");
                else if(sum[j]==4)
                    outtextxy(100,c," - Gum and nose bleeds");
                else if(sum[j]==5)
                    outtextxy(100,c," - Easy bruising");
                else if(sum[j]==6)
                    outtextxy(100,c," - Low white blood cell(WBC)count");
                else if(sum[j]==7)
                    outtextxy(100,c," - Skin rash");
                c=c+30;
            }
            setcolor(3);
            outtextxy(100,450,"You have to test the following tests :");
            setcolor(3);
            outtextxy(100,487,"Please input your test report-");
            line(100,515,340,515);
            outtextxy(100,400+120,"- Blood Culture :");
            setcolor(WHITE);
            outtextxy(240,400+120," 1. Positive  2. Negative :");
            rectangle(455,400+119,490,400+144);
            setcolor(3);
            outtextxy(100,400+170,"- Antibody test :");
            setcolor(WHITE);
            outtextxy(240,400+170,"IgG : 1. Positive  2. Negative :");
            rectangle(492,400+169,525,400+194);
            outtextxy(240,400+210,"IgM : 1. Positive  2. Negative :");
            rectangle(492,400+209,525,400+234);
            setcolor(3);
            outtextxy(530,400+120,"- Molecular testing(polymerase chain reaction,PCR) :");
            setcolor(WHITE);
            outtextxy(530,400+155,"  1. Positive  2. Negative :");
            rectangle(750,400+155,785,400+180);
            setcolor(3);
            outtextxy(550,600,"- Bone Marrow test :");
            setcolor(WHITE);
            outtextxy(730,600,"  1. Positive  2. Negative :");
            rectangle(950,600,985,625);
            setcolor(WHITE);
            outtextxy(1020,600,"OK");
            setcolor(3);
            rectangle(1019,598,1050,625);
            int bc,ig,im,pcr,bm;
            while(1)
            {
                while(!ismouseclick(WM_LBUTTONDOWN))
                {
                    delay(50);
                }
                getmouseclick(WM_LBUTTONDOWN, m,n);
                if(m>=455 && m<=400+119 && n>=490 && n<=400+143)
                {
                    printf("Blood culture:\n1.Positive 2.Negative\nChoose:");
                    scanf("%d",&bc);
                    setcolor(WHITE);
                    sprintf(y,"%d",bc);
                    outtextxy(459,400+120,y);
                }
                else if(m>=492 && m<=525 && n>=400+169 && n<=400+193)
                {
                    printf("IgG:\n1.Positive 2.Negative\nChoose:");
                    scanf("%d",&ig);
                    setcolor(WHITE);
                    sprintf(y,"%d",ig);
                    outtextxy(496,570,y);
                }
                else if(m>=492 && m<=525 && n>=400+209 && n<=400+233)
                {
                    printf("IgM:\n1.Positive 2.Negative\nChoose:");
                    scanf("%d",&im);
                    setcolor(WHITE);
                    sprintf(y,"%d",im);
                    outtextxy(496,610,y);
                }
                else if(m>=750 && m<=785 && n>=400+155 && n<=400+180)
                {
                    printf("PCR:\n1.Positive 2.Negative\nChoose:");
                    scanf("%d",&pcr);
                    setcolor(WHITE);
                    sprintf(y,"%d",pcr);
                    outtextxy(753,556,y);
                }
                else if(m>=950 && m<=985 && n>=600 && n<=625)
                {
                    printf("Bone Marrow:\n1.Leukemia 2.Amnesia\nChoose:");
                    scanf("%d",&bm);
                    setcolor(WHITE);
                    sprintf(y,"%d",bm);
                    outtextxy(753,556,y);
                }
                else if(m>=1019 && m<=1050 && n>=598 && n<=625)
                {
                    system("cls");
                    cleardevice();
                    settextstyle(4,DEFAULT_FONT,2);
                    outtextxy(540,80,"DIAGNOSTIC CENTER");
                    settextstyle(3,DEFAULT_FONT,1);
                    setcolor(3);
                    outtextxy(100,150,"Result :");
                    line(100,172,173,172);
                    setcolor(WHITE);
                    if()
                }
            }
        }
    }
    /*For Diabetic*//*
    /*float bd,ad,a1c;
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
    line(d,m+9,e,n-5);
    line(e,n-5,f,m+4);
    }
    else if(f>=c1 && f<=c1+29 && g>=m+30 && g<=n+30)
    {
    sum[i++]=2;
    setcolor(YELLOW);
    line(d,m+9+30,e,n-5+30);
    line(e,n-5+30,f,m+4+30);
    }
    else if(f>=c1 && f<=c1+29 && g>=m+60 && g<=n+60)
    {
    sum[i++]=3;
    setcolor(YELLOW);
    line(d,m+9+60,e,n-5+60);
    line(e,n-5+60,f,m+4+60);
    }
    else if(f>=c1 && f<=c1+29 && g>=m+90 && g<=n+90)
    {
    sum[i++]=4;
    setcolor(YELLOW);
    line(d,m+9+90,e,n-5+90);
    line(e,n-5+90,f,m+4+90);
    }
    else if(f>=c1 && f<=c1+29 && g>=m+30* && g<=n+30*)
    {
    sum[i++]=5;
    setcolor(YELLOW);
    line(d,m+9+30*,e,n-5+30*);
    line(e,n-5+30*,f,m+4+30*);
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
    }*/
    closegraph();
    getch();
    return 0;
}

