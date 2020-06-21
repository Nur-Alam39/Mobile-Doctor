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
    int i,d,d1=0;
    float a,sum=0;
    char x[5];
    setcolor(2);
    outtextxy(300,160,"You have chosen fever.");
    setcolor(3);
    outtextxy(300,200,"How many days you have been suffering from fever :");
    rectangle(760,199,800,225);
    int f,g;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        if(f>=760 && f<=800 && g>=199 && g<=225)
        {
            printf("Days:");
            scanf("%d",&d);
            setcolor(WHITE);
            settextstyle(3,DEFAULT_FONT,1);
            sprintf(x,"%d",d);
            outtextxy(770,200,x);
            setcolor(3);
            outtextxy(300,240,"How much your body temperature was in last       days :");
            rectangle(300,264,1100,290);
            setcolor(WHITE);
            sprintf(x,"%d",d);
            outtextxy(688,240,x);
            outtextxy(1150,265,"OK");
            rectangle(1149,264,1182,285);
        }
        else if(f>=300 && f<=900 && g>=255 && g<=280)
        {
            float temperature[d];
            printf("Temperature:");
            int m=300;
            for(i=0; i<d; i++)
            {
                scanf("%f",&temperature[i]);
                sum=sum+temperature[i];

            }
            /*for(i=0; i<d; i++)
            {
                setcolor(WHITE);
                sprintf(x,"%.2f",temperature[i]);
                outtextxy(m,265,x);
                m=m+40;
            }*/
            a=sum/d;
        }
        else if(f>=1149 && f<=1182 && g>=264 && g<=285)
        {
            if(a<=100.4&&d<=3)
            {
                outtextxy(300,320,"Last       days your average body temperature was : ");
                sprintf(x,"%d",d);
                outtextxy(348,320,x);
                sprintf(x,"%.2f",a);
                outtextxy(740,320,x);
                setcolor(RED);
                outtextxy(300,360,"Suggestion :");
                setcolor(WHITE);
                line(300,383,410,383);
                outtextxy(300,400,"Don't worry,it is a low grade fever.It's no need to take medicine.\nYou can take 'PARASITAMAL',if you feel headache.");
                outtextxy(1100,650,"HOME PAGE");
                rectangle(1095,648,1220,672);
                while(1)
                {
                    while(!ismouseclick(WM_LBUTTONDOWN))
                    {
                        delay(50);
                    }
                    getmouseclick(WM_LBUTTONDOWN, f,g);
                    if(f>=1095 && f<=1220 && g>=648 && g<=672)
                    {
                        cleardevice();
                        //home();

                    }
                }
            }
            else if(a>100.4&&d>=3)
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
                char x[7];
                int number;
                //cleardevice();
                outtextxy(300,250,"Last       days your average body temperature was : ");
                setcolor(WHITE);
                sprintf(x,"%d",d);
                outtextxy(348,250,x);
                setcolor(WHITE);
                sprintf(x,"%.2f",a);
                outtextxy(740,250,x);
                setcolor(RED);
                outtextxy(290,290,"It is something wrong.");
                setcolor(3);
                outtextxy(290,330,"Have you any of them :");
                line(290,352,480,352);
                setcolor(WHITE);
                outtextxy(290,370,"1");
                outtextxy(310,370,"Sudden high fever(104 degree F)");
                rectangle(285,371,305,391);
                outtextxy(290,400,"2");
                outtextxy(310,400,"Severe headache or pain behind the eyes");
                rectangle(285,401,305,421);
                outtextxy(290,430,"3");
                outtextxy(310,430,"Joint,muscle and/or bone pain");
                rectangle(285,431,305,451);
                outtextxy(290,460,"4");
                outtextxy(310,460,"Gum and nose bleeds");
                rectangle(285,461,305,481);
                outtextxy(290,490,"5");
                outtextxy(310,490,"Easy bruising");
                rectangle(285,491,305,511);
                outtextxy(290,520,"6");
                outtextxy(310,520,"Low white blood cell(WBC)count");
                rectangle(285,521,305,541);
                outtextxy(290,550,"7");
                outtextxy(310,550,"Skin rash");
                rectangle(285,551,305,571);
                setcolor(3);
                outtextxy(290,620,"Choose your symptoms : ");
                rectangle(520,615,660,650);
                outtextxy(300,653,"OK");
                rectangle(295,655,335,675);
                int f,g,sum[10],i=0,m,n,c=180;
                long  long int num,mod;
                while(1)
                {
                    while(!ismouseclick(WM_LBUTTONDOWN))
                    {
                        delay(50);
                    }
                    getmouseclick(WM_LBUTTONDOWN, f,g);
                    if(f>=520 && f<=660 && g>=615 && g<=650)
                    {
                        printf("Choose:");
                        scanf("%lld",&num);
                        char y[2];
                        setcolor(WHITE);
                        sprintf(y,"%lld",num);
                        outtextxy(540,620,y);
                        setcolor(3);
                        while(1)
                        {
                            while(!ismouseclick(WM_LBUTTONDOWN))
                            {
                                delay(50);
                            }
                            getmouseclick(WM_LBUTTONDOWN, f,g);
                            if(f>=295 && f<=350 && g>=655 && g<=678)
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
                                int j,k=1;
                                setcolor(WHITE);
                                for(j=i; j>=1; j--)
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
                                outtextxy(100,450,"You have to test your blood.");
                                setcolor(3);
                                outtextxy(100,487,"Please input your test report-");
                                line(100,515,340,515);
                                outtextxy(100,400+120,"- Blood Culture :");
                                setcolor(WHITE);
                                outtextxy(240,400+120," 1. Positive  2. Negative :");
                                rectangle(455,400+119,490,400+143);
                                setcolor(3);
                                outtextxy(100,400+170,"- Antibody test :");
                                setcolor(WHITE);
                                outtextxy(240,400+170,"IgG : 1. Positive  2. Negative :");
                                rectangle(492,400+169,525,400+192);
                                outtextxy(240,400+210,"IgM : 1. Positive  2. Negative :");
                                rectangle(492,400+209,525,400+292);
                                setcolor(3);
                                outtextxy(530,400+120,"- Molecular testing(polymerase chain reaction,PCR) :");
                            }
                            int bc,ig,im;
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
                                else if(m>=492 && m<=525 && n>=400+169 && n<=400+192)
                                {
                                    printf("IgG:\n1.Positive 2.Negative\nChoose:");
                                    scanf("%d",&ig);
                                    setcolor(WHITE);
                                    sprintf(y,"%d",ig);
                                    outtextxy(496,610,y);
                                }
                                else if(m>=492 && m<=525 && n>=400+209 && n<=400+232)
                                {
                                    printf("IgM:\n1.Positive 2.Negative\nChoose:");
                                    scanf("%d",&im);
                                    setcolor(WHITE);
                                    sprintf(y,"%d",im);
                                    outtextxy(496,610,y);
                                }

                            }
                        }
                    }
                }

            }
        }
    }
    return 0;
}
