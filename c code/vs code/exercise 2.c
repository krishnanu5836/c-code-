main()
{float m,km,cm,f,inch;
printf("enter the distance between");
scanf("%f",&km);
m=km*1000;
cm=km*100000;
f=km*3280.84;
inch=km*39370;
printf("distance in feet :%f",f);
printf("distance in cm :%f",cm);
printf("distance in inch:%f",inch);
printf("distance in m:%f",m);
}
