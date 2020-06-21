#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<string.h>
char namea[30],namex[30];
int day,f,g,a,b,c;
float weight,sl,bt;
void home();
int main();
void login();
void pressure();
void add_b();
void v_b();
void profile();
void weights();
void v_w();
void add_w();
void sugar();
void v_s();
void add_s();
void temperature();
void v_t();
void add_t();
void diagnose();
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
FILE *fp,*a_t,*a_s,*a_w,*a_b;
char str1[8]= {"_w.txt"},str2[8]= {"_s.txt"},str3[8]= {"_t.txt"},str4[8]= {"_b.txt"},name2[40],name3[40],name4[40];
/*New Account*/
void save()
{
    printf("                            Mobile Doctor\n\n\n");
    printf("                                              Date:%s\n", __DATE__);
    printf("                                              Time:%s\n\n", __TIME__);
    printf("                        Personal Information\n\n");
    printf("   Enter Full Name: ");
    scanf("%s",ac.fname);
    printf("   Enter User Name(not changeable): ");
    scanf("%s",ac.name);
    printf("   Enter age: ");
    scanf("%s",ac.age);
    printf("   Enter sex: ");
    scanf("%s",ac.sex);
    printf("   Enter Blood Group: ");
    scanf("%s",ac.Bg);
    printf("   Enter Date of birth: ");
    scanf("%s",ac.DOB);
    printf("   Enter password: ");
    scanf("%s",ac.pass);
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
        name2[b]=ac.name[c];
        name3[b]=ac.name[c];
        name4[b]=ac.name[c];
    }
    name2[b]='\0';
    name3[b]='\0';
    name4[b]='\0';
    for(a=0; ac.name[a]!='\0'; a++);
    for(b=a,c=0; str1[c]!='\0'; c++,b++)
        ac.name[b]=str1[c];
    ac.name[b]='\0';
    a_w=fopen(ac.name,"a+");
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
    printf("\n   Your account has created successfully.\n   Press 3 for home page\n  ");
    int h;
    scanf("  %d",&h);
    system("cls");
    if(h==3)
        home();
}
/*Home Page*/
void home()
{
    for(b=0,c=0; namea[b]!='\0'; c++,b++)
    {
        ac.name[c]=namea[b];
        name2[c]=namea[b];
        name3[c]=namea[b];
        name4[c]=namea[b];
    }
    for(a=0; ac.name[a]!='\0',name2[a]!='\0',name3[a]!='\0',name4[a]!='\0'; a++);
    for(b=a,c=0; str1[c]!='\0',str2[c]!='\0',str3[c]!='\0',str4[c]!='\0'; c++,b++)
    {
        ac.name[b]=str1[c];
        name2[b]=str2[c];
        name3[b]=str3[c];
        name4[b]=str4[c];
    }
    ac.name[b]='\0';
    name2[b]='\0';
    name3[b]='\0';
    name4[b]='\0';
    printf("%s %s %s %s",ac.name,name2,name3,name4);
    int s,i;
    printf("                              Mobile Doctor\n\n\n");
    printf("                               HOME PAGE\n\n");
    printf("  Welcome,%s\n",namea);
    printf("                                              Date:%s\n", __DATE__);
    printf("                                              Time:%s\n\n", __TIME__);
    printf("  1.Weight chart   2.Sugar level chart  3.Body temperature chart\n\n");
    printf("  4.Blood pressure chart 5.Diagnose 6.Profile 7.Logout\n  Choose:");
    scanf("%d",&s);
    system("cls");
    if(s==1)
        weights();
    else if(s==2)
        sugar();
    else if(s==3)
        temperature();
    else if(s==4)
        pressure();
    else if(s==5)
        diagnose();
    else if(s==6)
        profile();
    else if(s==7)
        main();
    getch();
}
/*Profile view*/
void view_p()
{
    printf("                            Mobile Doctor\n\n\n");
    printf("                                              Date:%s\n", __DATE__);
    printf("                                              Time:%s\n\n", __TIME__);
    printf("                         Profile [ %s ]\n\n",namea);
    FILE*v_p;
    v_p=fopen(namex,"r");
    if(!v_p)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    fscanf(v_p,"%s %s %s %s %s %s %s %s %s %s %s",ac.fname,ac.name,ac.age,ac.sex,ac.Bg,ac.DOB,ac.pass,ac.timeac,ac.dateac,ac.date2,ac.date3);
    printf("  Full Name:%s\n",ac.fname);
    printf("  User name:%s\n",ac.name);
    printf("  Age:%s\n",ac.age);
    printf("  Sex:%s\n",ac.sex);
    printf("  Blood group:%s\n",ac.Bg);
    printf("  Date of birth:%s\n",ac.DOB);
    printf("  Password:%s\n\n",ac.pass);
    printf("  Account creation: Date:%s %s %s\n",ac.dateac,ac.date2,ac.date3);
    printf("                    Time:%s\n\n",ac.timeac);
    fclose(v_p);
    printf("\n\n  Back[Press 3]\n  ");
    int c1;
    scanf("%d",&c1);
    if(c1==3)
    {
        system("cls");
        home();
    }

}
/*Profile*/
void profile()
{
    printf("                            Mobile Doctor\n\n\n");
    printf("                                              Date:%s\n", __DATE__);
    printf("                                              Time:%s\n\n", __TIME__);
    printf("                               PROFILE[");
    printf("%s]\n\n",namea);
    printf("  1.See profile  2.Edit profile\n  Choose:");
    int mm;
    scanf("%d",&mm);
    if(mm==1)
    {
        system("cls");
        view_p();
    }
}
/*Weight functions*/
void v_w()
{
    printf("                            Mobile Doctor\n\n\n");
    printf("                                              Date:%s\n", __DATE__);
    printf("                                              Time:%s\n\n", __TIME__);
    printf("                           DATA OF WEIGHT\n\n");
    printf("               1.View calender-wise   2.View graphically\n");
    printf("               Choose:");
    int v;
    scanf("%d",&v);
    int gd=DETECT,gm;
    initwindow(1360,760);
    initgraph(&gd, &gm, "C:\\TC\\BGI");
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
    outtextxy(1000,80,"December");
    settextstyle(4,HORIZ_DIR,2);
    if(v==1)
    {
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
        closegraph();
    }
    else if(v==2)
    {
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
        a_w=fopen(ac.name,"r");
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
        closegraph();
    }
}
void add_w()
{
    printf("                            Mobile Doctor\n\n\n");
    printf("                                              Date:%s\n", __DATE__);
    printf("                                              Time:%s\n\n", __TIME__);
    printf("                           DATA OF WEIGHT\n\n");
    a_w=fopen(ac.name,"a+");
    printf("Enter date(only day):");
    scanf("%d",&day);
    fprintf(a_w,"%d\n",day);
    printf("Enter weight(in kg):");
    scanf("%f",&weight);
    fprintf(a_w,"%f\n",weight);
    fclose(a_w);
    printf("\nYour data has added to chart.");
    printf("\n\n\nBack[Press 3]\n");
    int h;
    scanf("%d",&h);
    system("cls");
    if(h==3)
        weights();
}
void weights()
{
    printf("                            Mobile Doctor\n\n\n");
    printf("                                              Date:%s\n", __DATE__);
    printf("                                              Time:%s\n\n", __TIME__);
    printf("                           DATA OF WEIGHT\n\n");
    printf("  1.View weight chart of this month");
    printf("  2.Add weight to the chart\n  3.Back to home\n  Choose:");
    int n;
    scanf("%d",&n);
    system("cls");
    if(n==1)
        v_w();
    else if(n==2)
        add_w();
    else if(n==3)
        home();
}
/*Sugar function*/
void v_s()
{
    printf("                            Mobile Doctor\n\n\n");
    printf("                                              Date:%s\n", __DATE__);
    printf("                                              Time:%s\n\n", __TIME__);
    printf("                         DATA OF SUGAR LEVEL\n\n");
    printf("               1.View calender-wise   2.View graphically\n");
    printf("               Choose:");
    int v;
    scanf("%d",&v);
    int gd=DETECT,gm;
    initwindow(1360,760);
    initgraph(&gd, &gm, "C:\\TC\\BGI");
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
    if(v==1)
    {
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
        closegraph();
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
    else if(v==2)
    {
        settextstyle(4,HORIZ_DIR,2);
        int day;
        float sl;
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
        int i;
        float j;
        a_s=fopen(name2,"a+");
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
        closegraph();
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
    }
}
void add_s()
{
    printf("                            Mobile Doctor\n\n\n");
    printf("                                              Date:%s\n", __DATE__);
    printf("                                              Time:%s\n\n", __TIME__);
    printf("                         DATA OF SUGAR LEVEL\n\n");
    a_s=fopen(name2,"a+");
    printf("Enter date(only day):");
    scanf("%d",&day);
    fprintf(a_s,"%d\n",day);
    printf("Enter sugar level(mmol/L):");
    scanf("%f",&sl);
    fprintf(a_s,"%f\n",sl);
    fclose(a_s);
    printf("\nYour data has added to chart.");
    printf("\n\n\nBack[Press 3]\n");
    int h;
    scanf("%d",&h);
    system("cls");
    if(h==3)
        sugar();
}
void sugar()
{
    printf("                            Mobile Doctor\n\n\n");
    printf("                                              Date:%s\n", __DATE__);
    printf("                                              Time:%s\n\n", __TIME__);
    printf("                         DATA OF SUGAR LEVEL\n\n");
    printf("  1.View sugar level chart of this month");
    printf("  2.Add sugar level to the chart\n  3.Back to home\n  Choose:");
    int n;
    scanf("%d",&n);
    system("cls");
    if(n==1)
        v_s();
    else if(n==2)
        add_s();
    else if(n==3)
        home();
}
/*Temperature function*/
void v_t()
{
    printf("                            Mobile Doctor\n\n\n");
    printf("                                              Date:%s\n", __DATE__);
    printf("                                              Time:%s\n\n", __TIME__);
    printf("                       DATA OF BODY TMPERATURE\n\n");
    printf("               1.View calender-wise   2.View graphically\n");
    printf("               Choose:");
    int v;
    scanf("%d",&v);
    int gd=DETECT,gm;
    initwindow(1360,760);
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    setcolor(WHITE);
    setfillstyle(XHATCH_FILL, BLUE);
    bar3d(100, 20, 160, 80, 10, 1);
    setcolor(WHITE);
    outtextxy(110,28,"M");
    outtextxy(128,49,"D");
    settextstyle(4,HORIZ_DIR,2);
    outtextxy(600,20,"Mobile Doctor");
    settextstyle(3,HORIZ_DIR,2);
    outtextxy(540,80,"DATA OF BODY TEMPERATURE");
    settextstyle(4,HORIZ_DIR,2);
    if(v==1)
    {
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
        closegraph();
    }
    else if(v==2)
    {
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
        a_t=fopen(name3,"a+");
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
        closegraph();
    }
}
void add_t()
{
    printf("                            Mobile Doctor\n\n\n");
    printf("                                              Date:%s\n", __DATE__);
    printf("                                              Time:%s\n\n", __TIME__);
    printf("                       DATA OF BODY TMPERATURE\n\n");
    a_t=fopen(name3,"a+");
    printf("Enter date(only day):");
    scanf("%d",&day);
    fprintf(a_t,"%d\n",day);
    printf("Enter body temperature(degree Fahrenheit):");
    scanf("%f",&bt);
    fprintf(a_t,"%f\n",bt);
    fclose(a_t);
    printf("\nYour data has added to chart.");
    printf("\n\n\nBack[Press 3]\n  ");
    int h;
    scanf("%d",&h);
    system("cls");
    if(h==3)
        temperature();
}
void temperature()
{
    printf("                            Mobile Doctor\n\n\n");
    printf("                                              Date:%s\n", __DATE__);
    printf("                                              Time:%s\n\n", __TIME__);
    printf("                       DATA OF BODY TMPERATURE\n\n");
    printf("  1.View body temperature chart of this month");
    printf("  2.Add body temperature to the chart\n  3.Back to home\n  Choose:");
    int n;
    scanf("%d",&n);
    system("cls");
    if(n==1)
        v_t();
    else if(n==2)
        add_t();
    else if(n==3)
        home();
}
/*Pressure Functions*/
void v_b()
{
    printf("                            Mobile Doctor\n\n\n");
    printf("                                              Date:%s\n", __DATE__);
    printf("                                              Time:%s\n\n", __TIME__);
    printf("                      DATA OF BLOOD PRESSURE\n\n");
    printf("               1.View calender-wise   2.View graphically\n");
    printf("               Choose:");
    int v;
    scanf("%d",&v);
    int gd=DETECT,gm;
    initwindow(1360,760);
    initgraph(&gd, &gm, "C:\\TC\\BGI");
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
    if(v==1)
    {
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
        outtextxy(80,260,"Blood pressure(mm Hg)->");
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
        outtextxy(80,360,"Blood pressure(mm Hg)->");
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
        outtextxy(80,460,"Blood pressure(mm Hg)->");
        line(250, 450, 1200, 450);
        line(250,500,1200,500);
        int i12,j112=450,j212=500;
        for(i12=250; i12<=1200; i12+=95)
            line(i12,j112,i12,j212);
        setcolor(9);
        settextstyle(0,0,4);
        outtextxy(1200,660,"Back");
        closegraph();
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
    else if(v==2)
    {
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
        line(150,360,1180,360);
        setcolor(WHITE);
        outtextxy(1215,340,"Normal");
        outtextxy(1210,360,"(Systolic)");
        outtextxy(500,650,"(with five days interval)");
        setcolor(BLUE);
        settextstyle(4,DEFAULT_FONT,1);
        outtextxy(k,135,"190");
        outtextxy(k,165,"180");
        outtextxy(k,195,"170");
        outtextxy(k,225,"160");
        outtextxy(k,255,"150");
        outtextxy(k,285,"140");
        outtextxy(k,315,"130");
        outtextxy(k,345,"120");
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
        a_b=fopen(name4,"a+");
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
        closegraph();
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
    }
}
void add_b()
{
    printf("                            Mobile Doctor\n\n\n");
    printf("                                              Date:%s\n", __DATE__);
    printf("                                              Time:%s\n\n", __TIME__);
    printf("                         DATA OF SUGAR LEVEL\n\n");
    a_b=fopen(name4,"a+");
    printf("%s",name4);
    printf("Enter date(only day):");
    scanf("%d",&day);
    fprintf(a_b,"%d\n",day);
    printf("Enter blood pressure(mm hg):\n");
    float sbp,dbp;
    printf("Systolic:");
    scanf("%f",&sbp);
    fprintf(a_b,"%f\n",sbp);
    printf("Diastolic:");
    scanf("%f",&dbp);
    fprintf(a_b,"%f\n",dbp);
    fclose(a_b);
    printf("\nYour data has added to chart.");
    printf("\n\n\nBack[Press 3]\n");
    int h;
    scanf("%d",&h);
    system("cls");
    if(h==3)
        pressure();
}
void pressure()
{
    printf("                            Mobile Doctor\n\n\n");
    printf("                                              Date:%s\n", __DATE__);
    printf("                                              Time:%s\n\n", __TIME__);
    printf("                      DATA OF BLOOD PRESSURE\n\n");
    printf("  1.View blood pressure chart of this month");
    printf("  2.Add blood pressure to the chart\n  3.Back to home\n  Choose:");
    int n;
    scanf("%d",&n);
    system("cls");
    if(n==1)
        v_b();
    else if(n==2)
        add_b();
}
/* DIAGNOSTIC CENTER*/
void diagnose()
{
    printf("                                Mobile Doctor\n\n\n");
    printf("                                              Date:%s\n", __DATE__);
    printf("                                              Time:%s\n\n", __TIME__);
    printf("                              DIAGNOSTIC CENTER\n\n");
    printf("  Choose your disease or problem what are you suffering from:\n");
    printf("  1.Fever  2.Diarrhea  3.Diabetic\n  4.Pressure  5.Back to home\nChoose:");
    int x;
    scanf("%d",&x);
    system("cls");
    printf("\n\n");
    /*for fever*/
    if(x==1)
    {
        int i,d,d1=0;
        float a,temperature,sum=0;
        printf("You have chosen fever.\n");
        printf("How many days you have been suffering from fever:");
        scanf("%d",&d);
        printf("How much your body temperature was in last %d days:\n",d);
        for(i=1; i<=d; i++)
        {
            scanf("%f",&temperature);
            d1++;
            sum=sum+temperature;
        }
        a=sum/d1;
        system("cls");
        printf("                            Mobile Doctor\n\n\n");
        printf("                                              Date:%s\n", __DATE__);
        printf("                                              Time:%s\n\n", __TIME__);
        printf("Last %d days your average body temperature was : %f\n\n",d,a);
        if(a<=100.4&&d<=3)
        {
            printf("Don't worry,it is a low grade fever.It's no need to take medicine.\nYou can take 'PARASITAMAL',if you feel headache.");
            printf("\n\n\nPress 3 for home page\n  ");
            int h;
            scanf("%d",&h);
            system("cls");
            if(h==3)
                home();
        }
        else if(a>100.4&&d>=3)
        {
            printf("It is something wrong.\n");
            printf("   Have you any of them-\n   -----------------\n");
            printf("           1.Sudden high fever(104 degree F)\n");
            printf("           2.Severe headache or pain behind the eyes\n");
            printf("           3.Joint,muscle and/or bone pain\n");
            printf("           4.Gum and nose bleeds\n");
            printf("           5.Easy bruising\n");
            printf("           6.Low white blood cell(WBC)count\n");
            printf("           7.Skin rash\n");
            printf("   Choose your symptoms:");
            int mod,number,sum[10],i=1;
            scanf("%d",&number);
            while(number!=0)
            {
                mod=number%10;
                number=number/10;
                sum[i]=mod;
                i++;
            }
            system("cls");
            printf("                            Mobile Doctor\n\n\n");
            printf("                                              Date:%s\n", __DATE__);
            printf("                                              Time:%s\n\n", __TIME__);
            printf("Your symptoms are:-\n--------------------\n");
            int j,k=1;
            for(j=i; j>=1; j--)
            {
                if(sum[j]==1)
                    printf("%d.Sudden high fever(104 degree F\n",k++);
                else if(sum[j]==2)
                    printf("%d.Severe headache or pain behind the eyes\n",k++);
                else if(sum[j]==3)
                    printf("%d.Joint,muscle and/or bone pain\n",k++);
                else if(sum[j]==4)
                    printf("%d.Gum and nose bleeds\n",k++);
                else if(sum[j]==5)
                    printf("%d.Easy bruising\n",k++);
                else if(sum[j]==6)
                    printf("%d.Low white blood cell(WBC)count\n",k++);
                else if(sum[j]==7)
                    printf("%d.Skin rash\n",k++);
            }
            printf("You have to test your blood.\n\n");
            printf("Please input your test report-\n_________________________________\n");
            printf("-Blood Culture : \n1.Positive\n2.Negative\nSelect(1/2):");
            scanf("%d",&x);
            if(x==1)
                printf("Your blood culture is positive.\n");
            else if(x==2)
                printf("Your blood culture is negative.\n");
            printf("-Antibody test :\n");
            int x1[2];
            printf("IgG : \n1.Positive\n2.Negative\nSelect(1/2):");
            scanf("%d",&x1[1]);
            if(x1[1]==1)
                printf("Your IgG is positive.\n");
            else if(x1[1]==2)
                printf("Your IgG is negative.\n");
            printf("IgM : \n1.Positive\n2.Negative\nSelect(1/2):");
            scanf("%d",&x1[2]);
            if(x1[2]==1)
                printf("Your IgM is positive.\n");
            else if(x1[2]==2)
                printf("Your IgM is negative.\n");
            printf("-Molecular testing(polymerase chain reaction,PCR):");
            printf("\n\n\nPress 3 for home page\n  ");
            int h;
            scanf("%d",&h);
            system("cls");
            if(h==3)
                home();
        }
    }
    /*for Diarrhea*/
    else if(x==2)
    {
        printf("                            Mobile Doctor\n\n\n");
        printf("                                              Date:%s\n", __DATE__);
        printf("                                              Time:%s\n\n", __TIME__);
        int d,t;
        printf("You have chosen Diarrhea.\n\n");
        printf("How many days you are suffering from:");
        scanf("%d",&d);
        printf("How many times you have loose and watery stool in a day:");
        scanf("%d",&t);
        if(d<=2&&t<4)
        {
            printf("   Suggestions:-\n   -----------------\n");
            printf("          In general it lasts two or three days.It is very common.\n");
            printf("          Although it feels bad,it is usually not serious.You have\n");
            printf("          to drink enough fluids like:\n");
            printf("                                     -saline solution\n");
            printf("                                     -pulp free juice\n");
            printf("                                     -tea with honey\n");
            printf("                                     -sports drink\n");
            printf("          Soft,bland foods(banana,plain rice,cheese.Avoid milk\n");
            printf("          products,caffeine,alcohol,apple and pear juice, high-\n");
            printf("          fiber and fatty food.\n");
            printf("\n\n\nPress 3 for home page\n  ");
            int h;
            scanf("%d",&h);
            system("cls");
            if(h==3)
                home();
        }
        else if(d>3&&t>3)
        {
            printf("   Have you any of them-\n   -----------------\n");
            printf("           1.Loose & watery stool\n");
            printf("           2.Cramping(painful involuntary contraction of a muscle,\n");
            printf("                      typically caused by fatigue or strain)\n");
            printf("           3.Abdominal pain(Abdominal pain caused by menstruation,the\n");
            printf("                            part of the body containing the digestive\n");
            printf("                            and reproductive organs; the belly)\n");
            printf("           4.Eating high-fiber foods\n");
            printf("           5.Drug reaction for over dose\n");
            printf("           6.Bloating\n           7.Nausea(a feeling of sickness with an inclination to vomit.\n");
            printf("           8.Fever\n            9.Vomiting\n");
            printf("          10.Blood,mucus or undigested food in the stool\n");
            printf("          11.Weight loose\n");
            printf("   Choose your symptoms:");
            int mod,number,sum[20],i=1;
            scanf("%d",&number);
            while(number!=0)
            {
                mod=number%10;
                number=number/10;
                sum[i]=mod;
                i++;
            }
            system("cls");
            printf("                            Mobile Doctor\n\n\n");
            printf("                                              Date:%s\n", __DATE__);
            printf("                                              Time:%s\n\n", __TIME__);
            printf("Your symptoms are:-\n--------------------\n");
            int j,k=1;
            for(j=i; j>=1; j--)
            {
                if(sum[j]==1)
                    printf("%d.Frequent loose & watery stool\n",k++);
                else if(sum[j]==2)
                {
                    printf("%d.Cramping(painful involuntary contraction of a muscle, \n");
                    printf("            typically caused by fatigue or strain)\n",k++);
                }
                else if(sum[j]==3)
                {
                    printf("%d.Abdominal pain(Abdominal pain caused by menstruation,the\n");
                    printf("                  part of the body containing the digestive\n");
                    printf("                  and reproductive organs; the belly)\n",k++);
                }
                else if(sum[j]==4)
                    printf("%d.Eating high-fiber foods\n",k++);
                else if(sum[j]==5)
                    printf("%d.Drug reaction for over dose\n",k++);
                else if(sum[j]==6)
                    printf("%d.Bloating\n",k++);
                else if(sum[j]==7)
                    printf("%d.Nausea(a feeling of sickness with an inclination to vomit)\n",k++);
                else if(sum[j]==8)
                    printf("%d.Fever\n",k++);
                else if(sum[j]==9)
                    printf("%d.Vomiting\n",k++);
                else if(sum[j]==10)
                    printf("%d.Blood,mucus or undigested food in the stool\n",k++);
                else if(sum[j]==11)
                    printf("%d.Weight loose\n",k++);

            }
            int y,m=1;
            printf("It's something wrong.\nYou have to do the following tests:-\n");
            for(y=0; y<j; y++)
            {
                if(sum[y]==8||sum[y]==3||sum[y]==7)
                    printf("%d.Blood test\n",m++);
                else if(sum[y]==1||sum[y]==10)
                    printf("%d.Stool culture\n",m++);
                else if(sum[y]==4||sum[y]==5)
                    printf("%d.Fasting test\n",m++);
                else if(sum[y]==2||sum[y]==10||sum[y]==11)
                    printf("%d.Colonoscopy\n",m++);
                else if(sum )
                    printf("%d.Imaging test\n",m++);
            }
            printf("                            Mobile Doctor\n\n\n");
            printf("                                              Date:%s\n", __DATE__);
            printf("                                              Time:%s\n\n", __TIME__);
            printf("Input your test report:-\n-------------------\n");
            printf("\n\n\nPress 3 for home page\n");
            int h;
            scanf("%d",&h);
            system("cls");
            if(h==3)
                home();
        }
    }
    /*for  Diabetic*/
    else if(x==3)
    {
        printf("                            Mobile Doctor\n\n\n");
        printf("                                              Date:%s\n", __DATE__);
        printf("                                              Time:%s\n\n", __TIME__);
        printf("You have chosen Diabetic.\n\n");
        printf("   Have you any of them-\n   -----------------\n");
        printf("           1.Increased thirst, usually with frequent urination\n");
        printf("           2.Fatigue(extreme tiredness)\n");
        printf("           3.Blurred(become unclear or less distinct)vision\n");
        printf("           4.Slow-healing wounds or infections\n");
        printf("           5.Overweight, obese, or physically inactive\n");
        /* printf("           6.\n           7.\n");
         printf("           8.\n            9.\n");
         printf("          10.\n");
         printf("          11.\n");*/
        printf("   Choose your symptoms:");
        int mod,number,sum[20],i=1;
        scanf("%d",&number);
        while(number!=0)
        {
            mod=number%10;
            number=number/10;
            sum[i]=mod;
            i++;
        }
        system("cls");
        printf("                            Mobile Doctor\n\n\n");
        printf("                                              Date:%s\n", __DATE__);
        printf("                                              Time:%s\n\n", __TIME__);
        printf("Your symptoms are:-\n--------------------\n");
        int j,k=1;
        for(j=i; j>=1; j--)
        {
            if(sum[j]==1)
                printf("%d.Increased thirst, usually with frequent urination\n",k++);
            else if(sum[j]==2)
                printf("%d.Fatigue(extreme tiredness)\n",k++);
            else if(sum[j]==3)
                printf("%d.Blurred(become unclear or less distinct)vision\n",k++);
            else if(sum[j]==4)
                printf("%d.Slow-healing wounds or infections\n",k++);
            else if(sum[j]==5)
                printf("%d.Overweight, obese, or physically inactive\n",k++);
            /*else if(sum[j]==7)
                printf("%d.\n",k++);
            else if(sum[j]==8)
                printf("%d.\n",k++);
            else if(sum[j]==9)
                printf("%d.\n",k++);
            else if(sum[j]==10)
                printf("%d.\n",k++);
            else if(sum[j]==11)
                printf("%d.\n",k++);*/

        }
        int y,m=1;
        printf("It's something wrong.\nYou have to do the following tests:-\n");
        for(y=1; y<=j; y++)
        {
            if(sum[y]==1||sum[y]==2)
            {
                printf("%d.Blood test(Glucose level test)\n",m++);
                printf("%d.Urine test\n",m++);
            }
            /*else if(sum[y]==||sum[y]==)
                printf("%d.\n",m++);
            else if(sum[y]==||sum[y]==||sum[y]==)
                printf("%d.\n",m++);
            else if(sum )
                printf("%d.\n",m++);*/
        }
        printf("                            Mobile Doctor\n\n\n");
        printf("                                              Date:%s\n", __DATE__);
        printf("                                              Time:%s\n\n", __TIME__);
        printf("Input your test report:-\n-------------------\n");
        printf("Input blood glucose level:-\n");
        printf("     -Fasting blood glucose(the level of glucose in the blood after fasting\n");
        printf("                            for at least 8 hours)\n");
        printf("         -FBG(mmol/L):");
        float bd,ad;
        scanf("%f",&bd);
        printf("    \n-2 hours glucose tolerance test(after FBG drinks 75mg glucose and takes\n");
        printf("                                      again blood glucose level)\n");
        printf("         -GTT(mmol/L):");
        scanf("%f",&ad);
        printf("Results:\n");
        if((3.9<=bd&&bd<=5.5)&&(7.8<ad))
            printf("Don't worry.It is normal.\n");
        else if((5.6<=bd&&bd<=6.9)&&(7.8<=ad&&ad<=11.1))
            printf("Prediabetes stage.\n");
        else if(7.0<=bd&&11.1<=ad)
            printf("You are suffering from Diabetes.\n");
        printf("\n\n\nPress 3 for home page\n  ");
        int h;
        scanf("%d",&h);
        system("cls");
        if(h==3)
            home();
    }
    /*for Pressure*/
    else if(x==4)
    {
        printf("                            Mobile Doctor\n\n\n");
        printf("                                              Date:%s\n", __DATE__);
        printf("                                              Time:%s\n\n", __TIME__);
        printf("You have chosen Pressure.\n\n");
        printf("   Have you any of them-\n   -----------------\n");
        printf("           1.Nervousness\n");
        printf("           2.Sweating\n");
        printf("           3.Difficulty to sleep\n");
        printf("           4.Blood spots in the eye\n");
        printf("           5.Facial flushing\n");
        printf("           6.Severe headaches and anxiety\n");
        printf("           7.Shortness of breath\n           8.Nosebleeds\n");
        /*printf("          10.\n");
        printf("          11.\n");*/
        printf("   Choose your symptoms:");
        int mod,number,sum[20],i=1;
        scanf("%d",&number);
        while(number!=0)
        {
            mod=number%10;
            number=number/10;
            sum[i]=mod;
            i++;
        }
        system("cls");
        printf("                            Mobile Doctor\n\n\n");
        printf("                                              Date:%s\n", __DATE__);
        printf("                                              Time:%s\n\n", __TIME__);
        printf("Your symptoms are:-\n--------------------\n");
        int j,k=1;
        for(j=i; j>=1; j--)
        {
            if(sum[j]==1)
                printf("%d.Nervousness\n",k++);
            else if(sum[j]==2)
                printf("%d.Sweating\n",k++);
            else if(sum[j]==3)
                printf("%d.Difficulty to sleep\n",k++);
            else if(sum[j]==4)
                printf("%d.Blood spots in the eye\n",k++);
            else if(sum[j]==5)
                printf("%d.Facial flushing\n",k++);
            else if(sum[j]==6)
                printf("%d.Severe headaches and anxiety\n",k++);
            else if(sum[j]==7)
                printf("%d.Shortness of breath\n",k++);
            else if(sum[j]==8)
                printf("%d.Nosebleeds\n",k++);
            /* else if(sum[j]==9)
                 printf("%d.\n",k++);
             else if(sum[j]==10)
                 printf("%d.\n",k++);
             else if(sum[j]==11)
                 printf("%d.\n",k++);*/
        }
        int y,m=1;
        printf("\nIt's something wrong.\nYou have to measure your blood pressure.\n\n");
        int p1,p2;
        printf("Input your blood pressure,that you have measured-\n\n");
        printf("Systolic Pressure(upper#mm Hg):");
        scanf("%d",&p1);
        printf("Diastolic Pressure(lower#mm Hg):");
        scanf("%d",&p2);
        printf("\n\nResult:\n");
        if(p1<=120&&p2<=80)
            printf("Don't worry,its normal.Be careful and lead a healthy life. \n");
        else if((p1>120&&p1<140)&&(p2>80&&p2<89))
        {
            printf("It is not high.Almost normal(prehypertension).But you \n");
            printf("are in risk.Now you are on high pressure boundary.Take\n");
            printf("a balance diet,physical exercise and reduce your current weight\n");
        }
        else if((p1>140&&p1<159)&&(p2>90&&p2<99))
            printf("It is hypertension(high blood pressure)-Stage 1.\n");
        else if((p1>160&&p1<180)&&(p2>99&&p2<110))
            printf("It is hypertension(high blood pressure)-Stage 2.\n");
        else if(p1>180&&p2>110)
            printf("It is hypertensive(Emergency care need).You should go your nearest hospital\n");
        printf("\n\n\nPress 3 for home page\n");
        int h;
        scanf("%d",&h);
        system("cls");
        if(h==3)
            home();
    }
    else if(x==5)
        home();
}
/*Login function*/
void login()
{
    printf("                            Mobile Doctor\n\n\n");
    printf("                                              Date:%s\n", __DATE__);
    printf("                                              Time:%s\n\n", __TIME__);
    FILE*fp;
    int a,b,c,c1,i;
    printf("                             LOGIN PAGE\n\n");
    char pass[20],ch;
    printf("\n\n          User name: ");
    scanf("%s",namea);
    printf("\n          Password: ");
    /* while(1)
     {

             i=0;
         ch=getch();
         if(ch==13)
             break;

         pass[i++]=ch;
         ch='*';
         putch(ch);
     }
     pass[i]='\0';
     printf("\nPassword entered:%s",pass);
     getch();*/
    scanf("%s",pass);
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
        printf("\n\n          Invalid user name or password.\n\n");
        printf("          Back[Press 3]\n          ");
        scanf("%d",&c1);
        if(c1==3)
        {
            system("cls");
            login();
        }
    }
    else
    {
        system("cls");
        home();
    }
}
/*Main function*/
int main()
{
    int c1;
    printf("                            Mobile Doctor\n\n\n");
    printf("                                              Date:%s\n", __DATE__);
    printf("                                              Time:%s\n\n", __TIME__);
    printf("                    1.Log in   2.Create a new account\n\n");
    printf("                    Choose:");
    scanf("%d",&c1);
    if(c1==1)
    {
        system("cls");
        login();
    }
    else if(c1==2)
    {
        system("cls");
        save();
    }
    getch();
    return 0;
}






