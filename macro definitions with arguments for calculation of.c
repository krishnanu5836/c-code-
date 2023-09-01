#define p 3.14
#define ar(x)(p*x*x)
#define prt(a,b,c)(a+b+c)
#define prs(s)(4*s)
#define prc(x)(2*p*x)
main()
{
int c,f,a,b,d,k,s,j,g,r;
        printf("1. Area of circle\n");
        printf("2. Perimeter of Triangle\n");
        printf("3. Perimeter of Square\n");
        printf("4. Perimeter of Circle\n");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            printf("enter radius of circle");
            scanf("%d",&r);
            f=ar(r);
            printf("area of circle=%d\n",f);
            break;
        case 2:
            printf("enter sides of three sides of triangle");
            scanf("%d %d %d",&a,&b,&d);
            k=prt(a,b,d);
            printf("perimeter of triangle is=%d",k);
            break;
        case 3:
            printf("enter side of square");
            scanf("%d",&s);
            j=prs(s);
            printf("perimeter of square is=%d\n",j);
            break;
        case 4:
            printf("enter radius");
            scanf("%d",&r);
            g=prc(r);
            printf("perimeter of circle is=%d",g);
            break;

        }
}
