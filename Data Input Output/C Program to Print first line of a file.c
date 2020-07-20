#include <stdio.h>
#include <stdlib.h>
void main()
{
	FILE *fp;
	char str[50];
	fp = fopen("file.txt", "r");
	if (fp == NULL)
	{
		printf("File doesn't exist\n");
		exit(1);
	}
	fscanf(fp, "%s", str);
	printf("First line of the file:   %s", str);
	fclose(fp);
}