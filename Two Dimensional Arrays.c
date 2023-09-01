main( )
{
 int stud[2][2] ;
 int i, j ;
 for ( i = 0 ; i < 2 ; i++ )
 {
 printf ( "\n Enter roll no. and marks" ) ;
 scanf ( "%d %d", &stud[i][0], &stud[i][1] ) ;
 }
 for ( i = 0 ; i <2 ; i++ )
 printf ( "\n%d %d", stud[i][0],stud[i][1] ) ;
}
