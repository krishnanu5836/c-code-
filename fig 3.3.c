main()
{int p,n,count;
float r,si;
for(count=1;count<=3;count++)
printf ( "Enter values of p, n, and r " ) ;
scanf ( "%d %d %f", &p, &n, &r ) ;
si = p * n * r / 100 ;
printf ( "%f", si ) ;
}
