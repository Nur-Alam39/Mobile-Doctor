/*Blood Pressure Functions*/
void v_w()
{
    printf("                            Mobile Doctor\n\n\n");
    printf("                                              Date:%s\n", __DATE__);
    printf("                                              Time:%s\n\n", __TIME__);
    printf("                         DATA OF BLOOD PRESSURE\n\n");
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
    outtextxy(500,80,"DATA OF  BLOOD PRESSURE");
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
                system("cls");
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
        a_w=fopen(ac.name,"a+");
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
                system("cls");
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
        b_pressure();
}
void b_pressure()
{
    printf("                            Mobile Doctor\n\n\n");
    printf("                                              Date:%s\n", __DATE__);
    printf("                                              Time:%s\n\n", __TIME__);
    printf("                       DATA OF BLOOD PRESSURE\n\n");
    printf("  1.View blood pressure chart of this month");
    printf("  2.Add blood pressure to the chart\n  3.Back to home\n  Choose:");
    int n;
    scanf("%d",&n);
    system("cls");
    if(n==1)
        v_p();
    else if(n==2)
        add_p();
    else if(n==3)
        home();
}
