#define upper(x)(x>='A'&&x<='Z')
#define lower(x)(x >= 'a' && x <= 'z' )
int main()
{
    char ch;
    printf("enter value");
    scanf("%c",&ch);
    if(upper(ch))
    printf("%c=upper case\n",ch);
    else if(lower(ch))
        printf("%c=lower case\n",ch);
    else
        printf("entered number");


}


