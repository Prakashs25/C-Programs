#include <stdio.h>
#include <stdlib.h>
void main()
{
	FILE *fp1, *fp2, *fp3;
	char ch;
	int tc = 0, tw = 1;
	fp1 = fopen("file1.txt", "r");
	if (fp1 == NULL)
	{
		printf("File doesn't exist\n");
		exit(1);
	}
	fp2 = fopen("file2.txt", "r");
	if (fp2 == NULL)
	{
		printf("File doesn't exist\n");
		exit(1);
	}
	fp3 = fopen("file3.txt", "w");
	while (!feof(fp1))
	{
		ch = getc(fp1);
		putc(ch, fp3);
	}
	fclose(fp1);
	while (!feof(fp2))
	{
		ch = getc(fp2);
		putc(ch, fp3);
	}
	fclose(fp2);
	fclose(fp3);
	printf("file1 and file2 are concatenated in file3")
}