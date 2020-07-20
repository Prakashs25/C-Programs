/* C Program to Check if nth Bit in a 32-bit Integer is Set or not */

#include <stdio.h>

/* global variables */
int result, position;
/* function prototype */
int n_bit_position(int x, int position);

void main()
{
	unsigned int number;
	printf("Enter the unsigned integer:\n");
	scanf("%d", &number);
	printf("enter position\n");
	scanf("%d", &position);
	n_bit_position(i, position);
	if (result & 1)
		printf("YES\n");
	else
		printf("NO\n");
}

/* function to check whether the position is set to 1 or not */
int n_bit_position(int number, int position)
{
	result = (number >> (position));
}