main()
{int p,t,count;
float si,r;
count=1;
while(count<=3)
{printf("enter the values p,r,t");
scanf("%d %f %d",&p,&r,&t);
si=p*r*t/100;
printf("%f",si);
count=count++;
}
}
