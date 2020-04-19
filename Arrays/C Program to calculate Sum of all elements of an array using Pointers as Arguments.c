/*This C Program calculate sum of all elements of an array using pointers as arguments. The program calls a function to add the addition and passes the array argument as a pointer.*/

/* C program to find the sum of all elements of an array using pointers as arguments. */

#include <stdio.h>

void main()
{
	static int array[5] = { 200, 400, 600, 800, 1000 };
	int sum;
	int addnum(int *ptr);
	sum = addnum(array);
	printf("Sum of all array elements = %5d\n", sum);
}
int addnum(int *ptr)
{
	int index, total = 0;
	for (index = 0; index < 5; index++)
		{
			total += *(ptr + index);
		}
	return(total);
}

/*
OUTPUT

Sum of all array elements =  3000
*/