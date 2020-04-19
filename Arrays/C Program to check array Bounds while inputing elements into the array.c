/*
 * C Program to Check Array bounds while Inputing Elements into the Array
 */
#include <stdio.h>

int main(void)
{
    int array[5], b, c;
    for (b = 0; b < 10 && (scanf("%d", &c)); b++)
        array[b] = c;
    for (b = 0; b < 15; b++)
        printf("%d ", array[b]);
    return 0;
}

/*
12
23
56
12
14
19
23

12 23 56 12 14 23 6 134513824 0 -1081194040 11672807 1 -1081193996 -1081193988 -1216161720

*/