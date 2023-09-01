main()
{int men,women,litmen,litwomen,lit,illitwomen,illitmen,total=80000;
men=52/100*80000;
lit=48/100*80000;
litmen=35/100*80000;
litwomen=lit-litmen;
illitwomen=litwomen-lit;
illitmen=men-litmen;
printf("Hence the total illiterate men of the town is %d\n", men-litmen);
printf("Hence the total illiterate women is %d\n", illitwomen);
}
