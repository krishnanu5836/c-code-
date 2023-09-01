main()
{int s1,s2,s3,sides;
printf("enter the triangle first side\n");
scanf("%d",&s1);
printf("second side\n");
scanf("%d",&s2);
printf("third side");
scanf("%d",&s3);
sides=s1+s2;
if(sides>s3)
    printf("triangle is valid\n");
else
    printf("triangle is not valid\n");
printf("sum of two sides:%d\n",sides);
}
