/*The left-shift operator can be used to pack four character values into a four-byte unsigned int variable. Write a program that inputs four characters from
the keyboard and passes them to function packCharacters. To pack four characters into an unsigned int variable, assign the first character to the unsigned int variable, shift the unsigned int
variable left by 8 bit positions and combine the unsigned variable with the second character using
the bitwise inclusive OR operator. Repeat this process for the third and fourth characters. The program should output the characters in their bit format before and after they’re packed into the unsigned int to prove that the characters are in fact packed correctly in the unsigned int variable.*/

#include <stdio.h>

// Function prototype
unsigned int packCharacters(char c1, char c2, char c3, char c4);

int main(void)
{
    char c1, c2, c3, c4;

    printf("Enter 4 characters: ");
    scanf("%c%c%c%c", &c1, &c2, &c3, &c4);

    printf("c1 = %c (in decimal) or %u (in binary)\n", c1, c1);
    printf("c2 = %c (in decimal) or %u (in binary)\n", c2, c2);
    printf("c3 = %c (in decimal) or %u (in binary)\n", c3, c3);
    printf("c4 = %c (in decimal) or %u (in binary)\n", c4, c4);

    unsigned int packed = packCharacters(c1, c2, c3, c4);
    printf("packed = %u (in decimal) or %u (in binary)\n", packed, packed);

    return 0;
}

// Function definition
unsigned int packCharacters(char c1, char c2, char c3, char c4)
{
    unsigned int packed = c1;
    packed <<= 8;
    packed |= c2;
    packed <<= 8;
    packed |= c3;
    packed <<= 8;
    packed |= c4;

    return packed;
}
