main()
{int num,i;
printf("enter a number");
scanf("%d",&num);
i=2;
while(i<=num-1)
{if(num%i==0)
{printf("not a prime number");
break;
}
i=i+1;
}
if(num<=i)
    printf("prime number");
}
