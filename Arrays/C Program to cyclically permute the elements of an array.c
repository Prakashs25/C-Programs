/* This C Program cyclically permutes the elements of an array. This program first accepts an array. Assume there are 4 elements in an array. It takes 2 element as a first elment in an array and so on till the last element of the given array. Now here first element of an array becomes last element in an array during cyclical permutation. */

/*

 * C program to cyclically permute the elements of an array A.
 * i.e. the content of A1 become that of A2. And A2 contains
 * that of A3 & so on as An contains A1

*/

#include <stdio.h>

void main ()
{
    int i, n, number[30];
    printf("Enter the value of the n = ");
    scanf("%d", &n);
    printf("Enter the numbers\n");
    for (i = 0; i < n; ++i)
        {
            scanf("%d", &number[i]);
        }
    number[n] = number[0];
    for (i = 0; i < n; ++i)
        {
            number[i] = number[i + 1];
        }
    printf("Cyclically permuted numbers are given below \n");
    for (i = 0; i < n; ++i)
        printf("%d\n", number[i]);
}

/*

Enter the value of the n = 4
Enter the numbers
3
40
100
68
Cyclically permuted numbers are given below
40
100
68
3

*/