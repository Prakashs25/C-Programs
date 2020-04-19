/* Linear Search - Program to demonstrate sequential search or linear search */

#include  <stdio.h>
#include  <conio.h>

int  sequential(int  x[ ], int  n, int  key) ;

void main()
{
	int  i, n, x[20], key ;
	clrscr() ;
	printf("Enter the number of elements: ") ;
	scanf("%d", &n) ;
	printf("Enter the elements:\n") ;
	for(i=0 ; i<n ; i++)
		scanf("%d", &x[i]) ;
	printf("Enter the element to be searched: ") ;
	scanf("%d",  &key) ;
	i=sequential(x,n,key) ;
	if(i==-1)
		printf("%d not found.", key) ;
	else
		printf("%d found at position %d.", key, i) ;
	getch() ;
}

int  sequential(int  x[ ], int  n, int  key)
{
	int  i=0 ;
	while(i<n)
		if(key==x[i])
			return i ;
		else
			i++ ;
	return  -1 ;
}

/*
Output1:

Enter the number of elements: 4
Enter the elements:
1 5 2 6
Enter the element to be searched: 4
4 not found.

Output2:

Enter the number of elements: 4
Enter the elements:
1 6 2 4
Enter the element to be searched: 6
6 found at position 1.


*/