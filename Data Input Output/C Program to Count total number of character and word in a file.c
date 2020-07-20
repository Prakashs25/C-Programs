#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp;
    char ch;
    int tc = 0, tw = 1;
    fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        printf("File doesn't exist\n");
        exit(1);
    }
    while (!feof(fp))
    {
        ch = getc(fp);
        tc++;
        if (ch == ' ')
        {
            tw++;
        }
    }
    printf("Total character: %d \nTotal words: %d", tc, tw);
}