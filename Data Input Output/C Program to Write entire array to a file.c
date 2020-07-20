#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *p;
	int i, arr[10];
	if ((p = fopen("demofile.txt", "wb")) == NULL)
	{
		printf("\nUnable to open file demofile.txt");
		exit(1);
	}
	printf("\nEnter ten values\n");
	for (i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
	fwrite(arr, sizeof(arr), 1, p);
	fclose(p);
	return 0;
}