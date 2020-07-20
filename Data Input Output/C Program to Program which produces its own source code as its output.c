#include <stdio.h>
void main()
{
	FILE *fp;
	char c;
	fp = fopen(__FILE__, "r");
	do
	{
		c = getc(fp);
		putchar(c);
	} while (c != EOF);
	fclose(fp);
}