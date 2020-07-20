/* C Program To Identify the Missing Number in an Integer Array of Size N-1 with Numbers[1,N] */

#include <stdio.h>
#define MAX 15
int missing_number_array(int[], int);

int main()
{
	int a[MAX], num, i, n;
	printf("enter the range of array\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("enter a[%d]element into the array:", i);
		scanf("%d", &a[i]);
	}
	num = missing_number_array(a, n);
	printf("The missing number -> %d\n", num);
}

/* To find the missing number in array */
int missing_number_array(int a[], int n)
{
	int i;
	int s1 = 0;
	int s2 = 0;
	for (i = 0; i < n; i++)
		s1 = s1 ^ a[i];
	for (i = 1; i <= n + 1; i++)
		s2 = s2 ^ i;
	return (s1 ^ s2);
}