main()
{float l,b,r,ar,pr,ac,pc;
printf("enter the length and breadth of rectangle");
scanf("%f %f",&l,&b);
printf("enter the radius of the circle");
scanf("%f",&r);
ar=l*b;
pr=2*(l+b);
ac=3.14*r*r;
pc=2*3.14*r;
printf("area of rectangle:%f",ar);
printf("perimeter of rectangle:%f",pr);
printf("area of circle:%f",ac);
printf("perimeter of circle:%f ",pc);
}
