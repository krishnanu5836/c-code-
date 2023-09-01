main()
{
    int yos,sal;
    char g,qual;
printf("enter the gender,year of service,qualification");
scanf("%c %d %c",&g,&yos,&qual);
if(g=="m"&&yos>=10&&qual=="pg")
    sal=15000;
else if((g=="m"&&yos>=10&&qual=="g")||(g=="m"&&yos<10&&qual=="pg"))
    sal=10000;
else if ( g == 'm' && yos < 10 && qual == "g" )
 sal = 7000 ;
 else if ( g == 'f' && yos >= 10 && qual == "pg" )
 sal = 12000 ;
 else if ( g == 'f' && yos >= 10 && qual == "g" )
 sal = 9000 ;
 else if ( g == 'f' && yos < 10 && qual == "pg" )
 sal = 10000 ;
 else if ( g == 'f' && yos < 10 && qual == "g" )
 sal = 6000 ;
printf("\nsalary of employee = %d",sal);
}
