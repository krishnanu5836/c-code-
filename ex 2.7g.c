main()
{int s1,s2,s3,sides;
printf("enter the first side of triangle\n");
scanf("%d",&s1);
printf("second side\n");
scanf("%d",&s2);
printf("third side\n");
scanf("%d",&s3);
if(s1==s2&s2==s3&s3==s1)
    printf("equilateral triangle");
else if(s1==s2||s2==s3||s1==s3)
    printf("isosceles triangle");
else
    printf("scalene triangle");

}

