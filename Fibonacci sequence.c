main()
{
    int i,a=1,b=1,j,k,g;
    printf("enter the elements");
    scanf("%d",&i);
    printf("\n%d %d",a,b);
    for(j=2;j<=i;j++){
        k=a+b;
    printf(" %d",k);
         a=b;
         b=k;

    }
}
