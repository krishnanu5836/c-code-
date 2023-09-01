main()
{
    int i,m[2],avg,sum=0;
     for(i=0;i<=1;i++){
    printf("enter marks");
    scanf("%d",&m[i]);
     }
     for(i=0;i<=1;i++)
    sum=sum+m[i];
    avg=sum/1;
    printf ( "Average marks = %d\n", avg ) ;
}

