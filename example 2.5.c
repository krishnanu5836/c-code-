main()
{
    int age;
char ms,sex;
printf("enter the marital status , age and sex\n");
scanf("%f %d %f",&ms,&age,&sex);
if(ms=="married")
    printf("driver is insured");
else if((ms=="unmarried")&&(age>30)&&(sex=="male"))
    printf("driver is insured");
else if((ms=="unmarried")&&(age>25)&&(sex="female"))
    printf("driver is insured");
}
