#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct user
{
    char name[30],DOB[12],BG[5],sex[8];
    int password[10];
    struct user*next;
};
struct user*temp;
struct user*head;
insert(char name[],char DOB[],char BG[],char sex[])
{
    temp=(struct user*)malloc(sizeof(struct user));
    temp->name=name;
    temp->DOB=DOB;
    temp->BG=BG;
    temp->sex=sex;
    temp->password=password;
    temp->next=NULL;
}
int main()
{
    return 0;
}
