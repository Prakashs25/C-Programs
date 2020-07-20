/* C Program to check if all the bits of a given integer is one(1) */

#include <stdio.h>

int all_bits_one(int);
int count = 0;

void main()
{
	int num;
	printf("enter the number:");
	scanf("%d", &num);
	num++;
	all_bits_one(num);
	if (count)
	{
		printf("false");
	}
	else
	{
		printf("true");
	}
}

/* checks whether all bits are 1 */
int all_bits_one(int x)
{
	if (x == 1)
		return 0;
	if (x % 2 != 0)
	{
		count++;
	}
	else
	{
		x = x / 2;
		all_bits_one(x);
	}
}