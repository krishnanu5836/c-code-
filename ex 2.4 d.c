main()
{int h,ts,hs,tss,grade,ccs;
float cc;
printf("enter the hardness of steel,carbon,tensile strength");
scanf("%d %f %d",&h,&cc,&ts);
if(h>50)
hs=1;
if(cc<0.7)
   ccs=1;
if(ts>5600)
   tss=1;
if(hs==1&ccs==1&tss==1)
    grade=10;
else if(hs==1&ccs==1&tss==0)
    grade=9;
else if(hs==0&ccs==1&tss==1)
    grade=8;
else if(hs==1&ccs==0&tss==1)
    grade=7;
else if(hs==1||ccs==1||tss==1)
    grade=6;
else
    grade=5;
 printf("The grade of steel is: %d", grade);
}
