//sj//
main()
{int ram,shyam,ajay;
printf("enter ram age,shyam age,ajay age");
scanf("%d %d %d",&ram,&shyam,&ajay);
if(ram>shyam&ram>ajay)
    printf("ram is youngest");
else if(shyam>ram&shyam>ajay)
    printf("shyam is youngest");
else if(ajay>ram&ajay>shyam)
    printf("ajay is youngest");
}
