main()
{float dearness_allowance,basic_salary,house_rent,gross_salary;
printf("enter the basic salary");
scanf("%f",&basic_salary);
dearness_allowance = 0.4*basic_salary;
house_rent = 0.2*basic_salary;
gross_salary = basic_salary + dearness_allowance  + house_rent;
printf("%f",gross_salary);
}
