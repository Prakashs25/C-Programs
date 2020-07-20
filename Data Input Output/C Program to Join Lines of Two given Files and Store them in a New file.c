/* C Program to Join Lines of Two given Files and Store them in a New file */

#include <stdio.h>
#include <stdlib.h>

/* Function Prototype */
int joinfiles(FILE *, FILE *, FILE *);

char ch;
int flag;

void main(int argc, char *argv[])
{
	FILE *file1, *file2, *target;
	file1 = fopen(argv[1], "r");
	if (file1 == NULL)
	{
		perror("Error Occured!");
	}
	file2 = fopen(argv[2], "r");
	if (file2 == NULL)
	{
		perror("Error Occured!");
	}
	target = fopen(argv[3], "a");
	if (target == NULL)
	{
		perror("Error Occured!");
	}
	joinfiles(file1, file2, target); /* Calling Function */
	if (flag == 1)
	{
		printf("The files have been successfully concatenated\n");
	}
}

/* Code join the two given files line by line into a new file */

int joinfiles(FILE *file1, FILE *file2, FILE *target)
{
	while ((fgetc(file1) != EOF) || (fgetc(file2) != EOF))
	{
		fseek(file1, -1, 1);
		while ((ch = fgetc(file1)) != '\n')
		{
			if (ch == EOF)
			{
				break;
			}
			else
			{
				fputc(ch, target);
			}
		}
		while ((ch = fgetc(file2)) != '\n')
		{
			if (ch == EOF)
			{
				break;
			}
			else
			{
				fputc(ch, target);
			}
		}
		fputc('\n', target);
	}
	fclose(file1);
	fclose(file2);
	fclose(target);
	return flag = 1;
}

/*
The files have been successfully concatenated

/* FIRST FILE */

/*
Hello!!
This is a C Program File.
Consider a code to Add two numbers
*/

#include <stdio.h>
/* Function Prototype */
int sum(int, int);
void main()
{
	int num1, num2;
	printf("Enter Number1 and Number2:");
	scanf("%d %d ", num1, num2);
	sum(num1, num2);
}

int sum(int a, int b)
{
	return a + b;
}

/* SECOND FILE */

/*
 * this is temporary file for use in file handling
 */
#include <stdio.h>

int sqrt(int);
void main()
{
	int num;
	printf("enter the number:");
	scanf("%d", &num);
	sqrt(num);
	printf("The square of the given number is:", num);
}
int sqrt(int num)
{
	return num * num;
}

/* CONCATENATED FILE */
/*
Hello!! * this is temporary file for use in file handling
This is a C Program File. *
Consider a code to Add two numbers  */
* /
#include <stdio.h>
#include <stdio.h>
	int sqrt(int);
/* Function Prototype */ void main()
{
	int sum(int, int);
	int num;
	void main() printf("enter the number:");
	{
		scanf("%d", &num);
		int num1, num2;
		sqrt(num);
		printf("Enter Number1 and Number2:");
		printf("The square of the given number is:", num);
		scanf("%d %d ", num1, num2);
	}
	sum(num1, num2);
	int sqrt(int num)
}
{
	return num * num;
	int sum(int a, int b)
}
{
	return a + b;
}