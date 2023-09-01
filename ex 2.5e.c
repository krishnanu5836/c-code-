main()
{int days;
printf("enter the number of days\n");
scanf("%d",&days);
if(days<=5)
printf("the fine is 50 paise\n");
else if(days>=6&days<=10)
    printf("the fine is rs=1\n");
else if(days>=10&days<=30)
    printf("the fine is rs=5\n");
else
    printf("your membership will be cancelled");
}
