main()
{int length,breadth,area,perimeter;
printf("enter the length,breadth");
scanf("%d %d",&length,&breadth);
perimeter=2*(length+breadth);
area=length*breadth;
printf("area of rectangle:%d\n",area);
printf("perimeter of rectangle:%d\n",perimeter);
if(area>perimeter)
    printf("area is greater than perimeter");
else
    printf("perimeter is greater than area");
}
