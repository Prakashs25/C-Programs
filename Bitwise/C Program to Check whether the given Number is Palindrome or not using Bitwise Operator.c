/* C Program to Check whether the given Number is Palindrome or not using Bitwise Operator */

#include <stdio.h>
#include <string.h>
#define SIZE 8
/* Function Prototype */
int is_palindrome(unsigned char[]);

void main()
{
	int num, num1 = 0, i = 0, j = SIZE - 1, res;
	unsigned char c[SIZE];
	printf("Enter a number(max 255)");
	scanf("%d", &num);
	num1 = num;
	while (num != 0)
	{
		c[j] = num & 1;
		j--;
		num = num >> 1; /* Shifting right the given number by 1 bit */
	}
	printf("The number %d in binary is:", num1);
	for (i = 0; i < SIZE; i++)
	{
		printf("%d", c[i]);
	}
	res = is_palindrome(c); /* Calling Function */
	if (res == 0)
	{
		printf("\nNUMBER IS PALINDROME\n");
	}
	else
	{
		printf("\nNUMBER IS NOT PALINDROME\n");
	}
}

/* Code to check if the number is palindrome or not */
int is_palindrome(unsigned char c[])
{
	char temp[SIZE];
	int i, j, flag = 0;
	for (i = 0, j = SIZE - 1; i < SIZE, j >= 0; i++, j--)
	{
		temp[j] = c[i];
	}
	for (i = 0; i < SIZE; i++)
	{
		if (temp[i] != c[i])
		{
			flag = 1;
		}
	}
	return flag;
}