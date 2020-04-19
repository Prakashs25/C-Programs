/* The program is used to swap the elements of a given array and swapping is done using pointers. */

/* C program to accept an array of 10 elements and swap 3rd element with 4th element using pointers and display the results. */


#include <stdio.h>
void swap34(float *ptr1, float *ptr2);

void main()
{
	float x[10];
	int i, n;
	printf("\nHow many Elements ? ");
	scanf("%d", &n);
	printf("\nEnter elements one by one\n");
	for (i = 0; i < n; i++)
		{
			scanf("%f", x + i);
		}
	/*  Function call:Interchanging 3rd element by 4th */
	swap34(x + 2, x + 3);
	printf("\nResultant Array : \n");
	for (i = 0; i < n; i++)
		{
			printf("X[%d] = %f\n", i, x[i]);
		}
}
/*  Function to swap the 3rd element with the 4th element in the array */
void swap34(float *ptr1, float *ptr2 )
{
	float temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

/*
OUTPUT:

How many Elements ?
4
Enter Elements one by one
23
67
45
15

Resultant Array...
X[0] = 23.000000
X[1] = 67.000000
X[2] = 15.000000
X[3] = 45.000000