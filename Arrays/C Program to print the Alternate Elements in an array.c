/* C Program to Print the Alternate Elements in an Array */


#include <stdio.h>

void main()
{
    int array[10];
    int i, j, temp;
    printf("enter the element of an array \n");
    for (i = 0; i < 10; i++)
        scanf("%d", &array[i]);
    printf("Alternate elements of a given array \n");
    for (i = 0; i < 10; i += 2)
        printf( "%d\n", array[i]) ;
}

/*
OUTPUT:

enter the element of an array
12
23
45
57
68
73
84
97
120
125
Alternate elements of a given array
12
45
68
84
120

*/