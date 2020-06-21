/*Type:A program to treat disease.
Maker:Nur-E-Alam,student of BSMRSTU,department of CSE.*/

#include<stdio.h>
int main()
{
    /*option choose*/
    int x;
    printf("Choose your disease or problem what are you suffering from:\n");
    printf("1.Fever\n2.Diarrhea\n3.Diabetic\n4.Pressure\n");
    printf("Select(1/2/3/4):");
    scanf("%d",&x);
    printf("\n\n");
    /*for Fever*/
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

        printf("Last %d days your average body temperature was : %f\n\n",d,a);

        if(a<=100.4&&d<=3)
            printf("Don't worry,it is a low grade fever.It's no need to take medicine.\nYou can take 'PARASITAMAL',if you feel headache.");
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
        }
    }

    /*for Diarrhea*/
    if(x==2)
    {
        printf("You have chosen Diarrhea.\n");
    }
    /*for  Diabetic*/
    if(x==3)
    {
        printf("You have chosen Diabetic.\n\n");
        float bd,ad;
        int age;
        printf("Please enter your age : \n\n");
        scanf("%d",&age);
        printf("Input the \n\n");
        scanf("%f",&bd);
    }
    /*for Pressure*/
    if(x==4)
    {
        printf("You have chosen Pressure.\n\n");
        int p1,p2;
        printf("Input your blood pressure,that you have measured-\n\n");
        printf("Systolic Pressure(upper#):");
        scanf("%d",&p1);
        printf("mm Hg\n");
        printf("Diastolic Pressure(lower#):");
        scanf("%d",&p2);
        printf("mm Hg\n\n");

        if(p1<=120&&p2<=80)
            printf("Don't worry,its normal.\n");
        if((p1>120&&p1<190)&&(p2>80&&p2<89))
            printf("It is not high.Almost normal(prehypertension).\n");
    }
}
