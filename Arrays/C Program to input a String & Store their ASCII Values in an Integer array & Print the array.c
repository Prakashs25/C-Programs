/* C Program to Input a String & Store their Ascii Values in an Integer Array & Print the Array */

#include <stdio.h>

void main()
{
    char string[20];
    int n, count = 0;
    printf("Enter the no of characters present in an array \n ");
    scanf("%d", &n);
    printf(" Enter the string of %d characters \n", n);
    scanf("%s", string);
    while (count < n)
        {
            printf(" %c = %d\n", string[count], string[count] );
            ++ count ;
        }
}

/*
OUTPUT:


Enter the no of characters present in an array
10
 Enter the string of 10 characters
sanfoundry
 s = 115
 a = 97
 n = 110
 f = 102
 o = 111
 u = 117
 n = 110
 d = 100
 r = 114

 */