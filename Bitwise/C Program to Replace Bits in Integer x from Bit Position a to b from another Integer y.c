/* C Program to Replace Bits in Integer x from Bit Position a to b from another Integer y*/

#include <stdio.h>

void changebits(int, int, int, int);

int main()
{
    int num1, num2, pos1, pos2;
    printf("**Replacing the bits in integer x from bit position a to b from another integer y**\n");
    printf("read number 1\n");
    scanf("%x", &num1);
    printf("Read number 2:\n");
    scanf("%x", &num2);
    printf("Read LSB postion:\n");
    scanf("%d", &pos1);
    printf("MSB should always be greater than LSB\n");
    printf("Read MSB position:\n");
    scanf("%d", &pos2);
    changebits(num1, num2, pos1, pos2);
    return 0;
}

/*Function to swap bits in given positions*/

void changebits(int num1, int num2, int pos1, int pos2)
{
    int temp1, temp_1, buffer2, bit1 = 0, bit2 = 0, counter = 0, a = 1;
    temp1 = num1;
    temp_1 = num1;
    buffer2 = num2;
    for (; pos1 <= pos2; pos1++)
    {
        a = 1;
        num1 = temp_1;
        num2 = buffer2;
        while (counter <= pos1)
        {
            if (counter == pos1)
                bit1 = (num1 & 1); //placing the bit of position 1 in bit1
            counter++;
            num1 >> = 1;
        }
        counter = 0;
        while (counter <= pos1)
        {
            if (counter == pos1)
                bit2 = (num2 & 1); //placing the bit of position 2 in bit2
            counter++;
            num2 >>= 1;
        }
        counter = 0;
        if (bit1 == bit2)
            ;
        else
        {
            while (counter++ < pos1)
                a = a << 1;
            temp1 ^= a; //placing the repplaced bit integer into temp1 variable
        }
        counter = 0;
    }
    printf("the number num1 after shifting the bits is 0x%x\n", temp1);
}