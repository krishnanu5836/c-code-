main()
{
    int x,y,z,c;
    printf("enter the value of x");
    scanf("%d",&x);
    printf("enter the value of y");
    scanf("%d",&y);
    printf("enter the value of z");
    scanf("%d",&z);
    printf("before changing the values is \nx=%d,y=%d,z=%d\n",x,y,z);
    c=fun(&x,&y,&z);
    printf("after changing\nx=%d,y=%d,z=%d",x,y,z);
}
fun(int *x,int *y,int *z)
{
    int t;
     t=*z;
     *z=*y;
     *y=*x;

}
