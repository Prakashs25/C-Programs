/* C Program to Swap two Integers without using Temporary Variables and Bitwise Operations */

#include <stdio.h>

// Function Prototype
void swap(int *, int *);

void main()
{
	int x, y;
	printf("Enter 2 nos: \n");
	scanf("%d %d", &x, &y);
	printf("\nYou have entered x = %d y = %d \n", x, y);
	swap(&x, &y); // passing the 2 nos to the swap function
}

// function to swap the two numbers
void swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	printf("Swapped . . . .\n"); // printing the swapped numbers
	printf("x = %d y = %d\n", *a, *b);
}