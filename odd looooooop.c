main( )
{
 char another;
 int num;
 do
 {
  printf("enter number");
  scanf("%d",&num);
  printf("square of %d is %d", num, num * num) ;
  printf("\nWant to enter another number y/n ") ;
  scanf("%c",&another);
 } while(another == 'y');
}
