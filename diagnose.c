#include<stdio.h>
int main()
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
        printf("are in risk.Now you are on the boundary of high pressure.\nTake\n");
        printf("a balance diet,physical exercise and reduce your current weight.\n");
    }
    else if((p1>140&&p1<159)&&(p2>90&&p2<99))
        printf("It is hypertension(high blood pressure)-Stage 1.\n");
    else if((p1>160&&p1<180)&&(p2>99&&p2<110))
        printf("It is hypertension(high blood pressure)-Stage 2.\n");
    else if(p1>180&&p2>110)
        printf("It is hypertensive(Emergency care need).You should go your nearest hospital\n");
}
