/*Program to find the maximum no. in an array.*/

#include<stdio.h>
void main()
{
	int a[5],max,i;
	printf("Enter element for the array: ");
	for(i=0; i<5; i++)
		scanf("%d",&a[i]);
	max=a[0];
	for(i=1; i<5; i++)
		{
			if(max<a[i])
				max=a[i];
		}
	printf("\nMaximum no= %d",max);
}

/*
OUTPUT:

enter elements for array: 5
4
7
1
2
maximum no= 7

*/