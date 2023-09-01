#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{int i;
float x,k,d,p,r=0;
printf("enter the values of x");
scanf("%f",&x);
d=(x-1)/x;
for(i=2;i<=7;i++)
    p = pow(d,k);
k=d/2;
r=r+k;
r=d+r;
printf("Result:%f\n",r);
}

