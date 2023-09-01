main()
{int qty,discount;
float price,total;
printf("enter the quantity and price per item");
scanf("%d %f",&qty,&price);
if(qty>=1000)
discount=10;
total=( qty * price ) - ( qty * price* discount / 100 ) ;
printf( "Total expenses = Rs. %f", total ) ;
}
