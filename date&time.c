#include<stdio.h>
#include<conio.h>
int main()
{
    printf("DD:%s\n", __DATE__);
    printf("TT:%s", __TIME__);
    getch();
    return 0;
}
