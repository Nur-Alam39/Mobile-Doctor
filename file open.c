#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<time.h>
struct node
{
    char name[40],sex[8],DOB[10],Bg[4];
    int age,pw;
};
struct node ac;
int main()
{
    int a,b,c,i,j,k,p,q,r;
    FILE*a_w,*a_s,*a_t;
    char str1[8]= {"_w.txt"},str2[8]= {"_s.txt"},str3[8]= {"_t.txt"},name2[40],name3[40];
    printf("Enter Name: ");
    scanf("%s",ac.name);
    for(b=0,c=0; ac.name[c]!='\0'; c++,b++)
    {
        name2[b]=ac.name[c];
        name3[b]=ac.name[c];
    }
    name2[b]='\0';
    name3[b]='\0';
    for(a=0; ac.name[a]!='\0'; a++);
    for(b=a,c=0; str1[c]!='\0'; c++,b++)
    {
        ac.name[b]=str1[c];
    }
    ac.name[b]='\0';
    printf("%s",ac.name);
    a_w=fopen(ac.name,"w+");
    fflush(a_w);
    fclose(a_w);

    for(a=0; name2[a]!='\0'; a++);
    for(b=a,c=0; str2[c]!='\0'; b++,c++)
    {
        name2[b]=str2[c];
    }
    name2[b]='\0';
    printf("%s",name2);
    a_s=fopen(name2,"w+");
    fflush(a_s);
    fclose(a_s);
    for(a=0; name3[a]!='\0'; a++);
    for(b=a,c=0; str3[c]!='\0'; b++,c++)
    {
        name3[b]=str3[c];
    }
    name3[b]='\0';
    printf("%s",name3);
    a_t=fopen(name3,"w+");
    fflush(a_t);
    fclose(a_t);
    return 0;
}
