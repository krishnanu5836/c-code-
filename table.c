int main()
{
    int n, i, tab;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("\nTable of %d is:\n", n);
    for(i=1; i<=10; i++){

        tab = n*i;
        printf("%d * %2d = %2d\n", n, i, tab);
    }
}
