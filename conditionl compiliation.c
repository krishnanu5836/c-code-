#define a 45
#define b 78
main()
{
    #if(a>b)
    r=a+b;
    printf("%d",r);
    #elif(a==b)
    printf("k");
    #endif(a<b)
    printf("done\n");
    #ifdef a
    printf("process\n");
    #endif
}

