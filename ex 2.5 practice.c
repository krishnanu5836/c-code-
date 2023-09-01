main()
{int age;
char sex,ms;
printf("enter the martial status,gender,age");
scanf("%c %c %d",&ms,&sex,&age);
if((ms=="m")||(ms=="u"&&sex=="m"&&age > 30)||(ms=="u"&&sex=="f"&&age > 25))
   printf("driver is insured");
    else
    printf("not insured");
}
