main()
{
    int base, exponent,b=1;
    printf("enter the base and exponent\n");
    scanf("%d %d",&base,&exponent);
    while(exponent)
    {
        b=b*base;
        exponent--;
    }
        printf("%d",b);
}
