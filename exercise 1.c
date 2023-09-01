main()
{int cost_price,selling_price,profit,loss;
printf("enter the cost price and selling price");
scanf("%d %d",&cost_price,&selling_price);
if(selling_price>cost_price)
{
 profit=selling_price-cost_price;
 printf("seller has made profit is %d",profit);
}
else
 {
     loss=cost_price-selling_price;
     printf("seller has made loss is %d",loss);
}
}
