/* C Program to Find the Median of the Elements after Merging these 2 Sorted Arrays with Same Size */

#include <stdio.h>

int getMedian(int array1[], int array2[], int n)
{
	int i = 0;  /* Current index of i/p array array1[] */
	int j = 0; /* Current index of i/p array array2[] */
	int count;
	int m1 = -1, m2 = -1;
	for (count = 0; count <= n; count++)
		{
			if (i == n)
				{
					m1 = m2;
					m2 = array2[0];
					break;
				}
			else if (j == n)
				{
					m1 = m2;
					m2 = array1[0];
					break;
				}
			if (array1[i] < array2[j])
				{
					m1 = m2;  /* Store the prev median */
					m2 = array1[i];
					i++;
				}
			else
				{
					m1 = m2;  /* Store the prev median */
					m2 = array2[j];
					j++;
				}
		}
	return (m1 + m2)/2;
}

int main()
{
	int array1[] = {20, 25, 35, 30, 38};
	int array2[] = {22, 53, 65, 72, 45};
	int n1 = sizeof(array1) / sizeof(array1[0]);
	int n2 = sizeof(array2) / sizeof(array2[0]);
	if (n1 == n2)
		printf("Median is %d", getMedian(array1, array2, n1));
	else
		printf("not possible to findout");
	getchar();
	return 0;
}

/*
OUTPUT:

Median is 34

*/