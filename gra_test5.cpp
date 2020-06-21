#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<string.h>
char namea[30],namex[30],matrix[3][3];
int day,f,g,a,b,c,oh=0;
char check(void);
void play();
int home();
int main();
void tip(char str[]);
int f_page();
int login();
int drugs();
int pressure();
int add_b();
int v_b();
int profile();
int view_profile();
int profile_change();
int weights();
int v_w();
int add_w();
int sugar();
int v_s();
int add_s();
int temperature();
int v_t();
int add_t();
int diagnose();
int MOuse()
{
    int x, y;
    while(!ismouseclick(WM_RBUTTONDOWN))
        delay(50);
    getmouseclick(WM_LBUTTONDOWN, x,y);
    return x;
}
struct file_i
{
    char fname[30],name[40],age[5],sex[8],Bg[4],DOB[10],pass[20],dateac[30],date2[5],date3[10],timeac[30];
};
struct file_i ac;
FILE *fp,*a_w,*a_s,*a_t,*a_b;
/*New Account*/
int save()
{
    cleardevice();
    setfillstyle(XHATCH_FILL, BLUE);
    settextstyle(4,HORIZ_DIR,2);
    setcolor(BLUE);
    outtextxy(580,30,"Mobile Doctor");
    settextstyle(4,DEFAULT_FONT,2);
    outtextxy(580,80,"New Account");
    settextstyle(3,DEFAULT_FONT,1);
    setcolor(BLUE);
    outtextxy(1050,105,"Date:");
    outtextxy(1100,105,__DATE__);
    outtextxy(1050,135,"Time:");
    outtextxy(1100,135,__TIME__);
    setcolor(WHITE);
    outtextxy(572,170,"Personal Information");
    setcolor(WHITE);
    circle(352,261,4);
    setcolor(GREEN);
    outtextxy(360,250,"Enter Full Name : ");
    rectangle(515,249,750,275);
    setcolor(WHITE);
    circle(352,298,4);
    setcolor(GREEN);
    outtextxy(360,287,"Enter User Name(not changeable) : ");
    rectangle(665,286,850,312);
    setcolor(WHITE);
    circle(352,335,4);
    setcolor(GREEN);
    outtextxy(360,324,"Enter age : ");
    rectangle(460,323,520,349);
    setcolor(WHITE);
    circle(552,335,4);
    setcolor(GREEN);
    outtextxy(560,324,"Enter sex : ");
    rectangle(658,323,760,349);
    setcolor(WHITE);
    circle(352,372,4);
    setcolor(GREEN);
    outtextxy(360,361,"Enter Blood Group : ");
    rectangle(538,360,600,386);
    setcolor(WHITE);
    circle(352,409,4);
    setcolor(GREEN);
    outtextxy(360,398,"Enter Date of birth : ");
    rectangle(525,397,720,423);
    setcolor(WHITE);
    circle(352,445,4);
    setcolor(GREEN);
    outtextxy(360,434,"Enter password : ");
    rectangle(510,435,720,461);
    setcolor(BROWN);
    outtextxy(360,500,"OK");
    rectangle(358,499,388,522);
    int f,g;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        if(f>=515 && f<=750 && g>=249 && g<=275)
        {
            printf("Full name:");
            scanf("%s",ac.fname);
            setcolor(WHITE);
            settextstyle(3,DEFAULT_FONT,1);
            outtextxy(520,250,ac.fname);

        }
        else if(f>=665 && f<=850 && g>=286 && g<=312)
        {
            printf("User name:");
            scanf("%s",ac.name);
            setcolor(WHITE);
            settextstyle(3,DEFAULT_FONT,1);
            outtextxy(670,287,ac.name);

        }
        else if(f>=460 && f<=520 && g>=323 && g<=349)
        {
            printf("Age:");
            scanf("%s",ac.age);
            setcolor(WHITE);
            settextstyle(3,DEFAULT_FONT,1);
            outtextxy(469,324,ac.age);
        }
        else if(f>=658 && f<=760 && g>=323 && g<=349)
        {
            printf("Sex:");
            scanf("%s",ac.sex);
            setcolor(WHITE);
            settextstyle(3,DEFAULT_FONT,1);
            outtextxy(663,324,ac.sex);
        }
        else if(f>=538 && f<=600 && g>=360 && g<=386)
        {
            printf("Blood group:");
            scanf("%s",ac.Bg);
            setcolor(WHITE);
            settextstyle(3,DEFAULT_FONT,1);
            outtextxy(546,361,ac.Bg);
        }
        else if(f>=525 && f<=720 && g>=397 && g<=423)
        {
            printf("Date of birth:");
            scanf("%s",ac.DOB);
            setcolor(WHITE);
            settextstyle(3,DEFAULT_FONT,1);
            outtextxy(540,398,ac.DOB);
        }
        else if(f>=510 && f<=720 && g>=435 && g<=461)
        {
            printf("Password:");
            scanf("%s",ac.pass);
            char str1[8]= {"_w.txt"},str2[8]= {"_s.txt"},str3[8]= {"_t.txt"},str4[8]= {"_b.txt"},name1[40],name2[40],name3[40],name4[40];
            char str[8]= {".txt"},name[40];
            for(b=0,c=0; ac.name[c]!='\0'; c++,b++)
            {
                name[b]=ac.name[c];
                namea[b]=ac.name[c];
            }
            name[b]='\0';
            namea[b]='\0';
            for(b=c,c=0; ac.pass[c]!='\0'; c++,b++)
                name[b]=ac.pass[c];
            name[b]='\0';
            for(b=0,c=0; name[c]!='\0'; c++,b++)
                namex[b]=name[c];
            namex[b]='\0';
            for(a=0; name[a]!='\0',namex[a]!='\0'; a++);
            for(b=a,c=0; str[c]!='\0'; c++,b++)
            {
                name[b]=str[c];
                namex[b]=str[c];
            }
            name[b]='\0';
            namex[b]='\0';
            fp=fopen(name,"a+");
            if(!fp)
            {
                printf("Cannot open file.\n");
                exit(1);
            }
            fwrite(&ac,sizeof(ac),1,fp);
            fprintf(fp,"%s ", __DATE__);
            fprintf(fp,"%s ", __TIME__);
            fflush(fp);
            fclose(fp);
            for(b=0,c=0; ac.name[c]!='\0'; c++,b++)
            {
                name1[b]=ac.name[c];
                name2[b]=ac.name[c];
                name3[b]=ac.name[c];
                name4[b]=ac.name[c];
            }
            name1[b]='\0';
            name2[b]='\0';
            name3[b]='\0';
            name4[b]='\0';
            for(a=0; name1[a]!='\0'; a++);
            for(b=a,c=0; str1[c]!='\0'; c++,b++)
                name1[b]=str1[c];
            name1[b]='\0';
            a_w=fopen(name1,"a+");
            fflush(a_w);
            fclose(a_w);
            for(a=0; name2[a]!='\0'; a++);
            for(b=a,c=0; str2[c]!='\0'; b++,c++)
                name2[b]=str2[c];
            name2[b]='\0';
            a_s=fopen(name2,"a+");
            fflush(a_s);
            fclose(a_s);
            for(a=0; name3[a]!='\0'; a++);
            for(b=a,c=0; str3[c]!='\0'; b++,c++)
                name3[b]=str3[c];
            name3[b]='\0';
            a_t=fopen(name3,"a+");
            fflush(a_t);
            fclose(a_t);
            for(a=0; name4[a]!='\0'; a++);
            for(b=a,c=0; str4[c]!='\0'; b++,c++)
                name4[b]=str4[c];
            name4[b]='\0';
            a_b=fopen(name4,"a+");
            fflush(a_b);
            fclose(a_b);
            setcolor(WHITE);
            settextstyle(3,DEFAULT_FONT,1);
            int i,m=520,j;
            i=strlen(ac.pass);
            setcolor(WHITE);
            for(j=0; j<i; j++)
            {
                outtextxy(m,436,"*");
                m=m+12;
            }

        }
        else if(f>=358 && f<=388 && g>=499 && g<=522)
        {
            setcolor(WHITE);
            settextstyle(3,DEFAULT_FONT,1);
            outtextxy(360,535,"Your account has created successfully.");
            setcolor(GREEN);
            settextstyle(3,DEFAULT_FONT,1);
            outtextxy(360,575,"Click here for");
            setcolor(BROWN);
            outtextxy(480,575,"HOME PAGE");
            settextstyle(2,DEFAULT_FONT,1);
            rectangle(475,574,600,600);
            while(1)
            {
                while(!ismouseclick(WM_LBUTTONDOWN))
                {
                    delay(50);
                }
                getmouseclick(WM_LBUTTONDOWN, f,g);

                if(f>=475 && f<=600 && g>=574 && g<=600)
                {
                    cleardevice();
                    system("cls");
                    home();
                }
            }
        }

    }
    closegraph();
    getch();
}
/*For printing next tip*/
void next()
{
    setcolor(WHITE);
    outtextxy(1200,680,"Next Tip");
    setcolor(3);
    rectangle(1196,679,1275,702);
}
/*Tips Function*/
void tip(char str[])
{
    int i,j,k;
    char c[8]=".txt",tips[10000];
    for(i=0; str[i]; i++);
    str[i]='\0';
    for(j=i,k=0; c[k]; j++,k++)
    {
        str[j]=c[k];
    }
    str[j]='\0';
    FILE*tip_fp;
    tip_fp=fopen(str,"r");
    if(!tip_fp)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    while(fscanf(tip_fp,"%[^\n]" ,tips)==1)
    {
        setcolor(WHITE);
        outtextxy(205,400,tips);
    }
    if(oh==0||oh==1||oh==2)
        next();
}
/*Refreshment*/
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
                home();
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
                home();
        }
    }

}
/*Play function-tic-tac-toe*/
void play()
{
    cleardevice();
    settextstyle(4,HORIZ_DIR,2);
    setcolor(3);
    setfillstyle(XHATCH_FILL, BLUE);
    bar3d(100, 20, 160, 80, 10, 1);
    setcolor(WHITE);
    outtextxy(110,28,"M");
    outtextxy(128,49,"D");
    setfillstyle(XHATCH_FILL, BLUE);
    settextstyle(4,HORIZ_DIR,2);
    setcolor(WHITE);
    outtextxy(580,30,"Mobile Doctor");
    settextstyle(4,DEFAULT_FONT,2);
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
                    home();
            }
        }
        check();
    }
    getch();
    closegraph();
}
/*Home Page*/
int home()
{
    cleardevice();
    settextstyle(4,HORIZ_DIR,2);
    //outtextxy(600,20,"Mobile Doctor\n\n\n");
    setcolor(3);
    setfillstyle(XHATCH_FILL, BLUE);
    bar3d(100, 20, 160, 80, 10, 1);
    setcolor(WHITE);
    outtextxy(110,28,"M");
    outtextxy(128,49,"D");
    setfillstyle(XHATCH_FILL, BLUE);
    settextstyle(4,HORIZ_DIR,2);
    setcolor(WHITE);
    outtextxy(580,30,"Mobile Doctor");
    settextstyle(4,DEFAULT_FONT,2);
    setcolor(3);
    outtextxy(580,80,"HOME PAGE");
    settextstyle(3,DEFAULT_FONT,1);
    outtextxy(190,110,"Welcome,");
    setcolor(WHITE);
    outtextxy(280,110,namea);
    setcolor(3);
    outtextxy(1050,105,"Date:");
    outtextxy(1050,135,"Time:");
    setcolor(WHITE);
    outtextxy(1100,105,__DATE__);
    outtextxy(1100,135,__TIME__);
    /*textmode(128);
    textcolor(BLUE);
    textbackground(WHITE);*/
    outtextxy(200,200,"Weight chart");
    outtextxy(360,200,"Sugar level chart");
    outtextxy(560,200,"Body temperature chart");
    outtextxy(830,200,"Blood pressure chart");
    outtextxy(1065,200,"Diagnose");
    outtextxy(200,255,"Drugs Index");
    outtextxy(350,255,"Profile");
    outtextxy(600,255,"Logout");
    setcolor(3);
    rectangle(190,194,320,230);
    rectangle(350,194,520,230);
    rectangle(550,194,780,230);
    rectangle(820,194,1020,230);
    rectangle(190,250,310,285);
    rectangle(340,250,410,285);
    rectangle(440,250,560,285);
    rectangle(590,250,665,285);
    rectangle(1050,194,1160,230);
    outtextxy(200,370,"Tips for today :");
    line(200,394,320,394);
    //floodfill(50,100,YELLOW);
    setcolor(2);
    outtextxy(447,255,"Refreshment");
    int f,g,v,x;
    char tip1[100]="Tip1", tip2[100]="Tip2",tip3[100]="Tip3";
    tip(tip1);
    oh=1;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        if(f>=190 && f<=320 && g>=194 && g<=230)
        {
            cleardevice();
            weights();
        }
        else if(f>=350 && f<=520 && g>=194 && g<=230)
        {
            cleardevice();
            sugar();
        }
        else if(f>=550 && f<=780 && g>=194 && g<=230)
        {
            cleardevice();
            temperature();
        }
        else if(f>=820 && f<=1020 && g>=194 && g<=230)
        {
            cleardevice();
            pressure();
        }
        else if(f>=1050 && f<=1160 && g>=194 && g<=230)
        {
            cleardevice();
            diagnose();
        }
        else if(f>=190 && f<=310 && g>=250 && g<=285)
        {
            cleardevice();
            drugs();
        }
        else if(f>=340 && f<=410 && g>=250 && g<=285)
        {
            cleardevice();
            profile();
        }
        else if(f>=440 && f<=560 && g>=250 && g<=285)
        {
            cleardevice();
            play();
        }
        else if(f>=590 && f<=665 && g>=250 && g<=285)
        {
            cleardevice();
            f_page();
        }
        else if(f>=1196 && f<=1275 && g>=679 && g<=702)
        {
            if(oh==1)
            {
                tip(tip2);
                oh=2;
            }
            else if(oh==2)
            {
                tip(tip3);
                oh=3;
            }
            else if(oh==3)
                outtextxy(205,400,"No more tips for today .");
        }
    }
    closegraph();
    getch();
}
/*Drugs view*/
void see_drugs(char str[])
{
    setfillstyle(XHATCH_FILL, BLUE);
    settextstyle(4,HORIZ_DIR,2);
    setcolor(BLUE);
    outtextxy(580,30,"Mobile Doctor");
    setcolor(3);
    settextstyle(4,DEFAULT_FONT,2);
    outtextxy(600,70,"Brand");
    line(40,110,1310,110);
    line(40,110,40,150);
    line(1310,110,1310,150);
    line(40,150,1310,150);
    settextstyle(3,DEFAULT_FONT,1);
    setcolor(2);
    outtextxy(65,120,"Brand Name");
    outtextxy(330,120,"Contains");
    outtextxy(580,120,"Dosage Form");
    outtextxy(850,120,"Manufacturer");
    outtextxy(1200,120,"Price(Tk)");
    int a=40,b=1310,c=110,d=150,p=240,q=555,r=725,s=1170,x=110,y=150,i;
    char brand[30],contains[80],dosage[30],manu[80],tk[60];
    int c1=1;
    FILE *drug;
    drug=fopen(str,"r");
    if(!drug)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    while(fscanf(drug,"%s%s%s%s%s",brand,contains,dosage,manu,tk)==5)
    {
        setcolor(WHITE);
        outtextxy(a+11,c+45,brand);
        outtextxy(a+250,c+45,contains);
        outtextxy(a+565,c+45,dosage);
        outtextxy(a+735,c+45,manu);
        outtextxy(a+1180,c+45,tk);
        c=c+40;
        c1++;
    }
    c=110;
    for(i=1; i<=c1; i++)
    {
        setcolor(3);
        line(a,c,b,c);
        line(a,c,a,d);
        line(a,d,b,d);
        line(b,c,b,d);
        line(p,x,p,y);
        line(q,x,q,y);
        line(r,x,r,y);
        line(s,x,s,y);
        c=c+40;
        d=d+40;
        x=x+40;
        y=y+40;

    }
    settextstyle(3,DEFAULT_FONT,1);
    setcolor(WHITE);
    outtextxy(1200,650,"HOME PAGE");
    rectangle(1199,649,1320,673);
    int f,g;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        if(f>=1199 && f<=1320 && g>=649 && g<=673)
        {
            cleardevice();
            home();
        }
    }
    closegraph();
    getch();

}
/*Drugs index*/
int drugs()
{
    setfillstyle(XHATCH_FILL, BLUE);
    settextstyle(4,HORIZ_DIR,2);
    setcolor(BLUE);
    outtextxy(580,30,"Mobile Doctor");
    setcolor(3);
    settextstyle(4,DEFAULT_FONT,2);
    outtextxy(563,80,"DRUGS INDEX");
    settextstyle(3,DEFAULT_FONT,1);
    setcolor(WHITE);
    outtextxy(1050,105,"Date:");
    outtextxy(1050,135,"Time:");
    setcolor(3);
    outtextxy(1100,105,__DATE__);
    outtextxy(1100,135,__TIME__);
    setcolor(3);
    line(50,170,1300,170);
    line(50,210,1300,210);
    line(50,170,50,210);
    line(1300,170,1300,210);
    line(50,216,1300,216);
    line(50,254,1300,254);
    line(50,216,50,254);
    line(1300,216,1300,254);
    line(50,260,1300,260);
    line(50,300,1300,300);
    line(50,260,50,300);
    line(1300,260,1300,300);
    line(50,306,1300,306);
    line(50,346,1300,346);
    line(50,306,50,346);
    line(1300,306,1300,346);
    line(50,352,1300,352);
    line(50,392,1300,392);
    line(50,352,50,392);
    line(1300,352,1300,392);
    line(50,398,1300,398);
    line(50,438,1300,438);
    line(50,398,50,438);
    line(1300,398,1300,438);
    line(50,438+6,1300,438+6);
    line(50,438+46,1300,438+46);
    line(50,398+46,50,438+46);
    line(1300,398+46,1300,438+46);
    int a=60,b=75,c=200,d=85,e=180,f1=190,i;
    setcolor(WHITE);
    for(i=1; i<8; i++)
    {
        line(a,c,b,e);
        line(b,e,d,c);
        line(a,c,b,f1);
        line(b,f1,d,c);
        c=c+46;
        e=e+46;
        f1=f1+46;
    }
    setcolor(WHITE);
    outtextxy(100,180,"Gastrointestinal drugs");
    outtextxy(100,226,"Respiratory system drugs");
    outtextxy(100,272,"Central nervous system drugs");
    outtextxy(100,318,"Cardiovascular drugs");
    outtextxy(100,364,"Antimicrobial drugs");
    outtextxy(100,410,"Drugs for bone formation And bone disorder");
    outtextxy(100,456,"Drugs for vitamin, Mineral & Nutritional deficiency disorder");
    int f,g;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        if(f>=50 && f<=1300 && g>=170 && g<=210)
        {
            //Gastrointestinal drugs
            cleardevice();
            setfillstyle(XHATCH_FILL, BLUE);
            settextstyle(4,HORIZ_DIR,2);
            setcolor(BLUE);
            outtextxy(580,30,"Mobile Doctor");
            setcolor(3);
            settextstyle(4,DEFAULT_FONT,2);
            outtextxy(563,80,"Gastrointestinal drugs");
            setcolor(3);
            line(50,170,1300,170);
            line(50,210,1300,210);
            line(50,170,50,210);
            line(1300,170,1300,210);
            line(50,216,1300,216);
            line(50,254,1300,254);
            line(50,216,50,254);
            line(1300,216,1300,254);
            line(50,260,1300,260);
            line(50,300,1300,300);
            line(50,260,50,300);
            line(1300,260,1300,300);

            int a=60,b=75,c=200,d=85,e=180,f=190,i;
            setcolor(WHITE);
            for(i=1; i<4; i++)
            {
                line(a,c,b,e);
                line(b,e,d,c);
                line(a,c,b,f);
                line(b,f,d,c);
                c=c+46;
                e=e+46;
                f=f+46;
            }
            settextstyle(3,DEFAULT_FONT,1);
            setcolor(WHITE);
            outtextxy(100,180,"Drugs for peptic ulcer");
            outtextxy(100,226,"Drugs for diarrhoea");
            outtextxy(100,272,"Drugs for chronic inflammatory disease");
            while(1)
            {
                while(!ismouseclick(WM_LBUTTONDOWN))
                {
                    delay(50);
                }
                getmouseclick(WM_LBUTTONDOWN, f,g);
                if(f>=50 && f<=1300 && g>=170 && g<=210)
                {
                    //Drugs for peptic ulcer
                    cleardevice();
                    setfillstyle(XHATCH_FILL, BLUE);
                    settextstyle(4,HORIZ_DIR,2);
                    setcolor(BLUE);
                    outtextxy(580,30,"Mobile Doctor");
                    setcolor(3);
                    settextstyle(4,DEFAULT_FONT,2);
                    outtextxy(563,80,"Drugs for peptic ulcer");
                    setcolor(3);
                    line(50,170,1300,170);
                    line(50,210,1300,210);
                    line(50,170,50,210);
                    line(1300,170,1300,210);
                    line(50,216,1300,216);
                    line(50,254,1300,254);
                    line(50,216,50,254);
                    line(1300,216,1300,254);
                    int a=60,b=75,c=200,d=85,e=180,f=190,i;
                    setcolor(WHITE);
                    for(i=1; i<3; i++)
                    {
                        line(a,c,b,e);
                        line(b,e,d,c);
                        line(a,c,b,f);
                        line(b,f,d,c);
                        c=c+46;
                        e=e+46;
                        f=f+46;
                    }
                    settextstyle(3,DEFAULT_FONT,1);
                    setcolor(WHITE);
                    outtextxy(100,180,"H2 antagonists");
                    outtextxy(100,226,"Antacides");
                    while(1)
                    {
                        while(!ismouseclick(WM_LBUTTONDOWN))
                        {
                            delay(50);
                        }
                        getmouseclick(WM_LBUTTONDOWN, f,g);
                        if(f>=50 && f<=1300 && g>=170 && g<=210)
                        {
                            //H2 antagonists
                            cleardevice();
                            setcolor(3);
                            line(50,170,1300,170);
                            line(50,210,1300,210);
                            line(50,170,50,210);
                            line(1300,170,1300,210);
                            line(50,216,1300,216);
                            line(50,254,1300,254);
                            line(50,216,50,254);
                            line(1300,216,1300,254);
                            line(50,260,1300,260);
                            line(50,300,1300,300);
                            line(50,260,50,300);
                            line(1300,260,1300,300);
                            int a=60,b=75,c=200,d=85,e=180,f=190,i;
                            setcolor(WHITE);
                            for(i=1; i<4; i++)
                            {
                                line(a,c,b,e);
                                line(b,e,d,c);
                                line(a,c,b,f);
                                line(b,f,d,c);
                                c=c+46;
                                e=e+46;
                                f=f+46;
                            }
                            setfillstyle(XHATCH_FILL, BLUE);
                            settextstyle(4,HORIZ_DIR,2);
                            setcolor(BLUE);
                            outtextxy(580,30,"Mobile Doctor");
                            setcolor(3);
                            settextstyle(4,DEFAULT_FONT,2);
                            outtextxy(563,80,"GENERIC NAME");
                            settextstyle(3,DEFAULT_FONT,1);
                            setcolor(WHITE);
                            outtextxy(100,180,"Cimetidine");
                            outtextxy(100,226,"Ranitidine");
                            outtextxy(100,272,"Famitidine");
                            while(1)
                            {
                                while(!ismouseclick(WM_LBUTTONDOWN))
                                {
                                    delay(50);
                                }
                                getmouseclick(WM_LBUTTONDOWN, f,g);
                                if(f>=50 && f<=1300 && g>=170 && g<=210)
                                {
                                    cleardevice();
                                    char file_name[60]= {"Cimetidine.txt"};
                                    see_drugs(file_name);
                                }
                                else if(f>=50 && f<=1300 && g>=216 && g<=254)
                                {
                                    cleardevice();
                                    char file_name[60]= {"Ranitidine.txt"};
                                    see_drugs(file_name);
                                }
                                else if(f>=50 && f<=1300 && g>=260 && g<=300)
                                {
                                    cleardevice();
                                    char file_name[60]= {"Famitidine.txt"};
                                    see_drugs(file_name);
                                }
                            }
                        }
                        else if(f>=50 && f<=1300 && g>=216 && g<=256)
                        {
                            //Antacides
                            cleardevice();
                            setcolor(3);
                            line(50,170,1300,170);
                            line(50,210,1300,210);
                            line(50,170,50,210);
                            line(1300,170,1300,210);
                            line(50,216,1300,216);
                            line(50,254,1300,254);
                            line(50,216,50,254);
                            line(1300,216,1300,254);
                            int a=60,b=75,c=200,d=85,e=180,f=190,i;
                            setcolor(WHITE);
                            for(i=1; i<3; i++)
                            {
                                line(a,c,b,e);
                                line(b,e,d,c);
                                line(a,c,b,f);
                                line(b,f,d,c);
                                c=c+46;
                                e=e+46;
                                f=f+46;
                            }
                            setfillstyle(XHATCH_FILL, BLUE);
                            settextstyle(4,HORIZ_DIR,2);
                            setcolor(BLUE);
                            outtextxy(580,30,"Mobile Doctor");
                            setcolor(3);
                            settextstyle(4,DEFAULT_FONT,2);
                            outtextxy(563,80,"GENERIC NAME");
                            settextstyle(3,DEFAULT_FONT,1);
                            setcolor(WHITE);
                            outtextxy(100,180,"Aluminium & Magnesium Antacides");
                            outtextxy(100,226,"Magnesium hydroxide or Milk of magnesia");
                            while(1)
                            {
                                while(!ismouseclick(WM_LBUTTONDOWN))
                                {
                                    delay(50);
                                }
                                getmouseclick(WM_LBUTTONDOWN, f,g);
                                if(f>=50 && f<=1300 && g>=170 && g<=210)
                                {
                                    cleardevice();
                                    char file_name[60]= {"Aluminium & Magnesium Antacides.txt"};
                                    see_drugs(file_name);
                                }
                                else if(f>=50 && f<=1300 && g>=216 && g<=254)
                                {
                                    cleardevice();
                                    char file_name[60]= {"Magnesium hydroxide or Milk of magnesia.txt"};
                                    see_drugs(file_name);
                                }
                            }


                        }
                        setfillstyle(XHATCH_FILL, BLUE);
                        settextstyle(4,HORIZ_DIR,2);
                        setcolor(BLUE);
                        outtextxy(580,30,"Mobile Doctor");
                        setcolor(3);
                        settextstyle(4,DEFAULT_FONT,2);
                        outtextxy(563,80,"NAME");
                        settextstyle(3,DEFAULT_FONT,1);
                        outtextxy(1100,600,"HOME PAGE");
                        rectangle(1099,600,1220,624);
                        while(1)
                        {
                            while(!ismouseclick(WM_LBUTTONDOWN))
                            {
                                delay(50);
                            }
                            getmouseclick(WM_LBUTTONDOWN, f,g);
                            if(f>=1099 && f<=1220 && g>=600 && g<=624)
                            {
                                cleardevice();
                                home();
                            }
                        }

                    }
                }
                else if(f>=50 && f<=1300 && g>=216 && g<=254)
                {
                    //Drugs for diarrhoea
                    cleardevice();
                    setfillstyle(XHATCH_FILL, BLUE);
                    settextstyle(4,HORIZ_DIR,2);
                    setcolor(BLUE);
                    outtextxy(580,30,"Mobile Doctor");
                    setcolor(3);
                    settextstyle(4,DEFAULT_FONT,2);
                    outtextxy(563,80,"Drugs for diarrhea");
                    setcolor(3);
                    line(50,170,1300,170);
                    line(50,210,1300,210);
                    line(50,170,50,210);
                    line(1300,170,1300,210);
                    line(50,216,1300,216);
                    line(50,254,1300,254);
                    line(50,216,50,254);
                    line(1300,216,1300,254);
                    int a=60,b=75,c=200,d=85,e=180,f=190,i;
                    setcolor(WHITE);
                    for(i=1; i<3; i++)
                    {
                        line(a,c,b,e);
                        line(b,e,d,c);
                        line(a,c,b,f);
                        line(b,f,d,c);
                        c=c+46;
                        e=e+46;
                        f=f+46;
                    }
                    settextstyle(3,DEFAULT_FONT,1);
                    setcolor(WHITE);
                    outtextxy(100,180,"Antimotility drugs");
                    outtextxy(100,226,"Anti-diarrhoeal Antimicrobial drugs");
                    while(1)
                    {
                        while(!ismouseclick(WM_LBUTTONDOWN))
                        {
                            delay(50);
                        }
                        getmouseclick(WM_LBUTTONDOWN, f,g);
                        if(f>=50 && f<=1300 && g>=170 && g<=210)
                        {
                            //Antimotility drugs
                            cleardevice();
                            setcolor(3);
                            line(50,170,1300,170);
                            line(50,210,1300,210);
                            line(50,170,50,210);
                            line(1300,170,1300,210);
                            int a=60,b=75,c=200,d=85,e=180,f=190,i;
                            setcolor(WHITE);
                            for(i=1; i<2; i++)
                            {
                                line(a,c,b,e);
                                line(b,e,d,c);
                                line(a,c,b,f);
                                line(b,f,d,c);
                                c=c+46;
                                e=e+46;
                                f=f+46;
                            }
                            setfillstyle(XHATCH_FILL, BLUE);
                            settextstyle(4,HORIZ_DIR,2);
                            setcolor(BLUE);
                            outtextxy(580,30,"Mobile Doctor");
                            setcolor(3);
                            settextstyle(4,DEFAULT_FONT,2);
                            outtextxy(563,80,"GENERIC NAME");
                            settextstyle(3,DEFAULT_FONT,1);
                            setcolor(WHITE);
                            outtextxy(100,180,"Loperamide");
                            while(1)
                            {
                                while(!ismouseclick(WM_LBUTTONDOWN))
                                {
                                    delay(50);
                                }
                                getmouseclick(WM_LBUTTONDOWN, f,g);
                                if(f>=50 && f<=1300 && g>=170 && g<=210)
                                {
                                    cleardevice();
                                    char file_name[60]= {"Loperamide.txt"};
                                    see_drugs(file_name);
                                }

                            }
                        }
                        else if(f>=50 && f<=1300 && g>=216 && g<=254)
                        {
                            //Anti-diarrhoeal Antimicrobial drugs
                            cleardevice();
                            setcolor(3);
                            line(50,170,1300,170);
                            line(50,210,1300,210);
                            line(50,170,50,210);
                            line(1300,170,1300,210);
                            int a=60,b=75,c=200,d=85,e=180,f=190,i;
                            setcolor(WHITE);
                            for(i=1; i<2; i++)
                            {
                                line(a,c,b,e);
                                line(b,e,d,c);
                                line(a,c,b,f);
                                line(b,f,d,c);
                                c=c+46;
                                e=e+46;
                                f=f+46;
                            }
                            setfillstyle(XHATCH_FILL, BLUE);
                            settextstyle(4,HORIZ_DIR,2);
                            setcolor(BLUE);
                            outtextxy(580,30,"Mobile Doctor");
                            setcolor(3);
                            settextstyle(4,DEFAULT_FONT,2);
                            outtextxy(563,80,"GENERIC NAME");
                            settextstyle(3,DEFAULT_FONT,1);
                            setcolor(WHITE);
                            outtextxy(100,180,"Metronidazole");

                            while(1)
                            {
                                while(!ismouseclick(WM_LBUTTONDOWN))
                                {
                                    delay(50);
                                }
                                getmouseclick(WM_LBUTTONDOWN, f,g);
                                if(f>=50 && f<=1300 && g>=170 && g<=210)
                                {
                                    cleardevice();
                                    char file_name[60]= {"Metronidazole.txt"};
                                    see_drugs(file_name);
                                }
                            }


                        }
                        setfillstyle(XHATCH_FILL, BLUE);
                        settextstyle(4,HORIZ_DIR,2);
                        setcolor(BLUE);
                        outtextxy(580,30,"Mobile Doctor");
                        setcolor(3);
                        settextstyle(4,DEFAULT_FONT,2);
                        outtextxy(563,80,"NAME");
                        settextstyle(3,DEFAULT_FONT,1);
                        outtextxy(1100,600,"HOME PAGE");
                        rectangle(1099,600,1220,624);
                        while(1)
                        {
                            while(!ismouseclick(WM_LBUTTONDOWN))
                            {
                                delay(50);
                            }
                            getmouseclick(WM_LBUTTONDOWN, f,g);
                            if(f>=1099 && f<=1220 && g>=600 && g<=624)
                            {
                                cleardevice();
                                home();
                            }
                        }

                    }

                }
                else if(f>=50 && f<=1300 && g>=308 && g<=348)
                {
                    //Drugs for chronic inflammatory disease
                    cleardevice();


                }
                outtextxy(1100,600,"HOME PAGE");
                rectangle(1099,600,1220,624);
                while(1)
                {
                    while(!ismouseclick(WM_LBUTTONDOWN))
                    {
                        delay(50);
                    }
                    getmouseclick(WM_LBUTTONDOWN, f,g);
                    if(f>=1099 && f<=1220 && g>=600 && g<=624)
                    {
                        cleardevice();
                        home();
                    }
                }
            }

        }
        else if(f>=50 && f<=1300 && g>=216 && g<=254)
        {
            //Respiratory system drugs
            cleardevice();


        }
        else if(f>=50 && f<=1300 && g>=260 && g<=300)
        {
            //Central nervous system drugs
            cleardevice();

        }
        else if(f>=50 && f<=1300 && g>=306 && g<=346)
        {
            //Cardiovascular drugs
            cleardevice();

        }
        else if(f>=50 && f<=1300 && g>=352 && g<=392)
        {
            //Antimicrobial drugs
            cleardevice();

        }
        else if(f>=50 && f<=1300 && g>=398 && g<=438)
        {
            //Drugs for bone formation And bone disorder
            cleardevice();


        }
        else if(f>=50 && f<=1300 && g>=444 && g<=484)
        {
            //Drugs for vitamin, Mineral & Nutritional deficiency disorder
            cleardevice();


        }
        outtextxy(1100,600,"HOME PAGE");
        rectangle(1099,600,1220,624);
        while(1)
        {
            while(!ismouseclick(WM_LBUTTONDOWN))
            {
                delay(50);
            }
            getmouseclick(WM_LBUTTONDOWN, f,g);
            if(f>=1099 && f<=1220 && g>=600 && g<=624)
            {
                cleardevice();
                home();
            }
        }
    }
    closegraph();
    getch();
}
/*Profile view*/
int view_profile()
{
    FILE*v_p;
    v_p=fopen(namex,"r");
    if(!v_p)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    fscanf(v_p,"%s %s %s %s %s %s %s %s %s %s %s",ac.fname,ac.name,ac.age,ac.sex,ac.Bg,ac.DOB,ac.pass,ac.timeac,ac.dateac,ac.date2,ac.date3);
    cleardevice();
    setfillstyle(XHATCH_FILL, BLUE);
    settextstyle(4,HORIZ_DIR,2);
    setcolor(BLUE);
    outtextxy(580,30,"Mobile Doctor");
    setcolor(GREEN);
    settextstyle(4,DEFAULT_FONT,2);
    outtextxy(595,80,"PROFILE");
    settextstyle(3,DEFAULT_FONT,1);
    setcolor(BLUE);
    outtextxy(1050,105,"Date:");
    outtextxy(1050,135,"Time:");
    setcolor(3);
    outtextxy(1100,105,__DATE__);
    outtextxy(1100,135,__TIME__);
    setcolor(WHITE);
    circle(352,261,4);
    setcolor(GREEN);
    outtextxy(360,250,"Full Name : ");
    rectangle(465,249,690,275);
    setcolor(WHITE);
    circle(352,298,4);
    setcolor(GREEN);
    outtextxy(360,287,"User Name : ");
    rectangle(475,286,655,312);
    setcolor(WHITE);
    circle(352,335,4);
    setcolor(GREEN);
    outtextxy(360,324,"Age : ");
    rectangle(415,323,465,349);
    setcolor(WHITE);
    circle(552,335,4);
    setcolor(GREEN);
    outtextxy(560,324,"Sex : ");
    rectangle(615,323,715,349);
    setcolor(WHITE);
    circle(352,372,4);
    setcolor(GREEN);
    outtextxy(360,361,"Blood Group : ");
    rectangle(485,360,540,386);
    setcolor(WHITE);
    circle(352,409,4);
    setcolor(GREEN);
    outtextxy(360,398,"Date of birth : ");
    rectangle(480,397,620,423);
    setcolor(WHITE);
    circle(352,445,4);
    setcolor(GREEN);
    outtextxy(360,434,"Password :");
    rectangle(460,435,620,461);
    setcolor(WHITE);
    circle(352,481,4);
    setcolor(GREEN);
    outtextxy(360,470,"Account creation :");
    outtextxy(360,500,"Date :");
    rectangle(415,500,580,526);
    outtextxy(590,500,"Time :");
    rectangle(650,500,770,526);
    setcolor(3);
    outtextxy(360,580,"BACK");
    rectangle(357,580,412,603);
    setcolor(WHITE);
    settextstyle(3,DEFAULT_FONT,1);
    outtextxy(470,250,ac.fname);
    outtextxy(480,287,ac.name);
    outtextxy(420,324,ac.age);
    outtextxy(620,324,ac.sex);
    outtextxy(490,361,ac.Bg);
    outtextxy(485,398,ac.DOB);
    outtextxy(465,436,ac.pass);
    outtextxy(425,502,ac.dateac);
    outtextxy(465,502,ac.date2);
    outtextxy(497,502,ac.date3);
    outtextxy(660,502,ac.timeac);
    fclose(v_p);
    int f,g;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        if(f>=357 && f<=412 && g>=580 && g<=603)
        {
            cleardevice();
            home();
        }
    }
    closegraph();
    getch();
}
/*Profile change*/
int profile_change()
{
    closegraph();
    getch();
}
/*Profile*/
int profile()
{
    cleardevice();
    setcolor(BLUE);
    settextstyle(4,DEFAULT_FONT,2);
    outtextxy(580,30,"Mobile Doctor");
    settextstyle(3,DEFAULT_FONT,1);
    setcolor(3);
    outtextxy(1050,105,"Date:");
    outtextxy(1050,135,"Time:");
    setcolor(15);
    outtextxy(1100,105,__DATE__);
    outtextxy(1100,135,__TIME__);
    setcolor(3);
    outtextxy(566,170,"PROFILE");
    outtextxy(651,167," : : ");
    setcolor(WHITE);
    outtextxy(680,167,namea);
    setcolor(3);
    rectangle(540,225,660,260);
    rectangle(680,225,820,260);
    setcolor(15);
    outtextxy(550,230,"See profile");
    outtextxy(696,230,"Edit profile");
    int f,g;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        if(f>=540 && f<=660 && g>=225 && g<=260)
        {
            cleardevice();
            view_profile();
        }
    }
}
/*Weight functions*/
int v_w()
{
    cleardevice();
    setcolor(BLUE);
    settextstyle(4,DEFAULT_FONT,2);
    outtextxy(580,30,"Mobile Doctor");
    settextstyle(3,DEFAULT_FONT,1);
    outtextxy(1050,105,"Date:");
    outtextxy(1100,105,__DATE__);
    outtextxy(1050,135,"Time:");
    outtextxy(1100,135,__TIME__);
    outtextxy(555,170,"DATA OF WEIGHT");
    rectangle(470,225,660,260);
    outtextxy(480,230,"View calender wise");
    rectangle(680,225,860,260);
    outtextxy(696,230,"View graphically");
    int f,g;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        if(f>=470 && f<=660 && g>=225 && g<=260)
        {
            cleardevice();
            setfillstyle(XHATCH_FILL, GREEN);
            settextstyle(4,HORIZ_DIR,2);
            outtextxy(600,20,"Mobile Doctor\n\n\n");
            setcolor(WHITE);
            setfillstyle(XHATCH_FILL, BLUE);
            bar3d(100, 20, 160, 80, 10, 1);
            setcolor(WHITE);
            outtextxy(110,28,"M");
            outtextxy(128,49,"D");
            settextstyle(4,HORIZ_DIR,2);
            outtextxy(600,20,"Mobile Doctor\n\n\n");
            settextstyle(3,HORIZ_DIR,2);
            outtextxy(600,80,"DATA OF WEIGHT");
            settextstyle(4,HORIZ_DIR,2);
            settextstyle(3,HORIZ_DIR,2);
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
            setcolor(WHITE);
            outtextxy(100,260,"Weight(Kg)->");
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
            setcolor(WHITE);
            outtextxy(100,360,"Weight(Kg)->");
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
            setcolor(WHITE);
            outtextxy(100,460,"Weight(Kg)->");
            line(250, 450, 1200, 450);
            line(250,500,1200,500);
            int i12,j112=450,j212=500;
            for(i12=250; i12<=1200; i12+=95)
                line(i12,j112,i12,j212);
            setcolor(9);
            settextstyle(0,0,4);
            outtextxy(1200,660,"Back");
            while(1)
            {
                while(!ismouseclick(WM_LBUTTONDOWN))
                {
                    delay(50);
                }
                getmouseclick(WM_LBUTTONDOWN, f,g);
                if(f>=1190 && f<=1300 && g>=600 && g<=700)
                {
                    cleardevice();
                    home();
                }
            }
        }
        else if(f>=680 && f<=860 && g>=225 && g<=260)
        {
            cleardevice();
            setfillstyle(XHATCH_FILL, GREEN);
            settextstyle(4,HORIZ_DIR,2);
            outtextxy(600,20,"Mobile Doctor\n\n\n");
            setcolor(WHITE);
            setfillstyle(XHATCH_FILL, BLUE);
            bar3d(100, 20, 160, 80, 10, 1);
            setcolor(WHITE);
            outtextxy(110,28,"M");
            outtextxy(128,49,"D");
            settextstyle(4,HORIZ_DIR,2);
            outtextxy(600,20,"Mobile Doctor\n\n\n");
            settextstyle(3,HORIZ_DIR,2);
            outtextxy(600,80,"DATA OF WEIGHT");
            settextstyle(4,HORIZ_DIR,2);
            settextstyle(4,HORIZ_DIR,2);
            outtextxy(85,100,"Weight(Kg)");
            outtextxy(140,610,"0");
            outtextxy(1240,585,"Day");
            setcolor(WHITE);
            line(150, 150,150, 600);
            moveto(150, 600);
            lineto(1200, 600);
            settextstyle(4,HORIZ_DIR,2);
            outtextxy(600,20,"Mobile Doctor\n\n\n");
            setcolor(WHITE);
            setfillstyle(XHATCH_FILL, BLUE);
            bar3d(100, 20, 160, 80, 10, 1);
            setcolor(WHITE);
            outtextxy(110,28,"M");
            outtextxy(128,49,"D");
            int j2=610,k=107;
            setcolor(BLUE);
            outtextxy(310,j2,"05");
            outtextxy(470,j2,"10");
            outtextxy(630,j2,"15");
            outtextxy(790,j2,"20");
            outtextxy(950,j2,"25");
            outtextxy(1110,j2,"30");
            setcolor(WHITE);
            outtextxy(500,650,"(with five days interval)");
            setcolor(BLUE);
            outtextxy(90,142,"100");
            outtextxy(k,180,"95");
            outtextxy(k,218,"90");
            outtextxy(k,256,"85");
            outtextxy(k,296,"80");
            outtextxy(k,334,"75");
            outtextxy(k,372,"70");
            outtextxy(k,410,"65");
            outtextxy(k,448,"60");
            outtextxy(k,486,"55");
            outtextxy(k,524,"50");
            outtextxy(k,562,"45");
            setcolor(BLUE);
            int day;
            float weight,i,j;
            char str1[8]= {"_w.txt"},name1[40];
            for(b=0,c=0; namea[b]!='\0'; c++,b++)
            {
                name1[c]=namea[b];
            }
            name1[c]='\0';
            for(a=0; name1[a]!='\0'; a++);
            for(b=a,c=0; str1[c]!='\0'; c++,b++)
            {
                name1[b]=str1[c];
            }
            name1[b]='\0';
            a_w=fopen(name1,"r");
            if(!a_w)
            {
                printf("Cannot open file.\n");
                exit(1);
            }
            while(fscanf(a_w,"%d %f",&day,&weight)==2)
            {
                i=day;
                i=i*33+150;
                j=weight;
                j=562-(j-45)*7.6;
                setcolor(3);
                rectangle(i,j,i+32,598);
            }
            setcolor(9);
            settextstyle(0,0,4);
            outtextxy(1200,660,"Back");
            while(1)
            {
                while(!ismouseclick(WM_LBUTTONDOWN))
                {
                    delay(50);
                }
                getmouseclick(WM_LBUTTONDOWN, f,g);
                cleardevice();
                if(f>=1190 && f<=1300 && g>=600 && g<=700)
                {
                    cleardevice();
                    home();
                }
            }
            closegraph();
            getch();
        }
    }
}
int add_w()
{
    cleardevice();
    setcolor(BLUE);
    settextstyle(4,DEFAULT_FONT,2);
    outtextxy(580,30,"Mobile Doctor");
    settextstyle(4,DEFAULT_FONT,1);
    setcolor(WHITE);
    setfillstyle(XHATCH_FILL, BLUE);
    bar3d(100, 20, 160, 80, 10, 1);
    setcolor(WHITE);
    outtextxy(110,28,"M");
    outtextxy(128,49,"D");
    settextstyle(4,HORIZ_DIR,2);
    settextstyle(3,HORIZ_DIR,2);
    outtextxy(580,80,"DATA OF WEIGHT");
    char str1[8]= {"_w.txt"},name1[40];
    for(b=0,c=0; namea[b]!='\0'; c++,b++)
    {
        name1[c]=namea[b];
    }
    name1[c]='\0';
    for(a=0; name1[a]!='\0'; a++);
    for(b=a,c=0; str1[c]!='\0'; c++,b++)
    {
        name1[b]=str1[c];
    }
    name1[b]='\0';
    a_w=fopen(name1,"a+");
    int day;
    settextstyle(3,HORIZ_DIR,1);
    setcolor(GREEN);
    circle(290,253,4);
    outtextxy(300,240,"Enter date(only day):");
    rectangle(300,265,360,295);
    circle(290,360,4);
    outtextxy(300,348,"Enter weight(kg):");
    rectangle(300,380,390,410);
    setcolor(BROWN);
    outtextxy(310,470,"OK");
    rectangle(304,467,345,495);
    float weight;
    char x[30];
    int f,g;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        if(f>=300 && f<=360 && g>=265 && g<=295)
        {
            printf("Date:");
            scanf("%d",&day);
            setcolor(WHITE);
            settextstyle(3,DEFAULT_FONT,1);
            sprintf(x,"%d",day);
            outtextxy(310,270,x);
            fprintf(a_w,"%d\n",day);
        }
        else if(f>=300 && f<=390 && g>=380 && g<=410)
        {
            printf("Weight:");
            scanf("%f",&weight);
            setcolor(WHITE);
            settextstyle(3,DEFAULT_FONT,1);
            sprintf(x,"%.2f",weight);
            outtextxy(310,383,x);
            fprintf(a_w,"%.2f\n",weight);
            fclose(a_w);
        }
        else if(f>=304 && f<=345 && g>=467 && g<=495)
        {
            system("cls");
            setcolor(GREEN);
            outtextxy(310,550,"Your data has added to chart.");
            outtextxy(1190,646,"Back");
            rectangle(1175,647,1250,670);
        }
        else if(f>=1175 && f<=1250 && g>=647 && g<=670)
        {
            cleardevice();
            weights();
        }

    }
}
int weights()
{
    cleardevice();
    setcolor(BLUE);
    settextstyle(4,DEFAULT_FONT,2);
    outtextxy(580,30,"Mobile Doctor");
    settextstyle(3,DEFAULT_FONT,1);
    setcolor(3);
    outtextxy(1050,105,"Date:");
    outtextxy(1050,135,"Time:");
    setcolor(15);
    outtextxy(1100,105,__DATE__);
    outtextxy(1100,135,__TIME__);
    setcolor(3);
    outtextxy(555,170,"DATA OF WEIGHT");
    rectangle(160,225,490,260);
    rectangle(910,225,1050,260);
    rectangle(555,225,860,260);
    setcolor(15);
    outtextxy(190,230,"View weight chart of this month");
    outtextxy(590,230,"Add weight to the chart");
    outtextxy(925,230,"Back to home");
    int f,g;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        if(f>=160 && f<=510 && g>=225 && g<=260)
        {
            cleardevice();
            v_w();
        }
        else if(f>=555 && f<=860 && g>=225 && g<=260)
        {
            cleardevice();
            add_w();
        }
        else if(f>=910&& f<=1050 && g>=225 && g<=260)
        {
            cleardevice();
            home();
        }
    }
    closegraph();
    getch();
}
/*Sugar function*/
int v_s()
{
    cleardevice();
    setcolor(BLUE);
    settextstyle(4,DEFAULT_FONT,2);
    outtextxy(580,30,"Mobile Doctor");
    settextstyle(3,DEFAULT_FONT,1);
    setcolor(3);
    outtextxy(1050,105,"Date:");
    outtextxy(1050,135,"Time:");
    outtextxy(535,170,"DATA OF SUGAR LEVEL");
    rectangle(680,225,860,260);
    rectangle(470,225,660,260);
    setcolor(15);
    outtextxy(1100,105,__DATE__);
    outtextxy(1100,135,__TIME__);
    outtextxy(480,230,"View calender wise");
    outtextxy(696,230,"View graphically");
    int f,g;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        if(f>=470 && f<=660 && g>=225 && g<=260)
        {
            cleardevice();
            setcolor(WHITE);
            setfillstyle(XHATCH_FILL, BLUE);
            bar3d(100, 20, 160, 80, 10, 1);
            setcolor(WHITE);
            outtextxy(110,28,"M");
            outtextxy(128,49,"D");
            settextstyle(4,HORIZ_DIR,2);
            outtextxy(600,20,"Mobile Doctor\n\n\n");
            settextstyle(3,HORIZ_DIR,2);
            outtextxy(570,80,"DATA OF SUGAR LEVEL");
            settextstyle(4,HORIZ_DIR,2);
            settextstyle(3,HORIZ_DIR,2);
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
            setcolor(WHITE);
            outtextxy(80,260,"Sugar level(mmol/L)->");
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
            setcolor(WHITE);
            outtextxy(80,360,"Sugar level(mmol/L)->");
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
            setcolor(WHITE);
            outtextxy(80,460,"Sugar level(mmol/L)->");
            line(250, 450, 1200, 450);
            line(250,500,1200,500);
            int i12,j112=450,j212=500;
            for(i12=250; i12<=1200; i12+=95)
                line(i12,j112,i12,j212);
            setcolor(9);
            settextstyle(0,0,4);
            outtextxy(1200,660,"Back");
            while(1)
            {
                while(!ismouseclick(WM_LBUTTONDOWN))
                {
                    delay(50);
                }
                getmouseclick(WM_LBUTTONDOWN, f,g);
                if(f>=1190 && f<=1300 && g>=600 && g<=700)
                {
                    cleardevice();
                    home();
                }
            }

        }
        else if(f>=680 && f<=860 && g>=225 && g<=260)
        {
            cleardevice();
            setcolor(WHITE);
            setfillstyle(XHATCH_FILL, BLUE);
            bar3d(100, 20, 160, 80, 10, 1);
            setcolor(WHITE);
            outtextxy(110,28,"M");
            outtextxy(128,49,"D");
            settextstyle(4,HORIZ_DIR,2);
            outtextxy(600,20,"Mobile Doctor\n\n\n");
            settextstyle(3,HORIZ_DIR,2);
            outtextxy(570,80,"DATA OF SUGAR LEVEL");
            settextstyle(4,HORIZ_DIR,2);
            settextstyle(4,HORIZ_DIR,2);
            outtextxy(85,100,"Sugar level(mmol/L)");
            outtextxy(140,610,"0");
            outtextxy(1220,585,"Day");
            setcolor(WHITE);
            line(150, 145,150, 600);
            line( 150,600,1180, 600);
            int j2=610,k=80;
            setcolor(BLUE);
            outtextxy(310,j2,"05");
            outtextxy(470,j2,"10");
            outtextxy(630,j2,"15");
            outtextxy(790,j2,"20");
            outtextxy(950,j2,"25");
            outtextxy(1110,j2,"30");
            setcolor(RED);
            line(150,488,1180,488);
            setcolor(WHITE);
            outtextxy(1215,475,"Normal");
            outtextxy(500,650,"(with five days interval)");
            setcolor(BLUE);
            outtextxy(k,141,"30.0");
            outtextxy(k,187,"27.0");
            outtextxy(k,233,"24.0");
            outtextxy(k,279,"21.0");
            outtextxy(k,325,"18.0");
            outtextxy(k,371,"15.5");
            outtextxy(k,417,"12.0");
            outtextxy(k,463,"09.0");
            outtextxy(k,509,"06.0");
            outtextxy(k,555,"03.0");
            setcolor(BLUE);
            int day;
            float sl;
            int i;
            float j;
            char name2[40],str2[8]= {"_s.txt"};
            for(b=0,c=0; namea[b]!='\0'; c++,b++)
            {
                name2[c]=namea[b];
            }
            name2[c]='\0';
            for(a=0; name2[a]!='\0'; a++);
            for(b=a,c=0; str2[c]!='\0'; c++,b++)
            {
                name2[b]=str2[c];
            }
            name2[b]='\0';
            a_s=fopen(name2,"r");
            while(fscanf(a_s,"%d %f",&day,&sl)==2)
            {
                i=day;
                i=i*32+150;
                j=sl;
                j=562-(sl-3)*15.33;
                setcolor(BLUE);
                rectangle(i,j,i+32,598);
            }
            setcolor(9);
            settextstyle(0,0,4);
            outtextxy(1200,660,"Back");
            while(1)
            {
                while(!ismouseclick(WM_LBUTTONDOWN))
                {
                    delay(50);
                }
                getmouseclick(WM_LBUTTONDOWN, f,g);
                cleardevice();
                if(f>=1190 && f<=1300 && g>=600 && g<=700)
                {
                    cleardevice();
                    home();
                }
            }
        }
    }
    closegraph();
    getch();
}
int add_s()
{
    cleardevice();
    setcolor(BLUE);
    settextstyle(4,DEFAULT_FONT,2);
    outtextxy(580,30,"Mobile Doctor");
    settextstyle(4,DEFAULT_FONT,1);
    setcolor(WHITE);
    setfillstyle(XHATCH_FILL, BLUE);
    bar3d(100, 20, 160, 80, 10, 1);
    setcolor(WHITE);
    outtextxy(110,28,"M");
    outtextxy(128,49,"D");
    settextstyle(4,HORIZ_DIR,2);
    settextstyle(3,HORIZ_DIR,2);
    outtextxy(580,80,"DATA OF SUGAR LEVEL");
    settextstyle(3,HORIZ_DIR,1);
    setcolor(GREEN);
    circle(290,253,4);
    outtextxy(300,240,"Enter date(only day):");
    rectangle(300,265,360,295);
    circle(290,360,4);
    outtextxy(300,348,"Enter sugar level(mmol\L):");
    rectangle(300,380,390,410);
    setcolor(BROWN);
    outtextxy(310,470,"OK");
    rectangle(304,467,345,495);
    int day;
    float sl;
    char name2[40],str2[8]= {"_s.txt"},x[5];
    for(b=0,c=0; namea[b]!='\0'; c++,b++)
    {
        name2[c]=namea[b];
    }
    name2[c]='\0';
    for(a=0; name2[a]!='\0'; a++);
    for(b=a,c=0; str2[c]!='\0'; c++,b++)
    {
        name2[b]=str2[c];
    }
    name2[b]='\0';
    a_s=fopen(name2,"a+");
    int f,g;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        if(f>=300 && f<=360 && g>=265 && g<=295)
        {
            printf("Date:");
            scanf("%d",&day);
            setcolor(WHITE);
            settextstyle(3,DEFAULT_FONT,1);
            sprintf(x,"%d",day);
            outtextxy(310,270,x);
            fprintf(a_s,"%d\n",day);
        }
        else if(f>=300 && f<=390 && g>=380 && g<=410)
        {
            printf("Sugar level:");
            scanf("%f",&sl);
            setcolor(WHITE);
            settextstyle(3,DEFAULT_FONT,1);
            sprintf(x,"%.2f",sl);
            outtextxy(310,383,x);
            fprintf(a_s,"%.2f\n",sl);
            fclose(a_s);
        }
        else if(f>=304 && f<=345 && g>=467 && g<=495)
        {
            system("cls");
            setcolor(GREEN);
            outtextxy(310,550,"Your data has added to chart.");
            outtextxy(1190,646,"Back");
            rectangle(1175,647,1250,670);
        }
        else if(f>=1175 && f<=1250 && g>=647 && g<=670)
        {
            cleardevice();
            sugar();
        }

    }
    closegraph();
    getch();
}
int sugar()
{
    cleardevice();
    setcolor(BLUE);
    settextstyle(4,DEFAULT_FONT,2);
    outtextxy(580,30,"Mobile Doctor");
    settextstyle(3,DEFAULT_FONT,1);
    setcolor(3);
    outtextxy(1050,105,"Date:");
    outtextxy(1050,135,"Time:");
    rectangle(160,225,510,260);
    rectangle(555,225,860,260);
    rectangle(910,225,1050,260);
    setcolor(3);
    outtextxy(1100,105,__DATE__);
    outtextxy(1100,135,__TIME__);
    outtextxy(560,170,"DATA OF SUGAR LEVEL");
    outtextxy(190,230,"View sugar level chart of this month");
    outtextxy(590,230,"Add sugar level to the chart");
    outtextxy(925,230,"Back to home");
    int f,g;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        if(f>=160 && f<=510 && g>=225 && g<=260)
        {
            cleardevice();
            v_s();
        }
        else if(f>=555 && f<=860 && g>=225 && g<=260)
        {
            cleardevice();
            add_s();
        }
        else if(f>=910&& f<=1050 && g>=225 && g<=260)
        {
            cleardevice();
            home();
        }
    }
    closegraph();
    getch();
}
/*Temperature function*/
int v_t()
{
    cleardevice();
    setcolor(BLUE);
    settextstyle(4,DEFAULT_FONT,2);
    outtextxy(580,30,"Mobile Doctor");
    settextstyle(3,DEFAULT_FONT,1);
    setcolor(3);
    outtextxy(1050,105,"Date:");
    outtextxy(1050,135,"Time:");
    outtextxy(1100,135,__TIME__);
    outtextxy(1100,105,__DATE__);
    rectangle(470,225,660,260);
    rectangle(680,225,860,260);
    setcolor(15);
    outtextxy(535,170,"DATA OF BODY TEMPERATURE");
    outtextxy(480,230,"View calender wise");
    outtextxy(696,230,"View graphically");
    int f,g;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        if(f>=470 && f<=660 && g>=225 && g<=260)
        {
            cleardevice();
            setcolor(WHITE);
            setfillstyle(XHATCH_FILL, BLUE);
            bar3d(100, 20, 160, 80, 10, 1);
            setcolor(WHITE);
            outtextxy(110,28,"M");
            outtextxy(128,49,"D");
            settextstyle(4,HORIZ_DIR,2);
            outtextxy(600,20,"Mobile Doctor\n\n\n");
            settextstyle(3,HORIZ_DIR,2);
            outtextxy(570,80,"DATA OF BODY TEMPERATURE");
            settextstyle(4,HORIZ_DIR,2);
            settextstyle(3,HORIZ_DIR,2);
            settextstyle(3,HORIZ_DIR,2);
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
            setcolor(WHITE);
            settextstyle(3,VERT_DIR,2);
            outtextxy(80,260,"Temperature(degree Fahrenheit)->");
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
            setcolor(WHITE);
            outtextxy(80,360,"Temperature(degree Fahrenheit)->");
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
            setcolor(WHITE);
            outtextxy(80,460,"Temperature(degree Fahrenheit)->");
            line(250, 450, 1200, 450);
            line(250,500,1200,500);
            int i12,j112=450,j212=500;
            for(i12=250; i12<=1200; i12+=95)
                line(i12,j112,i12,j212);
            setcolor(9);
            settextstyle(0,0,4);
            outtextxy(1200,660,"Back");
            while(1)
            {
                while(!ismouseclick(WM_LBUTTONDOWN))
                {
                    delay(50);
                }
                getmouseclick(WM_LBUTTONDOWN, f,g);
                if(f>=1190 && f<=1300 && g>=600 && g<=700)
                {
                    cleardevice();
                    home();
                }
            }
        }
        else if(f>=680 && f<=860 && g>=225 && g<=260)
        {
            cleardevice();
            setcolor(WHITE);
            setfillstyle(XHATCH_FILL, BLUE);
            bar3d(100, 20, 160, 80, 10, 1);
            setcolor(WHITE);
            outtextxy(110,28,"M");
            outtextxy(128,49,"D");
            settextstyle(4,HORIZ_DIR,2);
            outtextxy(600,20,"Mobile Doctor\n\n\n");
            settextstyle(3,HORIZ_DIR,2);
            outtextxy(570,80,"DATA OF BODY TEMPERATURE");
            settextstyle(4,HORIZ_DIR,2);
            settextstyle(4,HORIZ_DIR,2);
            outtextxy(50,100,"Temperature(degree Fahrenheit)");
            outtextxy(140,610,"0");
            outtextxy(1220,585,"Day");
            outtextxy(1215,358,"Normal");
            setcolor(WHITE);
            line(150, 140,150, 600);
            line(150, 600,1190, 600);
            setcolor(RED);
            line(150,366,1190,366);
            int j2=610,k=107;
            setcolor(BLUE);
            outtextxy(310,j2,"05");
            outtextxy(470,j2,"10");
            outtextxy(630,j2,"15");
            outtextxy(790,j2,"20");
            outtextxy(950,j2,"25");
            outtextxy(1110,j2,"30");
            setcolor(WHITE);
            outtextxy(500,650,"(with five days interval)");
            setcolor(BLUE);
            outtextxy(84,134,"107");
            outtextxy(84,220,"105");
            outtextxy(84,334,"100");
            outtextxy(k,448,"95");
            outtextxy(k,562,"90");
            setcolor(BLUE);
            int day;
            float i,bt,j;
            char name3[40],str3[8]= {"_t.txt"};
            for(b=0,c=0; namea[b]!='\0'; c++,b++)
            {
                name3[c]=namea[b];
            }
            name3[c]='\0';
            for(a=0; name3[a]!='\0'; a++);
            for(b=a,c=0; str3[c]!='\0'; c++,b++)
            {
                name3[b]=str3[c];
            }
            name3[b]='\0';
            a_t=fopen(name3,"r");
            while(fscanf(a_t,"%d %f",&day,&bt)==2)
            {
                i=day;
                i=i*32+150;
                j=bt;
                j=562-(bt-90)*22.8;
                setcolor(BLUE);
                rectangle(i,j,i+32,598);
            }
            setcolor(9);
            settextstyle(0,0,4);
            outtextxy(1200,660,"Back");
            while(1)
            {
                while(!ismouseclick(WM_LBUTTONDOWN))
                {
                    delay(50);
                }
                getmouseclick(WM_LBUTTONDOWN, f,g);
                cleardevice();
                if(f>=1190 && f<=1280 && g>=600 && g<=700)
                {
                    cleardevice();
                    home();
                }
            }

        }
    }
    closegraph();
    getch();
}
int add_t()
{
    cleardevice();
    setcolor(BLUE);
    settextstyle(4,DEFAULT_FONT,2);
    outtextxy(580,30,"Mobile Doctor");
    settextstyle(4,DEFAULT_FONT,1);
    setcolor(WHITE);
    setfillstyle(XHATCH_FILL, BLUE);
    bar3d(100, 20, 160, 80, 10, 1);
    setcolor(WHITE);
    outtextxy(110,28,"M");
    outtextxy(128,49,"D");
    settextstyle(4,HORIZ_DIR,2);
    settextstyle(3,HORIZ_DIR,2);
    outtextxy(580,80,"DATA OF BODY TEMPERATURE");
    char name3[40],str3[8]= {"_t.txt"};
    for(b=0,c=0; namea[b]!='\0'; c++,b++)
    {
        name3[c]=namea[b];
    }
    name3[c]='\0';
    for(a=0; name3[a]!='\0'; a++);
    for(b=a,c=0; str3[c]!='\0'; c++,b++)
    {
        name3[b]=str3[c];
    }
    name3[b]='\0';
    a_t=fopen(name3,"a+");
    int day;
    settextstyle(3,HORIZ_DIR,1);
    setcolor(GREEN);
    circle(290,253,4);
    outtextxy(300,240,"Enter date(only day):");
    rectangle(300,265,360,295);
    circle(290,360,4);
    outtextxy(300,348,"Enter body temperature(degree F):");
    rectangle(300,380,390,410);
    setcolor(BROWN);
    outtextxy(310,470,"OK");
    rectangle(304,467,345,495);
    float bt;
    char x[30];
    int f,g;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        if(f>=300 && f<=360 && g>=265 && g<=295)
        {
            printf("Date:");
            scanf("%d",&day);
            setcolor(WHITE);
            settextstyle(3,DEFAULT_FONT,1);
            sprintf(x,"%d",day);
            outtextxy(310,270,x);
            fprintf(a_t,"%d\n",day);
        }
        else if(f>=300 && f<=390 && g>=380 && g<=410)
        {
            printf("Temperature:");
            scanf("%f",&bt);
            setcolor(WHITE);
            settextstyle(3,DEFAULT_FONT,1);
            sprintf(x,"%.2f",bt);
            outtextxy(310,383,x);
            fprintf(a_t,"%.2f\n",bt);
            fclose(a_t);
        }
        else if(f>=304 && f<=345 && g>=467 && g<=495)
        {
            system("cls");
            setcolor(GREEN);
            outtextxy(310,550,"Your data has added to chart.");
            outtextxy(1190,646,"Back");
            rectangle(1175,647,1250,670);
        }
        else if(f>=1175 && f<=1250 && g>=647 && g<=670)
        {
            cleardevice();
            temperature();
        }

    }
    closegraph();
    getch();
}
int temperature()
{
    cleardevice();
    setcolor(BLUE);
    settextstyle(4,DEFAULT_FONT,2);
    outtextxy(580,30,"Mobile Doctor");
    settextstyle(3,DEFAULT_FONT,1);
    setcolor(3);
    outtextxy(1050,105,"Date:");
    outtextxy(1050,135,"Time:");
    outtextxy(1100,105,__DATE__);
    outtextxy(1100,135,__TIME__);
    rectangle(160,225,520,260);
    rectangle(555,225,860,260);
    rectangle(910,225,1050,260);
    setcolor(15);
    outtextxy(560,170,"DATA OF BODY TEMPERATURE");
    outtextxy(165,230,"View body temperature chart of this month");
    outtextxy(565,230,"Add body temperature to the chart");
    outtextxy(925,230,"Back to home");
    int f,g;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        if(f>=160 && f<=510 && g>=225 && g<=260)
        {
            cleardevice();
            v_t();
        }
        else if(f>=555 && f<=860 && g>=225 && g<=260)
        {
            cleardevice();
            add_t();
        }
        else if(f>=910&& f<=1050 && g>=225 && g<=260)
        {
            cleardevice();
            home();
        }
    }
    closegraph();
    getch();
}
/*Pressure Functions*/
int v_b()
{
    cleardevice();
    setcolor(BLUE);
    settextstyle(4,DEFAULT_FONT,2);
    outtextxy(580,30,"Mobile Doctor");
    settextstyle(3,DEFAULT_FONT,1);
    setcolor(3);
    outtextxy(1050,105,"Date:");
    outtextxy(1050,135,"Time:");
    outtextxy(1100,105,__DATE__);
    outtextxy(1100,135,__TIME__);
    rectangle(470,225,660,260);
    rectangle(680,225,860,260);
    setcolor(15);
    outtextxy(535,170,"DATA OF BLOOD PRESSURE");
    outtextxy(480,230,"View calender wise");
    outtextxy(696,230,"View graphically");
    int f,g;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        if(f>=470 && f<=660 && g>=225 && g<=260)
        {
            cleardevice();
            settextstyle(4,DEFAULT_FONT,1);
            setcolor(WHITE);
            setfillstyle(XHATCH_FILL, BLUE);
            bar3d(100, 20, 160, 80, 10, 1);
            setcolor(WHITE);
            outtextxy(110,28,"M");
            outtextxy(128,49,"D");
            settextstyle(4,HORIZ_DIR,2);
            outtextxy(600,20,"Mobile Doctor\n\n\n");
            settextstyle(3,HORIZ_DIR,2);
            outtextxy(570,80,"DATA OF BLOOD PRESSURE");
            settextstyle(4,HORIZ_DIR,2);
            settextstyle(3,HORIZ_DIR,2);
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
            setcolor(WHITE);
            outtextxy(60,260,"Blood pressure(mm Hg)->");
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
            setcolor(WHITE);
            outtextxy(60,360,"Blood pressure(mm Hg)->");
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
            setcolor(WHITE);
            outtextxy(60,460,"Blood pressure(mm Hg)->");
            line(250, 450, 1200, 450);
            line(250,500,1200,500);
            int i12,j112=450,j212=500;
            for(i12=250; i12<=1200; i12+=95)
                line(i12,j112,i12,j212);
            setcolor(9);
            settextstyle(0,0,4);
            outtextxy(1200,660,"Back");
            while(1)
            {
                while(!ismouseclick(WM_LBUTTONDOWN))
                {
                    delay(50);
                }
                getmouseclick(WM_LBUTTONDOWN, f,g);
                if(f>=1190 && f<=1300 && g>=600 && g<=700)
                {
                    cleardevice();
                    home();
                }
            }
        }
        else if(f>=680 && f<=860 && g>=225 && g<=260)
        {
            cleardevice();
            settextstyle(4,DEFAULT_FONT,1);
            setcolor(WHITE);
            setfillstyle(XHATCH_FILL, BLUE);
            bar3d(100, 20, 160, 80, 10, 1);
            setcolor(WHITE);
            outtextxy(110,28,"M");
            outtextxy(128,49,"D");
            settextstyle(4,HORIZ_DIR,2);
            outtextxy(600,20,"Mobile Doctor\n\n\n");
            settextstyle(3,HORIZ_DIR,2);
            outtextxy(570,80,"DATA OF BLOOD PRESSURE");
            settextstyle(4,HORIZ_DIR,2);
            settextstyle(4,HORIZ_DIR,1);
            int day;
            float sl;
            outtextxy(65,100,"Blood pressure(mm Hg)");
            outtextxy(140,610,"0");
            outtextxy(1220,585,"Day");
            setcolor(WHITE);
            line(150, 145,150, 600);
            line( 150,600,1180, 600);
            int j2=610,k=95;
            setcolor(BLUE);
            outtextxy(310,j2,"05");
            outtextxy(470,j2,"10");
            outtextxy(630,j2,"15");
            outtextxy(790,j2,"20");
            outtextxy(950,j2,"25");
            outtextxy(1110,j2,"30");
            setcolor(YELLOW);
            line(150,435+15,1180,435+15);
            settextstyle(4,DEFAULT_FONT,1);
            setcolor(WHITE);
            outtextxy(1210,435,"(Diastolic)");
            setcolor(BLUE);
            line(150,315,1180,315);
            setcolor(WHITE);
            outtextxy(1215,340,"Normal");
            outtextxy(1210,360,"(Systolic)");
            outtextxy(500,650,"(with five days interval)");
            setcolor(BLUE);
            settextstyle(4,DEFAULT_FONT,1);
            outtextxy(k,135,"180");
            outtextxy(k,165,"170");
            outtextxy(k,195,"160");
            outtextxy(k,225,"150");
            outtextxy(k,255,"140");
            outtextxy(k,285,"130");
            outtextxy(k,315,"120");
            outtextxy(k,345,"110");
            outtextxy(k,375,"100");
            outtextxy(k+15,405,"90");
            outtextxy(k+15,435,"80");
            outtextxy(k+15,465,"70");
            outtextxy(k+15,495,"60");
            outtextxy(k+15,525,"50");
            outtextxy(k+15,555,"40");
            setcolor(BLUE);
            int i;
            float j,sbp,dbp;
            char name4[40],str4[8]= {"_b.txt"};
            for(b=0,c=0; namea[b]!='\0'; c++,b++)
            {
                name4[c]=namea[b];
            }
            name4[c]='\0';
            for(a=0; name4[a]!='\0'; a++);
            for(b=a,c=0; str4[c]!='\0'; c++,b++)
            {
                name4[b]=str4[c];
            }
            name4[b]='\0';
            a_b=fopen(name4,"r");
            while(fscanf(a_b,"%d %f %f",&day,&sbp,&dbp)==3)
            {
                i=day;
                i=i*32+150;
                j=sbp;
                j=562-(sbp-40)*3;
                setcolor(BLUE);
                rectangle(i,j,i+32,598);
                k=dbp;
                k=562-(dbp-40)*3;
                setcolor(YELLOW);
                rectangle(i+2,k,i+31,598);

            }
            setcolor(9);
            settextstyle(0,0,4);
            outtextxy(1200,660,"Back");
            while(1)
            {
                while(!ismouseclick(WM_LBUTTONDOWN))
                {
                    delay(50);
                }
                getmouseclick(WM_LBUTTONDOWN, f,g);
                cleardevice();
                if(f>=1190 && f<=1300 && g>=600 && g<=700)
                {
                    cleardevice();
                    home();
                }
            }

        }
    }
    closegraph();
    getch();
}
int add_b()
{
    cleardevice();
    setcolor(BLUE);
    settextstyle(4,DEFAULT_FONT,2);
    outtextxy(580,30,"Mobile Doctor");
    settextstyle(4,DEFAULT_FONT,1);
    setcolor(WHITE);
    setfillstyle(XHATCH_FILL, BLUE);
    bar3d(100, 20, 160, 80, 10, 1);
    setcolor(WHITE);
    outtextxy(110,28,"M");
    outtextxy(128,49,"D");
    settextstyle(4,HORIZ_DIR,2);
    settextstyle(3,HORIZ_DIR,2);
    outtextxy(565,80,"DATA OF BLOOD PRESSURE");
    char name4[40],str4[8]= {"_b.txt"};
    for(b=0,c=0; namea[b]!='\0'; c++,b++)
    {
        name4[c]=namea[b];
    }
    name4[c]='\0';
    for(a=0; name4[a]!='\0'; a++);
    for(b=a,c=0; str4[c]!='\0'; c++,b++)
    {
        name4[b]=str4[c];
    }
    name4[b]='\0';
    a_b=fopen(name4,"a+");
    int day;
    settextstyle(3,HORIZ_DIR,1);
    setcolor(GREEN);
    circle(290,253,4);
    outtextxy(300,240,"Enter date(only day):");
    rectangle(300,265,360,295);
    circle(290,360,4);
    outtextxy(300,348,"Enter blood pressure(mm hg):");
    outtextxy(300,380,"Systolic:");
    rectangle(300,406,390,436);
    outtextxy(430,380,"Diastolic:");
    rectangle(430,406,520,436);
    setcolor(BROWN);
    outtextxy(310,470,"OK");
    rectangle(304,467,345,495);
    float sbp,dbp;
    char x[30];
    int f,g;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        if(f>=300 && f<=360 && g>=265 && g<=295)
        {
            printf("Date:");
            scanf("%d",&day);
            setcolor(WHITE);
            settextstyle(3,DEFAULT_FONT,1);
            sprintf(x,"%d",day);
            outtextxy(310,270,x);
            fprintf(a_b,"%d\n",day);
        }
        else if(f>=300 && f<=390 && g>=406 && g<=436)
        {
            printf("Systolic:");
            scanf("%f",&sbp);
            setcolor(WHITE);
            settextstyle(3,DEFAULT_FONT,1);
            sprintf(x,"%.2f",sbp);
            outtextxy(310,410,x);
            fprintf(a_b,"%.2f\n",sbp);
        }
        else if(f>=430 && f<=520 && g>=406 && g<=436)
        {
            printf("Diastolic:");
            scanf("%f",&dbp);
            setcolor(WHITE);
            settextstyle(3,DEFAULT_FONT,1);
            sprintf(x,"%.2f",dbp);
            outtextxy(440,410,x);
            fprintf(a_b,"%.2f\n",dbp);
            fclose(a_b);
        }
        else if(f>=304 && f<=345 && g>=467 && g<=495)
        {
            system("cls");
            setcolor(GREEN);
            outtextxy(310,550,"Your data has added to chart.");
            outtextxy(1190,646,"Back");
            rectangle(1175,647,1250,670);
        }
        else if(f>=1175 && f<=1250 && g>=647 && g<=670)
        {
            cleardevice();
            pressure();
        }

    }
}
int pressure()
{
    cleardevice();
    setcolor(BLUE);
    settextstyle(4,DEFAULT_FONT,2);
    outtextxy(580,30,"Mobile Doctor");
    settextstyle(3,DEFAULT_FONT,1);
    outtextxy(1050,105,"Date:");
    outtextxy(1100,105,__DATE__);
    outtextxy(1050,135,"Time:");
    outtextxy(1100,135,__TIME__);
    outtextxy(535,170,"DATA OF BLOOD PRESSURE");
    rectangle(160,225,510,260);
    outtextxy(170,230,"View blood pressure chart of this month");
    rectangle(555,225,860,260);
    outtextxy(570,230,"Add blood pressure to the chart");
    rectangle(910,225,1050,260);
    outtextxy(925,230,"Back to home");
    int f,g;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        if(f>=160 && f<=510 && g>=225 && g<=260)
        {
            cleardevice();
            v_b();
        }
        else if(f>=555 && f<=860 && g>=225 && g<=260)
        {
            cleardevice();
            add_b();
        }
        else if(f>=910&& f<=1050 && g>=225 && g<=260)
        {
            cleardevice();
            home();
        }
    }
    closegraph();
    getch();
}
/* DIAGNOSTIC CENTER*/
int diagnose()
{
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
    setcolor(3);
    outtextxy(300,210,"Choose your disease or problem what are you suffering from:");
    rectangle(295,275,360,305);
    rectangle(410,275,510,305);
    rectangle(563,275,650,305);
    rectangle(703,275,796,305);
    setcolor(15);
    outtextxy(305,280,"Fever");
    outtextxy(423,280,"Diarrhea");
    outtextxy(573,280,"Diabetic");
    outtextxy(713,280,"Pressure");
    setcolor(7);
    outtextxy(855,280,"BACK");
    rectangle(845,275,915,305);
    int f,g;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        /*for fever*/
        if(f>=295 && f<=360 && g>=275 && g<=305)
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
            int i,d,d1=0;
            float a,sum=0;
            char x[5];
            setcolor(2);
            outtextxy(300,160,"You have chosen fever.");
            setcolor(3);
            outtextxy(300,200,"How many days you have been suffering from fever :");
            rectangle(760,199,800,225);
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
                    int c=0,m;
                    for(i=0; i<d; i++)
                    {
                        scanf("%f",&temperature[i]);
                        sum=sum+temperature[i];
                        /*m=300+c;
                        setcolor(WHITE);
                        sprintf(x,"%.2f",temperature[i]);
                        outtextxy(m,265,x);
                        c=c+40;*/
                    }
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
                                home();

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
                        int d=5,number;
                        float a=100;
                        //cleardevice();
                        outtextxy(300,250,"Last       days your average body temperature was : ");
                        sprintf(x,"%d",d);
                        outtextxy(348,250,x);
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
                                outtextxy(540,620,y);
                                sprintf(y,"%lld",num);
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
                                        rectangle(492,400+209,525,400+232);
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
                                            outtextxy(459,400+120,y);
                                            sprintf(y,"%d",bc);
                                        }
                                        else if(m>=492 && m<=525 && n>=400+169 && n<=400+192)
                                        {
                                            printf("IgG:\n1.Positive 2.Negative\nChoose:");
                                            scanf("%d",&ig);
                                            setcolor(WHITE);
                                            outtextxy(496,610,y);
                                            sprintf(y,"%d",ig);
                                        }
                                        else if(m>=492 && m<=525 && n>=400+209 && n<=400+232)
                                        {
                                            printf("IgM:\n1.Positive 2.Negative\nChoose:");
                                            scanf("%d",&im);
                                            setcolor(WHITE);
                                            outtextxy(496,610,y);
                                            sprintf(y,"%d",im);
                                        }

                                    }
                                }
                            }
                        }

                    }
                }
            }
        }
        else if(f>=410 && f<=510 && g>=275 && g<=305)
        {
            cleardevice();
            /*For diarrhea*/
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
            int i,d1=0;
            float a,sum=0;
            char x[5];
            outtextxy(300,160,"You have chosen Diarrhea.");
            outtextxy(300,200,"How many days you are suffering from :");
            rectangle(640,198,680,225);
            outtextxy(300,240,"How many times you have loose and watery stool in a day :");
            rectangle(805,239,850,266);
            int d,t,f,g;
            while(1)
            {
                while(!ismouseclick(WM_LBUTTONDOWN))
                {
                    delay(50);
                }
                getmouseclick(WM_LBUTTONDOWN, f,g);
                if(f>=640 && f<=680 && g>=198 && g<=225)
                {
                    printf("Days:");
                    scanf("%d",&d);
                    setcolor(WHITE);
                    settextstyle(3,DEFAULT_FONT,1);
                    sprintf(x,"%d",d);
                    outtextxy(648,200,x);
                }
                else if(f>=805 && f<=850 && g>=239 && g<=266)
                {
                    printf("Times:");
                    scanf("%d",&t);
                    setcolor(WHITE);
                    settextstyle(3,DEFAULT_FONT,1);
                    sprintf(x,"%d",t);
                    outtextxy(811,240,x);
                }
                else if(d<=2&&t<4)
                {
                    setcolor(3);
                    outtextxy(100,280,"Suggestions: -");
                    line(100,302,210,302);
                    setcolor(WHITE);
                    outtextxy(100,312,"In general it lasts two or three days.It is very common.Although it feels bad,it is usually not serious.");
                    outtextxy(100,336,"You have to drink enough fluids like:");
                    outtextxy(400,360,"- saline solution");
                    outtextxy(400,384,"- pulp free juice");
                    outtextxy(400,408,"- tea with honey");
                    outtextxy(400,432,"- sports drink");
                    outtextxy(100,456,"Soft,bland foods(banana,plain rice,cheese.Avoid milkproducts,caffeine,alcohol,apple and pear");
                    outtextxy(100,480,"juice, high-fiber and fatty food.");
                    outtextxy(1100,600,"HOME PAGE");
                    rectangle(1099,600,1220,624);
                    int f,g;
                    while(1)
                    {
                        while(!ismouseclick(WM_LBUTTONDOWN))
                        {
                            delay(50);
                        }
                        getmouseclick(WM_LBUTTONDOWN, f,g);
                        if(f>=1099 && f<=1220 && g>=600 && g<=624)
                        {
                            cleardevice();
                            home();
                        }

                    }
                }
                else if(d>3&&t>3)
                {
                    setcolor(3);
                    outtextxy(290,330,"Have you any of them :");
                    line(290,352,480,352);
                    setcolor(WHITE);
                    outtextxy(290,370,"1");
                    outtextxy(310,370,"Loose & watery stool");
                    rectangle(285,371,305,391);
                    outtextxy(290,400,"2");
                    outtextxy(310,400,"Cramping(painful involuntary contraction of a muscle,typically caused by fatigue or strain)");
                    rectangle(285,401,305,421);
                    outtextxy(290,430,"3");
                    outtextxy(310,430,"Abdominal pain(Abdominal pain caused by menstruation,the part of the body containing the digestive and reproductive organs the belly");
                    rectangle(285,431,305,451);
                    outtextxy(290,460,"4");
                    outtextxy(310,460,"Eating high-fiber foods");
                    rectangle(285,461,305,481);
                    outtextxy(290,490,"5");
                    outtextxy(310,490,"Drug reaction for over dose");
                    rectangle(285,491,305,511);
                    outtextxy(290,520,"6");
                    outtextxy(310,520,"Bloating");
                    rectangle(285,521,305,541);
                    outtextxy(290,550,"7");
                    outtextxy(310,550,"Vomiting");
                    rectangle(285,551,305,571);
                    outtextxy(290,550,"8");
                    outtextxy(310,550,"Nausea(a feeling of sickness with an inclination to vomit)");
                    rectangle(285,551,305,571);
                    outtextxy(290,550,"9");
                    outtextxy(310,550,"Fever");
                    rectangle(285,551,305,571);
                    outtextxy(290,550,"10");
                    outtextxy(310,550,"Blood,mucus or undigested food in the stool");
                    rectangle(285,551,305,571);
                    outtextxy(290,550,"11");
                    outtextxy(310,550,"Weight loose");
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
                            outtextxy(540,620,y);
                            sprintf(y,"%lld",num);
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
                                            outtextxy(100,c," - Loose & watery stool");
                                        else if(sum[j]==2)
                                            outtextxy(100,c," - Cramping(painful involuntary contraction of a muscle,typically caused by fatigue or strain)");
                                        else if(sum[j]==3)
                                            outtextxy(100,c," - Abdominal pain(Abdominal pain caused by menstruation,the part of the body containing the digestive and reproductive organs the belly");
                                        else if(sum[j]==4)
                                            outtextxy(100,c," - Eating high-fiber foods");
                                        else if(sum[j]==5)
                                            outtextxy(100,c," - Drug reaction for over dose");
                                        else if(sum[j]==6)
                                            outtextxy(100,c," - Bloating");
                                        else if(sum[j]==7)
                                            outtextxy(100,c," - Vomiting");
                                        else if(sum[j]==8)
                                            outtextxy(100,c," - Fever");
                                        else if(sum[j]==9)
                                            outtextxy(100,c," - Nausea(a feeling of sickness with an inclination to vomit)");
                                        else if(sum[j]==10)
                                            outtextxy(100,c," - Blood,mucus or undigested food in the stool");
                                        else if(sum[j]==11)
                                            outtextxy(100,c," - Weight loose");
                                        c=c+30;
                                    }
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
                                    int y,m=197,c;
                                    outtextxy(100,150,"It's something wrong.");
                                    outtextxy(100,180,"You have to do the following tests : -");
                                    for(y=0; y<j; y++)
                                    {
                                        m=m+c;
                                        if(sum[y]==8||sum[y]==3||sum[y]==7)
                                            outtextxy(100,m,"- Blood test");
                                        else if(sum[y]==1||sum[y]==10)
                                            outtextxy(100,m,"- Stool culture");
                                        else if(sum[y]==4||sum[y]==5)
                                            outtextxy(100,m,"- Fasting test");
                                        else if(sum[y]==2||sum[y]==10||sum[y]==11)
                                            outtextxy(100,m,"- Colonoscopy");
                                        /*else if(sum )
                                            outtextxy("- Imaging test");*/
                                        c=c+30;
                                    }
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
                                    outtextxy(100,145,"Input your test report: -");
                                    line(100,160,320,160);
                                    outtextxy(1100,600,"HOME PAGE");
                                    rectangle(1099,600,1220,624);
                                    int f,g;
                                    while(1)
                                    {
                                        while(!ismouseclick(WM_LBUTTONDOWN))
                                        {
                                            delay(50);
                                        }
                                        getmouseclick(WM_LBUTTONDOWN, f,g);
                                        if(f>=1099 && f<=1220 && g>=600 && g<=624)
                                        {
                                            cleardevice();
                                            home();
                                        }

                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        else if(f>=563&& f<=650 && g>=275 && g<=305)
        {
            cleardevice();
            /*For Diabetic*/
            float bd,ad,a1c;
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
            outtextxy(100,150,"You have chosen Diabetic.");
            outtextxy(100,182,"Have you any of them -");
            line(100,210,320,210);
            setcolor(WHITE);
            outtextxy(104,228,"1");
            rectangle(100,227,122,250);
            outtextxy(130,225,"Increased thirst , usually with frequent urination");
            outtextxy(104,260,"2");
            rectangle(100,259,122,282);
            outtextxy(130,257,"Fatigue(extreme tiredness)");
            outtextxy(104,292,"3");
            rectangle(100,292,122,315);
            outtextxy(130,289,"Blurred(become unclear or less distinct)vision");
            outtextxy(104,324,"4");
            rectangle(100,323,122,346);
            outtextxy(130,323,"Slow-healing wounds or infections");
            outtextxy(104,357,"5");
            rectangle(100,356,122,379);
            outtextxy(130,356,"Overweight, obese, or physically inactive");
            setcolor(3);
            outtextxy(100,400,"Choose your symptoms : ");
            rectangle(325,400,430,430);
            rectangle(100,449,140,473);
            setcolor(15);
            outtextxy(102,450,"OK");
            int f,g,sum[10],i=0,m,n,c=180;
            int num,mod;
            while(1)
            {
                while(!ismouseclick(WM_LBUTTONDOWN))
                {
                    delay(50);
                }
                getmouseclick(WM_LBUTTONDOWN, f,g);
                if(f>=325 && f<=430 && g>=400 && g<=430)
                {
                    printf("Choose:");
                    scanf("%d",&num);
                    char y[2];
                    setcolor(WHITE);
                    sprintf(y,"%d",num);
                    outtextxy(330,402,y);
                }
                else if(f>=100 && f<=140 && g>=449 && g<=473)
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
                            int y,c=210;
                            outtextxy(100,150,"It's something wrong.");
                            outtextxy(100,180,"You have to do the following tests : -");
                            setcolor(WHITE);
                            outtextxy(100,210,"- Blood test (Glucose level test)");
                            outtextxy(100,240,"- Urine test");
                            outtextxy(100,270,"- A1C test");
                            setcolor(WHITE);
                            outtextxy(102,302,"OK");
                            setcolor(3);
                            rectangle(100,300,130,322);
                            while(1)
                            {
                                while(!ismouseclick(WM_LBUTTONDOWN))
                                {
                                    delay(50);
                                }
                                getmouseclick(WM_LBUTTONDOWN, f,g);
                                if(f>=100 && f<=130 && g>=300 && g<=322)
                                {
                                    cleardevice();
                                    float bd,ad,a1c;
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
                                    outtextxy(100,180+10,"Input blood glucose level :-");
                                    setcolor(3);
                                    outtextxy(100,205+20,"- Fasting blood glucose(the level of glucose in the blood after fasting for at least 8 hours)");
                                    outtextxy(100,255+20,"- 2 hours glucose tolerance test(after FBG drinks 75mg glucose and takes again blood glucose level)");
                                    outtextxy(100,305+20,"- Hemoglobin A1c");
                                    rectangle(109,389,140,414);
                                    setcolor(YELLOW);
                                    rectangle(255,251,340,276);
                                    rectangle(255,301,340,326);
                                    rectangle(230,351,315,376);
                                    setcolor(15);
                                    outtextxy(110,230+20,"- FBG(mmol/L) :");
                                    outtextxy(110,280+20,"- GTT(mmol/L) :");
                                    outtextxy(110,330+20,"- A1c(in %) :");
                                    outtextxy(110,390,"OK");
                                    int f,g;
                                    char y[2];
                                    while(1)
                                    {
                                        while(!ismouseclick(WM_LBUTTONDOWN))
                                        {
                                            delay(50);
                                        }
                                        getmouseclick(WM_LBUTTONDOWN, f,g);
                                        if(f>=255 && f<=340 && g>=251 && g<=275)
                                        {
                                            printf("FBG(mmol/L):");
                                            scanf("%f",&bd);
                                            settextstyle(3,DEFAULT_FONT,1);
                                            setcolor(WHITE);
                                            sprintf(y,"%.2f",bd);
                                            outtextxy(260,252,y);
                                        }
                                        else  if(f>=255 && f<=340 && g>=301 && g<=325)
                                        {
                                            printf("GTT(mmol/L):");
                                            scanf("%f",&ad);
                                            settextstyle(3,DEFAULT_FONT,1);
                                            setcolor(WHITE);
                                            sprintf(y,"%.2f",ad);
                                            outtextxy(260,302,y);
                                        }
                                        else  if(f>=235 && f<=315 && g>=351 && g<=376)
                                        {
                                            printf("A1c(in percentage):");
                                            scanf("%f",&a1c);
                                            settextstyle(3,DEFAULT_FONT,1);
                                            setcolor(WHITE);
                                            sprintf(y,"%.1f",a1c);
                                            outtextxy(235,352,y);
                                        }
                                        else  if(f>=109 && f<=140 && g>=389 && g<=414)
                                        {

                                            if((3.9<=bd&&bd<=5.5&&7.8>ad)||a1c<5.7)
                                            {
                                                setcolor(2);
                                                outtextxy(100,465,"Don't worry . It is normal .");
                                            }
                                            else if((5.6<=bd&&bd<=6.9&&7.8<=ad&&ad<=11.1)||(a1c>=5.7&&a1c<=6.4))
                                            {
                                                setcolor(15);
                                                outtextxy(100,465,"Prediabeties stage . It is type 2 diabetes .");
                                            }
                                            else if((7.0<=bd&&11.1<ad)||a1c>6.4)
                                            {
                                                setcolor(RED);
                                                outtextxy(100,465,"You are suffering from Diabetes .");
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
                                                    home();
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
        else if(f>=703&& f<=796 && g>=275 && g<=305)
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
                            setcolor(2);
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
                                                    home();
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
        }
        else if(f>=845&& f<=915 && g>=275 && g<=305)
        {
            cleardevice();
            home();
        }
    }

    closegraph();
    getch();
}
/*Login function*/
int login()
{
    cleardevice();
    settextstyle(4,HORIZ_DIR,2);
    setcolor(3);
    setfillstyle(XHATCH_FILL, BLUE);
    bar3d(100, 20, 160, 80, 10, 1);
    setcolor(WHITE);
    outtextxy(110,28,"M");
    outtextxy(128,49,"D");
    setfillstyle(XHATCH_FILL, BLUE);
    settextstyle(4,HORIZ_DIR,2);
    setcolor(WHITE);
    outtextxy(580,30,"Mobile Doctor");
    settextstyle(3,DEFAULT_FONT,1);
    setcolor(3);
    outtextxy(1050,105,"Date:");
    outtextxy(1050,135,"Time:");
    setcolor(15);
    outtextxy(1100,105,__DATE__);
    outtextxy(1100,135,__TIME__);
    outtextxy(600,200,"LOGIN PAGE");
    circle(510,282,5);
    circle(510,345,5);
    setcolor(GREEN);
    outtextxy(520,270,"User name:");
    rectangle(520,301,698,327);
    outtextxy(520,333,"Password:");
    rectangle(520,364,698,390);
    setcolor(15);
    outtextxy(525,440,"Login");
    setcolor(3);
    rectangle(517,440,590,468);
    char pass[40];
    int f,g;
    FILE*fp;
    int a,b,c,c1,i;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        if(f>=520 && f<=698 && g>=303 && g<=327)
        {
            printf("User name:");
            scanf("%s",namea);
            setcolor(WHITE);
            outtextxy(528,302,namea);
        }
        else if(f>=520 && f<=698 && g>=366 && g<=390)
        {
            printf("Password:");
            scanf("%s",pass);
            int i,m=530,j;
            i=strlen(pass);
            setcolor(WHITE);
            for(j=0; j<i; j++)
            {
                outtextxy(m,366,"*");
                m=m+12;
            }

        }
        else if(f>=517 && f<=590 && g>=440 && g<=468)
        {
            char str[8]= {".txt"},name1[40];
            for(b=0,c=0; namea[c]!='\0'; c++,b++)
                name1[b]=namea[c];
            name1[b]='\0';
            for(b=c,c=0; pass[c]!='\0'; c++,b++)
                name1[b]=pass[c];
            name1[b]='\0';
            for(b=0,c=0; name1[c]!='\0'; c++,b++)
                namex[b]=name1[c];
            namex[b]='\0';
            for(a=0; name1[a]!='\0'; a++);
            for(b=a,c=0; str[c]!='\0'; c++,b++)
                name1[b]=str[c];
            name1[b]='\0';
            for(a=0; namex[a]!='\0'; a++);
            for(b=a,c=0; str[c]!='\0'; c++,b++)
                namex[b]=str[c];
            namex[b]='\0';
            fp=fopen(namex,"r");
            if(!fp)
            {
                outtextxy(520,500,"Invalid user name or password.");
                outtextxy(520,540,"Back");
                rectangle(512,535,575,565);
                while(1)
                {
                    while(!ismouseclick(WM_LBUTTONDOWN))
                    {
                        delay(50);
                    }
                    getmouseclick(WM_LBUTTONDOWN, f,g);
                    if(f>=512 && f<=575 && g>=542 && g<=558)
                    {
                        cleardevice();
                        login();
                    }
                }
            }
            else
            {
                system("cls");
                cleardevice();
                home();
            }
        }
    }
}
/*front page*/
int f_page()
{
    cleardevice();
    settextstyle(4,HORIZ_DIR,2);
    setcolor(3);
    setfillstyle(XHATCH_FILL, BLUE);
    bar3d(100, 20, 160, 80, 10, 1);
    setcolor(WHITE);
    outtextxy(110,28,"M");
    outtextxy(128,49,"D");
    setfillstyle(XHATCH_FILL, BLUE);
    settextstyle(4,HORIZ_DIR,2);
    setcolor(WHITE);
    outtextxy(580,30,"Mobile Doctor");
    settextstyle(3,DEFAULT_FONT,1);
    setcolor(3);
    outtextxy(1050,105,"Date:");
    outtextxy(1050,135,"Time:");
    rectangle(510,194,630,230);
    rectangle(660,194,880,230);
    rectangle(1218,668,1290,687);
    setcolor(15);
    outtextxy(1100,105,__DATE__);
    outtextxy(1100,135,__TIME__);
    outtextxy(550,200,"Login");
    outtextxy(680,200,"Create new account");
    outtextxy(1220,670,"Exit");
    int f,g;
    while(1)
    {
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            delay(50);
        }
        getmouseclick(WM_LBUTTONDOWN, f,g);
        if(f>=510 && f<=630 && g>=194 && g<=230)
        {
            cleardevice();
            login();
        }
        else if(f>=660 && f<=880 && g>=194 && g<=230)
        {
            cleardevice();
            save();
        }
        else if(f>=1218 && f<=1290 && g>=668 && g<=687)
            exit(0);
    }
    closegraph();
    getch();
}
/*Main function*/
int main()
{
    int gd=DETECT,gm;
    initwindow(1360,760);
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    f_page();
    closegraph();
    getch();
    return 0;
}





