/* String  - Program that accepts a positive number having a decimal point and prints out the number of digits to the right and left of decimal point */

#include<stdio.h>
#include<conio.h>

void main()
{
	char  n[20] ;
	int  i, j ;
	clrscr();
	printf("\nEnter a positive number having a decimal point : ");
	gets(n);
	for(i=0 ; n[i]!='\0' ; i++) ;
	for(j=0 ; n[j]!='.' ; j++) ;
	printf("\nNumber of digits to the left of decimal point is : %d \n", j) ;
	printf("\nNumber of digits to the right of decimal point is : %d", i-j-1) ;
	getch();
}


/*
OUTPUT:

Enter a positive number having a decimal point: 2451.87
Number of digits to the left of decimal point is 4
Number of digits to the right of decimal point is 2

*/
