int main()
{
    float p,n,r,q,a;
    int i;
    //for 10 sets we have to create a for loop
    for(i=1;i<=10;i++)
    {
        printf("Enter Principle");
        scanf("%f",&p);
        printf("Enter Rate");
        scanf("%f",&r);
        printf("Enter Time");
        scanf("%f",&n);
        printf("Enter Compound Interest");
        scanf("%f",&q);

        //formula
        a = p*(pow((1+r/q),n*q));
        printf("Amount: %.2f\n\n",a);
    }
}
