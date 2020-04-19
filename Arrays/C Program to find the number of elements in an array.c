/* C Program to Find the Number of Elements in an Array */


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int array[] = {15, 50, 34, 20, 10, 79, 100};
    int n;
    n = sizeof(array);
    printf("Size of the given array is %d\n", n/sizeof(int));
    return 0;
}

/*
OUTPUT:

Size of the given array is 7

*/