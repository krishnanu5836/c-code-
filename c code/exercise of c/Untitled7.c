main()
{int n,num1,num2,num3,num4,num5;
printf("enter the five digit number");
scanf("%d",&n);
num1=n%10;
num2=n%100;
num3=n%1000;
num4=n%10000;
num5=n%100000;
printf("sum of the five digit number:%d %d %d %d %d",num1,num2,num3,num4,num5);
}
