/* Create union integer with members char c, short s, int i and long b.
Write a program that inputs values of type char, short, int and long and stores the values in union
variables of type union integer. Each union variable should be printed as a char, a short, an int
and a long.*/

#include <stdio.h>

union integer {
    char c;
    short s;
    int i;
    long b;
};

int main(void)
{
    union integer x;

    // Input and store a char value in the union variable
    printf("Enter a char value: ");
    scanf("%c", &x.c);
    printf("x.c (char) = %c\n", x.c);
    printf("x.s (short) = %hd\n", x.s);
    printf("x.i (int) = %d\n", x.i);
    printf("x.b (long) = %ld\n", x.b);

    // Input and store a short value in the union variable
    printf("\nEnter a short value: ");
    scanf("%hd", &x.s);
    printf("x.c (char) = %c\n", x.c);
    printf("x.s (short) = %hd\n", x.s);
    printf("x.i (int) = %d\n", x.i);
    printf("x.b (long) = %ld\n", x.b);

    // Input and store an int value in the union variable
    printf("\nEnter an int value: ");
    scanf("%d", &x.i);
    printf("x.c (char) = %c\n", x.c);
    printf("x.s (short) = %hd\n", x.s);
    printf("x.i (int) = %d\n", x.i);
    printf("x.b (long) = %ld\n", x.b);

    // Input and store a long value in the union variable
    printf("\nEnter a long value: ");
    scanf("%ld", &x.b);
    printf("x.c (char) = %c\n", x.c);
    printf("x.s (short) = %hd\n", x.s);
    printf("x.i (int) = %d\n", x.i);
    printf("x.b (long) = %ld\n", x.b);

    return 0;
}
