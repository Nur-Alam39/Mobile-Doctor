#include"stdio.h"
#include"stdlib.h"
#include"string.h"

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
}
int main()
{
    struct node *ne=NULL;
    struct node *se=NULL;
    struct node *b=NULL;
    struct node *d=NULL;

    int age,pw;
    char name[30],sex[10],Bg[5],DOB[30];

    printf("Enter Name: ");
    gets(name);
    printf("Enter age: ");
    scanf("%d",&age);
    printf("Enter sex: ");
    gets(sex);
    printf("Enter Blood Group: ");
    gets(Bg);
    printf("Enter Date of birth: ");
    gets(DOB);
    printf("Enter password: ");
    scanf("%d",&pw);

    insert( &ne,&se,&b,&d, name,sex,Bg,DOB,age,pw);

    return 0;
}



