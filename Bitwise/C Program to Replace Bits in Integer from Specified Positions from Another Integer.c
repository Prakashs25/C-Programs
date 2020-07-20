/* C Program to Replace Bits in Integer from Specified Positions from Another Integer */

#include <stdio.h>

void replace_bits(int, int, int, int);

int main()
{
	int number_x, number_y, start_pos, end_pos;
	printf("\nEnter the number x in hexa decimal ");
	scanf("%x", &number_x);
	printf("\nEnter the number y in hexa decimal");
	scanf(" %x", &number_y);
	printf("\nEnter value for a");
	scanf("%d", &start_pos);
	printf("\nEnter value for b");
	scanf("%d", &end_pos);
	replace_bits(number_x, number_y, start_pos, end_pos);
}
/*
 * Replace bits in first number from specified position with bits in second number
 */
void replace_bits(int number_x, int number_y, int start_pos, int end_pos)
{
	int i, shift_y, ybit;
	long int temp, t;
	/*
	 * Replace the corresponding x bits by y bits
	 */
	for (i = start_pos; i <= end_pos; i++)
	{
		shift_y = number_y >> i;
		ybit = shift_y & 1;
		if (ybit == 1)
		{
			temp = 1 << i;
			number_x = number_x | temp;
		}
		if (ybit == 0)
		{
			t = 0XFFFFFFFF;
			temp = 1 << i;
			start_pos = t ^ temp;
			number_x = number_x & start_pos;
		}
	}
	printf("%x", number_x);
}