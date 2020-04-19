ḥ/*This C Program finds second largest & smallest elements in an array. The program sorts the array in an descending order. Then it finds the second largest and smallest element in an array and also find the average of an array element. Later it checks if the resultant average number is present in a given array. If found, display appropriate message.*/

/*
 * C program to accept a list of data items and find the second largest
 * and smallest elements in it. Compute the average of both and search
 * for the average value if it is present in the array.
 * Display appropriate message on successful search.
 */


#include <stdio.h>

void main ()
{
	int number[30];
	int i, j, a, n, counter, average;
	printf("Enter the value of N\n");
	scanf("%d", &n);
	printf("Enter the numbers \n");
	for (i = 0; i < n; ++i)
		scanf("%d", &number[i]);
	for (i = 0; i < n; ++i)
		{
			for (j = i + 1; j < n; ++j)
				{
					if (number[i] < number[j])
						{
							a = number[i];
							number[i] = number[j];
							number[j] = a;
						}
				}
		}
	printf("The numbers arranged in descending order are given below \n");
	for (i = 0; i < n; ++i)
		{
			printf("%d\n", number[i]);
		}
	printf("The 2nd largest number is  = %d\n", number[1]);
	printf("The 2nd smallest number is = %d\n", number[n - 2]);
	average = (number[1] + number[n - 2]) / 2;
	counter = 0;
	for (i = 0; i < n; ++i)
		{
			if (average == number[i])
				{
					++counter;
				}
		}
	if (counter == 0 )
		printf("The average of %d  and %d is = %d is not in the array \n",
			   number[1], number[n - 2], average);
	else
		printf("The average of %d  and %d in array is %d in numbers \n",
			   number[1], number[n - 2], counter);
}

/*
OUTPUT:

Enter the value of N
4
Enter the numbers
450
340
120
670
The numbers arranged in descending order are given below
670
450
340
120
The 2nd largest number is  = 450
The 2nd smallest number is = 340
The average of 450  and 340 is = 395 is not in the array

*/