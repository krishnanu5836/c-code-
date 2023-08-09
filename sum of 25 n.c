main()
{
    int n,i,k;
printf("enter sum of digits\n");
scanf("%d",&n);
k=fun(n);
printf("%d",k);
}
fun(n)
int n;
{
    if(n==1)
        return n;
    n=n+fun(n-1);
    return n;
}
