/* C Program to Increment every Element of the Array by one & Print Incremented Array */

#include <stdio.h>

void incrementArray(int[]);

void main()
{
    int i;
    int array[4] = {10, 20, 30, 40};
    incrementArray(array);
    for (i = 0; i < 4; i++)
        printf("%d\t", array[i]);   // Prints 2, 3, 4, 5
}

void incrementArray(int arr[])
{
    int i;
    for (i = 0; i < 4; i++)
        arr[i]++;     // this alters values in array in main()
}

/*
OUTPUT:

11    21    31

*/