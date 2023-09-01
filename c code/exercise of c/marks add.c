main()
{float eng,hindi,math,science,cs,total,average,percentage;
printf("enter marks of five subjects");
scanf("%f %f %f %f %f",&eng,&hindi,&math,&science,&cs);
total=eng+hindi+math+science+cs;
average=total/5.0;
percentage=total/500.0*100;
printf("total marks average percentage is :%f %f %f",total,average,percentage);
}
