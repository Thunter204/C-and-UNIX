/*Write a program that right shifts an integer variable 4 bits. The
program should print the integer in bits before and after the shift operation*/

#include <stdio.h>

int main(void)
{
    int x = 0b10101010; // Initialize x with the binary value 10101010

    printf("x (before shift) = %d (in decimal) or %d (in binary)\n", x, x);

    // Right shift x 4 bits
    x >>= 4;

    printf("x (after shift) = %d (in decimal) or %d (in binary)\n", x, x);

    return 0;
}
