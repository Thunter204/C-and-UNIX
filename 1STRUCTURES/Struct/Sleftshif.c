/*) Left shifting an unsigned int by 1 bit is equivalent to multiplying
the value by 2. Write function power2 that takes two integer arguments number and pow and calculates
number * 2pow
Use the shift operator to calculate the result. Print the values as integers and as bits*/


#include <stdio.h>

// Function prototype
unsigned int power2(unsigned int number, unsigned int pow);

int main(void)
{
    unsigned int number = 10;
    unsigned int pow = 3;

    unsigned int result = power2(number, pow);

    printf("%u * 2^%u = %u (in decimal) or %u (in binary)\n", number, pow, result, result);

    return 0;
}

// Function definition
unsigned int power2(unsigned int number, unsigned int pow)
{
    return number << pow;
}
