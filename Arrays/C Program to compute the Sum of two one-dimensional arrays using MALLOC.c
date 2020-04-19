/*This C Program computes the sum of two one-dimensional arrays using malloc. The program allocates 2 one-dimentional arrays using malloc() call and then does the addition and stores the result into 3rd array. The 3rd array is also defined using malloc() call.*/

/*
 * C program to find the sum of two one-dimensional arrays using
 * Dynamic Memory Allocation
 */


#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

void main()
{
	int i, n;
	int *a, *b, *c;
	printf("How many Elements in each array...\n");
	scanf("%d", &n);
	a = (int *)malloc(n * sizeof(int));
	b = (int *)malloc(n * sizeof(int));
	c = (int *)malloc(n * sizeof(int));
	printf("Enter Elements of First List\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", a + i);
	}
	printf("Enter Elements of Second List\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", b + i);
	}
	for (i = 0; i < n; i++)
	{
		*(c + i) = *(a + i) + *(b + i);
	}
	printf("Resultant List is\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", *(c + i));
	}
}


/*
OUTPUT:

How many Elements in each array...
5
Enter Elements of First List
23
45
67
12
90
Enter Elements of Second List
87
56
90
45
10
Resultant List is
110
101
157
57
100

*/