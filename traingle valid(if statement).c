main()
{int angle1,angle2,angle3;
printf("enter the first angle,second angle,third angle");
scanf("%d %d %d",&angle1,&angle2,&angle3);
if(angle1+angle2+angle3==180)
    printf("triangle is valid");
else
    printf("triangle is not valid");
}
