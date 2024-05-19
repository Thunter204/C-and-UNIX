/* Using the right-shift operator, the bitwise AND
operator and a mask, write function unpackCharacters that takes the unsigned int from
Exercise 10.12 and unpacks it into four characters. To unpack characters from a four-byte unsigned
int, combine the unsigned int with the mask 4278190080 (11111111 00000000 00000000 00000000)
and right shift the result 8 bits. Assign the resulting value to a char variable. Then combine the unsigned int with the mask 16711680 (00000000 11111111 00000000 00000000). Assign the result to
another char variable. Continue this process with the masks 65280 and 255. The program should
print the unsigned int in bits before it’s unpacked, then print the characters in bits to confirm that
they were unpacked correctly.*/

#include <stdio.h>

// Function prototype
void unpackCharacters(unsigned int packed, char *c1, char *c2, char *c3, char *c4);

int main(void)
{
    unsigned int packed = 1684234849; // Initialize packed with the value 110000010110001011001100010001 (in binary)
    char c1, c2, c3, c4;

    printf("packed = %u (in decimal) or %u (in binary)\n", packed, packed);

    unpackCharacters(packed, &c1, &c2, &c3, &c4);

    printf("c1 = %c (in decimal) or %u (in binary)\n", c1, c1);
    printf("c2 = %c (in decimal) or %u (in binary)\n", c2, c2);
    printf("c3 = %c (in decimal) or %u (in binary)\n", c3, c3);
    printf("c4 = %c (in decimal) or %u (in binary)\n", c4, c4);

    return 0;
}

// Function definition
void unpackCharacters(unsigned int packed, char *c1, char *c2, char *c3, char *c4)
{
    *c1 = (packed & 0xff000000) >> 24;
    *c2 = (packed & 0x00ff0000) >> 16;
    *c3 = (packed & 0x0000ff00) >> 8;
    *c4 = packed & 0x000000ff;
}
