int main()

{

    float x,n,series_value(x,n);
    printf("Enter the value of x: ");
    scanf("%f",&x);
    printf("\nEnter the value of n: ");
    scanf("%f",&n);
    series_value=series(x,n);
    printf("\nValue of series sin (%.2f) is: %f\n",x,series_value);
    return 0;
}

float series(float x,float n)

{

    int i,sum=0,sign=-1;
    int j,fact=1,p=1;
    for (i=1; i<=(2*n)-1; i+=2)
    {
        for (j=1; j<=i; j++)
        {
        p=p*x;
        fact=fact*j;
        }
        sign=-1*sign;
        sum=sum + sign*p/fact;
    }
    return (sum);
}
