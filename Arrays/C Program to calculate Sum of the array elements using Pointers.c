/*This C Program calculates the sum of array elements using pointer. The program uses the pointer to traverse the array and adds up the element values there.*/

/*
 
 * C program to read N integers and store them in an array A.
 * Find the sum of all these elements using pointer.

*/

#include <stdio.h>
#include <malloc.h>

void main()
{
    int i, n, sum = 0;
    int *a;
    printf("Enter the size of array A \n");
    scanf("%d", &n);
    a = (int *) malloc(n * sizeof(int));
    printf("Enter Elements of First List \n");
    for (i = 0; i < n; i++)
        {
            scanf("%d", a + i);
        }
    </*  Compute the sum of all elements in the given array */
    for (i = 0; i < n; i++)
        {
            sum = sum + *(a + i);
        }
    printf("Sum of all elements in array = %d\n", sum);
}

/*
OUTPUT:

Enter the size of array A
5
Enter Elements of First List
4
9
10
56
100
Sum of all elements in array = 179

*/