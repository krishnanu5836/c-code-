main()
{int m1,m2,m3,m4,m5,per;
printf("enter marks of five subjects");
scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
per=m1+m2+m3+m4+m5/500*100;
if(per>=60)
    printf("first division");
else if(per>=50)
    printf("second division");
else if(per>=40)
    printf("second division");
else
    printf("fail");


}
