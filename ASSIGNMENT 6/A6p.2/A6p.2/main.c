//Toni Hunter 187009925
//ASSIGNMENT 6 PROGRAM 2
// Reverse the order of an unsigned integer's bits. value should be given from user.
// print user value and reversed value.
//
#include <stdio.h>
#include <stdlib.h>

//protoypes
unsigned reverseBits(unsigned num);
void displayBits(unsigned num);

int main()
{
    unsigned a; //user input variable

    printf("Please enter an integer: ");
    scanf("%u", &a); // unsigned user scan

    printf("\nBelow are the ORIGINAL bits: \n");
    displayBits(a);

    a = reverseBits(a);
    printf("\nBelow are the REVERSED bits:\n");
    displayBits(a);

    return 0;
}

unsigned reverseBits(unsigned num)
{
    unsigned mask = 1;
    unsigned renum = 0;

    for(int i=0; i<=15; i++)
    {
        renum <<= 1; //shift left by 1
        renum |= (num & mask);
        num >>= 1; //shift right by 1
    }
    return renum;
}

void displayBits(unsigned num)
{
    unsigned displayMask = 1 << 15; //define and left shift 15 bits
    printf("%7u = ",num);

    for(unsigned int c=1; c<=16; c++) //loops through bits
    {
        putchar(num & displayMask ? '1' : '0');
        num <<= 1; //shift num left by 1

        if(c%8==0) //output space after 8 bits
        {
            putchar(' ');
        }
    }
    putchar('\n');

}

