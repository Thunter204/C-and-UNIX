/*Write a program that reverses the order of the bits
in an unsigned int value. The program should input the value from the user and call function reverseBits to print the bits in reverse order. Print the value in bits both before and after the bits are
reversed to confirm that the bits are reversed properly*/

#include <stdio.h>

unsigned int reverseBits(unsigned int value)
{
unsigned int result = 0; // initialize result to 0

// iterate through each bit of the value
for (int i = 0; i < 32; i++)
{
result = (result << 1) | (value & 1); // shift result left by 1 and OR it with the LSB of value
value >>= 1; // shift value right by 1
}

return result;
}

int main(void)
{
unsigned int value;
printf("Enter an unsigned int value: ");
scanf("%u", &value);

printf("Original value in bits: ");
for (int i = 31; i >= 0; i--)
{
printf("%d", (value >> i) & 1);
}
printf("\n");

unsigned int reversed = reverseBits(value);

printf("Reversed value in bits: ");
for (int i = 31; i >= 0; i--)
{
printf("%d", (reversed >> i) & 1);
}
printf("\n");

return 0;
}




