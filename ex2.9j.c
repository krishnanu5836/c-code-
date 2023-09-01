int main()
{
	int mark_in_A, mark_in_B;
	printf("enter the mark in subject A : B ");
	scanf("%d:%d", &mark_in_A,&mark_in_B);
	if (mark_in_A >= 55 && mark_in_B >= 45)
	{
		printf("STUDENT QUALIFY FOR DEEGRY ");
	}
	else if (mark_in_A >= 45 && mark_in_B >= 55)
	{
		printf("STUDENT QUALIFY FOR DEEGRY ");
	}
	else if (mark_in_A >= 65 && mark_in_B < 45)
	{
		printf("student reapear to qualify exam B");
	}
	else
		printf("student decleared fail");
		return 0;
}
