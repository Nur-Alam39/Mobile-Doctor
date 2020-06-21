#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<time.h>
struct node
{
    char name[40],sex[8],DOB[10],Bg[4];
    int age,pw;
}ac;
char str1[8]= {"_w.txt"},str2[8]= {"_s.txt"},str3[8]= {"_t.txt"},name2[40],name3[40];
void home()
{
    int s,i;
    printf("                             Mobile Doctor\n\n\n");
    printf("                               HOME PAGE\n\n");
    printf("                                              Date:%s\n", __DATE__);
    printf("                                              Time:%s\n\n", __TIME__);
    printf("  1.Weight chart   2.Sugar level chart  3.Body temperature chart\n");
    printf("  4.Diagnose\n  Choose:");
    scanf("%d",&s);
    system("cls");
    /*if(s==1)
        weights();
    else if(s==2)
        sugar();
    else if(s==3)
        temperature();
    if(s==4)
        diagnose();*/
}
void save()
{

    FILE *fp,*a_t,*a_s,*a_w;
    int a,b,c;
    printf("                            Mobile Doctor\n\n\n");
    printf("                                              Date:%s\n", __DATE__);
    printf("                                              Time:%s\n\n", __TIME__);
    printf("                        Personal Information\n\n");
    printf("   Enter Name: ");
    scanf("%s",ac.name);
    printf("   Enter age: ");
    scanf("%d",&ac.age);
    printf("   Enter sex: ");
    scanf("%s",ac.sex);
    printf("   Enter Blood Group: ");
    scanf("%s",ac.Bg);
    printf("   Enter Date of birth: ");
    scanf("%s",ac.DOB);
    printf("   Enter password: ");
    char str[8]= {".txt"},name[40];
    for(b=0,c=0; ac.name[c]!='\0'; c++,b++)
        name[b]=ac.name[c];
    name[b]='\0';
    for(a=0; ac.name[a]!='\0'; a++);
    for(b=a,c=0; str[c]!='\0'; c++,b++)
        name[b]=str[c];
    name[b]='\0';
    fp=fopen(name,"a");
    if(!fp)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    fwrite(&ac,sizeof(ac),1,fp);
    fflush(fp);
    fclose(fp);
    for(b=0,c=0; ac.name[c]!='\0'; c++,b++)
    {
        name2[b]=ac.name[c];
        name3[b]=ac.name[c];
    }
    name2[b]='\0';
    name3[b]='\0';
    for(a=0; ac.name[a]!='\0'; a++);
    for(b=a,c=0; str1[c]!='\0'; c++,b++)
        ac.name[b]=str1[c];
    ac.name[b]='\0';
    a_w=fopen(ac.name,"w+");
    fflush(a_w);
    fclose(a_w);
    for(a=0; name2[a]!='\0'; a++);
    for(b=a,c=0; str2[c]!='\0'; b++,c++)
        name2[b]=str2[c];
    name2[b]='\0';
    a_s=fopen(name2,"w+");
    fflush(a_s);
    fclose(a_s);
    for(a=0; name3[a]!='\0'; a++);
    for(b=a,c=0; str3[c]!='\0'; b++,c++)
        name3[b]=str3[c];
    name3[b]='\0';
    a_t=fopen(name3,"w+");
    fflush(a_t);
    fclose(a_t);
    printf("  Your account has created successfully.\n  Press 3 for home page\n  ");
    int h;
    scanf("%d",&h);
    system("cls");
    if(h==3)
        home();
}
void login()
{
    FILE*fp;
    int a,b,c,c1;
    char name[30],pass[20];
    printf("\n\n          User name: ");
    scanf("%s",&name);
    printf("\n          Password: ");
    scanf("%s",&pass);
    char str[8]= {".txt"},name1[40];
    for(b=0,c=0; name[c]!='\0'; c++,b++)
        name1[b]=name[c];
    name1[b]='\0';
    for(a=0; name1[a]!='\0'; a++);
    for(b=a,c=0; str[c]!='\0'; c++,b++)
        name1[b]=str[c];
    name1[b]='\0';
    fp=fopen(name1,"r");
    if(!fp)
    {
        printf("          Invalid user name or password.\n\n");

        printf("          Back[Press 3]\n          ");
        scanf("%d",&c1);
        if(c1==3)
        {
            system("cls");
            main();
        }
    }

    else
    {
        system("cls");
        home();
    }
}
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
        login();
    else if(c1==2)
    {
        system("cls");
        save();
    }
    getch();
    return 0;
}
