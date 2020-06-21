void account()
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
    insert1( &ne,&se,&b,&d, name,sex,Bg,DOB,age,pw);
    printf("                            Mobile Doctor\n\n\n");
    printf("  Your account has created successfully.\n  Press 3 for home page\n  ");
    int h;
    scanf("%d",&h);
    system("cls");
    if(h==3)
        home();
}
void insert1(struct node**top1,struct node**top2,struct node**top3,struct node**top4,char nam[],char sx[],char B[],char Db[],int a,int p)
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
