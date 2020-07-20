#include <stdio.h>
void main()
{
    FILE *fp;
    char ch;
    fp = fopen("file.txt", "w");
    printf("\nEnter data to be stored in to the file: ");
    while ((ch = getchar()) != EOF)
        putc(ch, fp);
    fclose(fp);
}