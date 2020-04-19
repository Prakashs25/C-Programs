/* C program to accept N numbers and arrange them in an ascending order */

#include <stdio.h>

void main()
{
	int i, j, a, n, number[30];
	printf("Enter the value of N \n");
	scanf("%d", &n);
	printf("Enter the numbers \n");
	for (i = 0; i < n; ++i)
		scanf("%d", &number[i]);
	for (i = 0; i < n; ++i)
		{
			for (j = i + 1; j < n; ++j)
				{
					if (number[i] > number[j])
						{
							a =  number[i];
							number[i] = number[j];
							number[j] = a;
						}
				}
		}
	printf("The numbers arranged in ascending order are given below \n");
	for (i = 0; i < n; ++i)
		printf("%d\n", number[i]);
}

/*
OUTPUT:

Enter the value of N
6
Enter the numbers
3
78
90
456
780
200
The numbers arranged in ascending order are given below
3
78
90
200
456
780

*/