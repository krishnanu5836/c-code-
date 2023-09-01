main()
{
int sq,num;
char another;
do
{
printf("enter a number");
scanf("%d",&num);
sq=num*num;
printf("square of number %d",sq);
printf("\nEnter another number y/n");
scanf(" %c",&another);
}while(another=='y');
}
