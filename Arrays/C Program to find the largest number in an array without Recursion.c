/* C Program to Find the Largest Number in an Array */

#include <stdio.h>

int main()
{
    int array[50], size, i, largest;
    printf("\n Enter the size of the array: ");
    scanf("%d", &size);
    printf("\n Enter %d elements of  the array: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);
    largest = array[0];
    for (i = 1; i < size; i++)
        {
            if (largest < array[i])
                largest = array[i];
        }
    printf("\n largest element present in the given array is : %d", largest);
    return 0;
}

/*
OUTPUT:

Enter the size of the array: 5

Enter 5 elements of  the array: 12
56
34
78
100

largest element present in the given array is : 100

*/