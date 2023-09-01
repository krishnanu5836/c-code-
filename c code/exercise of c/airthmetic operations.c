main()
{
    int sum,difference,product,a,b;
    float reminder;
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);
    sum=a+b;
    difference=a-b;
    product=a*b;
    reminder=a/b;

    printf("result of all arithmetic operations are: %d %d %d %f", sum,difference,product,reminder);
}

