/* C Program to Count Number of bits set to 0 in a Integer x */

#include <stdio.h>
#define NUM_BITS_INT (8 * sizeof(int))

int count_unset(int);

int main()
{
	int i, num, snum, res, count = 0;
	printf("\nEnter the number");
	scanf("%d", &num);
	/*
	 * Check each bit whether the bit is set or unset
	 * Uses >> and & operator for checking individual bits
	 */
	for (i = 0; i <= NUM_BITS_INT; i++)
	{
		snum = num >> i;
		res = snum & 1;
		if (res == 0)
			count++;
	}
	printf("%d", count);
}