#define a 12
#define b 15
main()
{
    int s;
    #if(a>b)
        s=a+b;
    printf("sun=%d",s);
    #elif(a==b)
    s=a-b;
    printf("%d",s);
    #endif(a<b)
        #ifdef a
    printf("hello");
    #endif // a
    printf("ok");

}
