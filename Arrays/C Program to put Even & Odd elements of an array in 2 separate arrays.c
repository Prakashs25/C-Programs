/*This C Program puts even & odd elements of an array in 2 separate arrays. The program first finds the odd and even elements of the array. Then the odd elements of an array is stored in one array and even elements of an array is stored in another array.*/

/*
 * C Program to accept N integer number and store them in an array AR.
 * The odd elements in the AR are copied into OAR and other elements
 * are copied into EAR. Display the contents of OAR and EAR.
 */

#include <stdio.h>

void main()
{
	long int ARR[10], OAR[10], EAR[10];
	int i, j = 0, k = 0, n;
	printf("Enter the size of array AR \n");
	scanf("%d", &n);
	printf("Enter the elements of the array \n");
	for (i = 0; i < n; i++)
		{
			scanf("%ld", &ARR[i]);
			fflush(stdin);
		}
	/*  Copy odd and even elements into their respective arrays */
	for (i = 0; i < n; i++)
		{
			if (ARR[i] % 2 == 0)
				{
					EAR[j] = ARR[i];
					j++;
				}
			else
				{
					OAR[k] = ARR[i];
					k++;
				}
		}
	printf("The elements of OAR are \n");
	for (i = 0; i < j; i++)
		{
			printf("%ld\n", OAR[i]);
		}
	printf("The elements of EAR are \n");
	for (i = 0; i < k; i++)
		{
			printf("%ld\n", EAR[i]);
		}
}

/*
OUTPUT:

Enter the size of array AR
6
Enter the elements of the array
34
56
78
90
12
39
The elements of OAR are
39
1
32768
11542516
11210377
The elements of EAR are
34

*/