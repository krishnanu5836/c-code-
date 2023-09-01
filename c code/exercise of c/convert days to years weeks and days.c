main()
{int days,years,weeks;
printf("enter days");
scanf("%f",&days);
years=days/365;
weeks=(days-(years*365))/7;
days = days - ((years * 365) + (weeks * 7));
printf("convert days to years weeks and days:%d %d %d",years,weeks,days);
}
