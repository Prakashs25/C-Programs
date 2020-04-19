/*

 * C Program to find the Biggest Number in an Array of Numbers using
 * Recursion

*/

#include <stdio.h>

int large(int[], int, int);

int main()
{
	int size;
	int largest;
	int list[20];
	int i;
	printf("Enter size of the list:");
	scanf("%d", &size);
	printf("Printing the list:\n");
	for (i = 0; i < size ; i++)
		{
			list[i] = rand() % size;
			printf("%d\t", list[i]);
		}
	if (size == 0)
		{
			printf("Empty list\n");
		}
	else
		{
			largest = list[0];
			largest = large(list, size - 1, largest);
			printf("\nThe largest number in the list is: %d\n", largest);
		}
}
int large(int list[], int size, int largest)
{
	if (size == 1)
		return largest;
	if (size > -1)
		{
			if (list[size] > largest)
				{
					largest = list[size];
				}
			return(largest = large(list, size - 1, largest));
		}
	else
		{
			return largest;
		}
}

/*
OUTPUT:

Enter size of the list:8
Printing the list:
7   6   1   3   1   7   2   4
The largest number in the list is: 7

*/