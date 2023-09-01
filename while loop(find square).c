main()
{int num,sq;
char another='y';
while(another=='y')
{
    printf("enter a number");
    scanf("%d",&num);
    sq=num*num;
    printf("square of number is:%d\n",sq);
    printf("enter another number y/n\n");
    scanf(" %c",&another);
}
}
