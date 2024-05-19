/* Modify function displayBits of Fig. 10.7 so it’s portable
between systems using 2-byte integers and systems using 4-byte integers. [Hint: Use the sizeof operator to determine the size of an integer on a particular machine.]*/

#include <stdio.h>

void displayBits(unsigned int value)
{
// determine the number of bits in an integer
int numBits = 8 * sizeof(unsigned int);

// create an array of characters with one element for each bit
unsigned int displayMask = 1 << (numBits - 1); // initialize displayMask
char display[numBits + 1];

// for each bit, determine whether it is a 1 or 0 and store it in the display array
for (int i = 0; i < numBits; i++)
{
display[i] = (value & displayMask) ? '1' : '0';
value <<= 1; // shift value left by 1
}
display[numBits] = '\0'; // terminate the string

printf("%s\n", display);
}

int main(void)
{
unsigned int x;

printf("Enter an unsigned integer: ");
scanf("%u", &x);

printf("The bits in x are: ");
displayBits(x);

return 0;
}




