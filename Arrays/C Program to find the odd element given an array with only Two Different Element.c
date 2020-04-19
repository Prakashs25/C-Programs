/* C Program to Find the Odd Element given an Array with only two Different Element */

#include <stdio.h>

void printodd(int array[], int size)
{
	int xor2 = array[0]; /* Will hold XOR of two odd occurring elements */
	int set;
	int i;
	int n = size - 2;
	int x = 0, y = 0;
	/* The xor will basically be xor of two odd occurring elements */
	for (i = 1; i < size; i++)
		xor2 = xor2 ^ array[i];
	/* Get one set rightmost bit in the xor2. */
	set = xor2 & ~(xor2 - 1);
	/* Now divide elements in two sets: */
	for (i = 0; i < size; i++)
		{
			/* XOR of first set is finally going to hold one odd occurring number x */
			if (array[i] & set)
				x = x ^ array[i];
			/* XOR of second set is finally going to hold the other odd occurring number y */
			else
				y = y ^ array[i];
		}
	printf("\n The ODD elements are %d & %d ", x, y);
}

int main()
{
	int array[] = {10, 3, 2, 10, 2, 8, 8, 7};
	int arr_size = sizeof(array) / sizeof(array[0]);
	printodd(array, arr_size);
	getchar();
	return 0;
}

/*
OUTPUT:

The ODD elements are 7 & 3

 */