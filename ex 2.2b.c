main()
{char ascii;
printf("enter a character");
scanf("%c",&ascii);
if(ascii>=65&ascii<=90)
printf("capital letter");
else if(ascii>=97&ascii<=122)
    printf("small letter");
else if(ascii>=48&ascii<=57)
    printf("digit");
}
