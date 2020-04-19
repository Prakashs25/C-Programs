/* C Program to Print the Number of Odd & Even Numbers in an Array */

#include <stdio.h>

void main()
{
	int array[100], i, num;
	printf("Enter the size of an array \n");
	scanf("%d", &num);
	printf("Enter the elements of the array \n");
	for (i = 0; i < num; i++)
		{
			scanf("%d", &array[i]);
		}
	printf("Even numbers in the array are - ");
	for (i = 0; i < num; i++)
		{
			if (array[i] % 2 == 0)
				{
					printf("%d \t", array[i]);
				}
		}
	printf("\n Odd numbers in the array are -");
	for (i = 0; i < num; i++)
		{
			if (array[i] % 2 != 0)
				{
					printf("%d \t", array[i]);
				}
		}
}

/*
OUTPUT:


Enter the size of an array
6
Enter the elements of the array
12
19
45
69
98
23
Even numbers in the array are - 12	 98
Odd numbers in the array are - 19	 45	 69	 23

*/