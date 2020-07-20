/* C Program to next higher value of n with same 1's */

#define NUM_BITS_INT 32
#include <stdio.h>
int newcount(int);

void main()
{
	int count1 = 0, k = 0, j, t, n, bit, i = 1, count = 0;
	printf("Enter a number : ");
	scanf("%d", &n);
	t = n;
	while (t != 0)
	{
		bit = t & 0x80000000;
		if (bit == -0x80000000)
		{
			bit = 1;
		}
		if (bit == 1)
			count++;
		t = t << 1;
	}
	for (k = n + 1;; k++)
	{
		count1 = newcount(k);
		if (count1 == count)
		{
			printf("The next highest number is : %d ", k);
			break;
		}
	}
}

/* To count the no. of 1's in the no. */
int newcount(int k)
{
	int bit, count = 0;
	while (k != 0)
	{
		bit = k & 0x80000000;
		if (bit == -0x80000000)
		{
			bit = 1;
		}
		if (bit == 1)
			count++;
		k = k << 1;
	}
	return (count);
}