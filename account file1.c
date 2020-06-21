//#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<time.h>
/*int MOuse()
{
    int x, y;
    while(!ismouseclick(WM_RBUTTONDOWN))
        delay(50);
    getmouseclick(WM_LBUTTONDOWN, x,y);
    return x;
}*/
struct node
{
    char* name,*sex,*DOB,*Bg;
    int age,pw;
    struct node *next;
}*top,*temp;

insert(struct node**top1,struct node**top2,struct node**top3,struct node**top4,char nam[],char sx[],char B[],char Db[],int a,int p)
{
    temp=(struct node*)malloc(sizeof(struct node));
    temp->name=nam;
    temp->sex=sx;
    temp->Bg=B;
    temp->DOB=Db;
    temp->age=a;
    temp->pw=p;
    temp->next=*top1;
    temp->next=*top2;
    temp->next=*top3;
    temp->next=*top4;
    *top1=temp;
    *top2=temp;
    *top3=temp;
    *top4=temp;
    save(temp);
}
void save(struct node*temp)
{
    FILE *fp;
    fp=fopen("mlist.txt","wb");
    if(!fp)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    printf("\nSaving file.\n");
    temp=top;
    while(temp)
    {
        fwrite(temp,sizeof(struct node),1,fp);
        temp=temp->next;
    }
    fclose(fp);
}
account()
{
    //freopen("in.txt", "a", stdout);
    struct node *ne=NULL;
    struct node *se=NULL;
    struct node *b=NULL;
    struct node *d=NULL;
    int age,pw;
    char name[30],sex[10],Bg[5],DOB[30];
    printf("                            Mobile Doctor\n\n\n");
    printf("                                              Date:%s\n", __DATE__);
    printf("                                              Time:%s\n\n", __TIME__);
    printf("                        Personal Information\n\n");
    printf("   Enter Name: ");
    scanf("%s",&name);
    printf("   Enter age: ");
    scanf("%d",&age);
    printf("   Enter sex: ");
    scanf("%s",&sex);
    printf("   Enter Blood Group: ");
    scanf("%s",&Bg);
    printf("   Enter Date of birth: ");
    scanf("%s",&DOB);
    printf("   Enter password: ");
    scanf("%d",&pw);
    system("cls");
    insert( &ne,&se,&b,&d, name,sex,Bg,DOB,age,pw);
    printf("                            Mobile Doctor\n\n\n");
    printf("  Your account has created successfully.\n  Press 3 for home page\n  ");
    int h;
    scanf("%d",&h);
    system("cls");
    if(h==3)
        home();
}
/*Home Page*/
home()
{
    int s,i;
    printf("                             Mobile Doctor\n\n\n");
    printf("                               HOME PAGE\n\n");
    printf("                                              Date:%s\n", __DATE__);
    printf("                                              Time:%s\n\n", __TIME__);
    printf("  1.View weights   2.View sugar level  3.View body temperature\n");
    printf("  4.Diagnose\n  Choose:");
    /*printf("                                          -:Tips of today:-\n\n");
    for(i=1; i<2; i++)
    {
        if(i==1)
        {
            printf("                                   The weather is very cold and dry.\n");
            printf("                                   Use mask.\n");
        }
        delay(10);
        system("cls");
        if(i==2)
        {
            printf("                                   The weather is very cold and dry.\n");
            printf("                                   Use mouirsturising creame.\n");
        }
        system("cls");

    }*/
    scanf("%d",&s);
    system("cls");
    if(s==1)
        weights();
    /*else if(c==2)
        sugar();
    else if(c==3)
        temperature();*/
    if(s=4)
        diagnose();
}
/*Weights functions*/
/*v_w();
 add_w()
 {
     int y[3]
 }*/
weights()
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
    /*if(n==1)
        v_w();
    else if(n==2)
        add_w();
    else if(n==3)
        home();*/
}
/* DIAGNOSTIC CENTER*/
diagnose()
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
            printf("It is something wrong.You have to test your blood.\n");
            printf("Please input your test report-\n_________________________________\n");
            printf("Blood Culture : \n1.Positive\n2.Negative\nSelect(1/2):");
            scanf("%d",&x);
            if(x==1)
                printf("Your blood culture is positive.");
            else if(x==2)
                printf("Your blood culture is negative.");
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
            printf("          to drink enough fluids(like saline solution,fruit juice)\n");
            printf("          for dehydration.\n");
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
            printf("           4.Bloating\n           5.Nausea(a feeling of sickness with an inclination to vomit.\n");
            printf("           6.Fever\n            7.Vomiting\n");
            printf("           8.Blood,mucus or undigested food in the stool\n");
            printf("           9.Weight loose\n");
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
                    printf("%d.Loose & watery stool\n",k++);
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
                    printf("%d.Bloating\n",k++);
                else if(sum[j]==5)
                    printf("%d.Nausea(a feeling of sickness with an inclination to vomit)\n",k++);
                else if(sum[j]==6)
                    printf("%d.Fever\n",k++);
                else if(sum[j]==7)
                    printf("%d.Vomiting\n",k++);
                else if(sum[j]==8)
                    printf("%d.Blood,mucus or undigested food in the stool\n",k++);
                else if(sum[j]==9)
                    printf("%d.Weight loose\n",k++);

            }
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
        float bd,ad;
        printf("Input the suger level:-\n          Before meal:");
        scanf("%f",&bd);
        printf("        \nAfter meal:");
        scanf("%f",&ad);
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
        int p1,p2;
        printf("Input your blood pressure,that you have measured-\n\n");
        printf("Systolic Pressure(upper#mm Hg):");
        scanf("%d",&p1);
        printf("Diastolic Pressure(lower#mm Hg):");
        scanf("%d",&p2);
        if(p1<=120&&p2<=80)
            printf("Don't worry,its normal.\n");
        if((p1>120&&p1<190)&&(p2>80&&p2<89))
            printf("It is not high.Almost normal(prehypertension).\n");
        printf("\n\n\nPress 3 for home page\n  ");
        int h;
        scanf("%d",&h);
        system("cls");
        if(h==3)
            home();
    }
    else if(x==5)
        home();
}
/*Main Function*/
int main()
{
    int c,pass;
    char name[30];
    printf("                            Mobile Doctor\n\n\n");
    printf("                                              Date:%s\n", __DATE__);
    printf("                                              Time:%s\n\n", __TIME__);
    printf("                    1.Log in   2.Create a new account\n");
    printf("              Choose:");
    scanf("%d",&c);
   int gd = DETECT, gm;

   initgraph(&gd, &gm, "C:\\TC\\BGI");

   setfillstyle(XHATCH_FILL, RED);
   circle(100, 100, 50);
   floodfill(100, 100, WHITE);

   getch();
   closegraph();
   return 0;
}
    if(c==1)
    {
        printf("\n\n       User name: ");
        //gets(name);
        scanf("%s",&name);
        printf("\n       Password: ");
        scanf("%d",&pass);
        system("cls");
        home();
    }
    else if(c==2)
        account();
    getch();
    return 0;
}




