main()
{
    int i,j,k,v;
    float ok(float m),m,a,g;
    printf("enter the marks of three subjects\n");
    scanf("%d %d %d",&i,&j,&k);
    m=fun(i,j,k);
    a=ok(m);
    printf("average of marks is=%f\n",a);
    printf("percentage is=%f%%\n",a);
}
fun(int i,int j,int k)
{
    int g;
    g=i+j+k;
    return g;
}
float ok(float m)
{
float z,g;
z=m/3.0;
g=m/3.00*100;
return z;
return g;
}

