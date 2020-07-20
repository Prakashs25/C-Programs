#include <stdio.h>
#include <time.h>
#include <sys\stat.h>
int main()
{
	struct stat s;
	FILE *fp;
	fp = fopen("exmple.txt", "r");
	fstat(fileno(fp), &s);
	printf("Last date of modification : %s", ctime(&s.st_ctime));
	return 0;
}