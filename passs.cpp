#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char pass[20],ch=0;
    int i=0;
    printf("\n          Password: ");
    while((ch!='\r'))
    {
        ch=getch();
        pass[i]=ch;
        i++;
        printf("%c",ch);
    }
    pass[i]='\0';
    printf("\nPassword entered:%s",pass);
    return 0;
}
