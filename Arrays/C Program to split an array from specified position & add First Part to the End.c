/*This C Program splits an array from specified position & add first part to the end. This program first accepts an array. Then splits an array according to the user specification. Now it becomes 2 parts & then add first part of an array at the end of a second part.*/

/*
 * C program to read an array, accept a key & split the array.
 * Add the first half to the end of second half.
*/

#include <stdio.h>

void main ()
{
	int number[30];
	int i, n, a, j;
	printf("Enter the value of n\n");
	scanf("%d", &n);
	printf("enter the numbers\n");
	for (i = 0; i < n; ++i)
		scanf("%d", &number[i]);
	printf("Enter the position of the element to split the array \n");
	scanf("%d", &a);
	for (i = 0; i < a; ++i)
		{
			number[n] = number[0];
			for (j = 0; j < n; ++j)
				{
					number[j] = number[j + 1];
				}
		}
	printf("The resultant array is\n");
	for (i = 0; i < n; ++i)
		{
			printf("%d\n", number[i]);
		}
}

/*
OUTPUT:

Enter the value of n
4
enter the numbers
3
678
345
876
Enter the position of the element to split the array
3
The resultant array is
876
3
678
345

*/