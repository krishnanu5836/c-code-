main()
{int working_hours,ot,oth,hours;
printf("enter the working hours of employee\n");
scanf("%d",&working_hours);

if(working_hours>40)
{
    oth=working_hours-40;
    ot=oth*12;
    printf("overtime hours of employees and overtime money are:%d %d\n",oth,ot);

}

else
{
    printf("employee not worked more than 40 hours");
}
}


