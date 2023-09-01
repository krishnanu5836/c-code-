main()
{int age;
char health,lives,gender;
printf("enter health,gender,lives,age");
scanf("%c %c %c %d",&health,&gender,&lives,&age);
if(health=='e'&gender=='m'&lives=='c'&age>=25&age<=35)
printf("premium is Rs 4 per thousand and his policy amount cannot exceed Rs2 lakhs");
else if(gender=='f')
    printf("premium is Rs 3 per thousand and her policy amount cannot exceed Rs 1 lakh");
else if(health=='p'&gender=='m'&age>=25&age<=35&lives=='v')
    printf("premium is Rs 6 per thousand and his policy cannot exceed Rs 10000");
else
    printf("In all other cases the person is not insured");
}

