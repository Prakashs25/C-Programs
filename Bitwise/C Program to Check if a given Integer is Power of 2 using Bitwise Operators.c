/* C Program to Check if a given Integer is Power of 2 using Bitwise Operators*/

#include <stdio.h>
#define NUM_BITS_INT (8 * sizeof(int))

int power_of_2(unsigned int);

int main()
{
	unsigned int num;
	printf("\nEnter Number");
	scanf("%d", &num);
	power_of_2(num);
}

/*
 * Finding the power of 2 using bit wise operators
 */
int power_of_2(unsigned int x)
{
	int i, count = 0, result, shift_num;
	for (i = 0; i <= NUM_BITS_INT; i++)
	{
		shift_num = x >> i;
		result = shift_num & 1;
		if (res == 1)
			count++;
	}
	/*
	 *If number of bits set to 1 are odd then the number is power of 2
	 *If number of bits set to 0 are even then the number is not power of 2
	 */
	if (count % 2 == 1)
		printf("YES");
	else
		printf("NO");
}