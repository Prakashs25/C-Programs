/*This C Program calculates the largest of two numbers in a given Array. First it accepts an array, then compares the elements and finds which is the largest two element in a given array.*/

/*
 * C program to read in four integer numbers into an array and find the
 * average of largest two of the given numbers without sorting the array.
 * The program should output the given four numbers and the average.
 */


#include <stdio.h>
#define MAX 4

void main()
{
	int array[MAX], i, largest1, largest2, temp;
	printf("Enter %d integer numbers \n", MAX);
	for (i = 0; i < MAX; i++)
		{
			scanf("%d", &array[i]);
		}
	printf("Input interger are \n");
	for (i = 0; i < MAX; i++)
		{
			printf("%5d", array[i]);
		}
	printf("\n");
	/*  assume first element of array is the first larges t*/
	largest1 = array[0];
	/*  assume first element of array is the second largest */
	largest2 = array[1];
	if (largest1 < largest2)
		{
			temp = largest1;
			largest1 = largest2;
			largest2 = temp;
		}
	for (i = 2; i < 4;	i++)
		{
			if (array[i] >= largest1)
				{
					largest2 = largest1;
					largest1 = array[i];
				}
			else if (array[i] > largest2)
				{
					largest2 = array[i];
				}
		}
	printf("n%d is the first largest \n", largest1);
	printf("%d is the second largest \n", largest2);
	printf("nAverage of %d and %d = %d \n", largest1, largest2,
		   (largest1 + largest2) / 2);
}

/*
OUTPUT:

Enter 4 integer numbers
80
23
79
58
Input interger are
80   23   79   58

80 is the first largest
79 is the second largest

Average of 80 and 79 = 79

*/