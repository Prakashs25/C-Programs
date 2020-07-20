/* C Program to Swap the ith and jth Bits for a 32-Bit Integer */

#include <stdio.h>

int swap(int, int);
int number, pos1, pos2;

int main()
{
	int result, shift_pos1, shift_pos2;
	printf("\nEnter Number");
	scanf("%d", &number);
	printf("\nEnter bit positions to swap");
	scanf("%d %d", &pos1, &pos2);
	shift_pos1 = number >> pos1;
	shift_pos2 = number >> pos2;
	result = swap(shift_pos1 & 1, shift_pos2 & 1);
	printf("%d\n", result);
}

int swap(int pos1_val, int pos2_val)
{
	int temp1, temp2;
	long int base, base1;
	/*
	 * If the pos1_val value is 1 then only pos2_val th bit is set to 1 by using << and + operators
	 */
	if (pos1_val == 1)
	{
		base1 = 1 << pos2;
		number = number + base1;
	}
	/*
	 *If the pos2_val value is 1 then only pos2_val th bit is set to 1 by using << and + operators
	 */
	if (pos2_val == 1)
	{
		base1 = 1 << pos2;
		number = number + base1;
	}
	/*
	 *If the pos1_val value is 0 then only pos2_val th bit is set to 0 using <<,  ^ and & operators
	*/
	if (pos1_val == 0)
	{
		base = 0XFFFFFFFF;
		base1 = 1 << pos2;
		temp1 = base ^ base1;
		number = number & temp1;
	}
	/*
	 *If the pos2_val value is 0 then only pos1_val th bit is set to 0 using <<,  ^ and & operators
	 */
	if (pos2_val == 0)
	{
		base = 0XFFFFFFFF;
		base1 = 1 << pos1;
		temp2 = base ^ base1;
		number = number & temp2;
	}
	return number;
}