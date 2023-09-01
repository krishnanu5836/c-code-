#define p 3
#define area(r)(p*r*r)
main()
{
    int r,g=6;
    float f,ok(r);
    printf("enter r");
    scanf("%d",&r);
    printf("using macro area=%f\n",area(r));
    f=ok(r);
    printf("using calling function area=%f\n",f);
}
float ok(r)
{
    float k;
    k=3.14*r*r;
    printf("%d",p);
    return k;
}
