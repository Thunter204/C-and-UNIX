//Toni Hunter 180009925
//Assignment 2: Program 3
//
//Write a recursive function that takes a number(m) and adds to itself n amount of times.
//assume the integer is greater than or equal to one.
//
#include <stdio.h>
#include <stdlib.h>




int Multiply(num1, num2)
{
    //base case
    if (num2 == 0){
        return num2;
    }
    //recursive call
    else{
        return num1 + Multiply(num1, num2 - 1);
    }
}

int main(void)
{
    int num1;
    int num2;

    printf("Enter first positive integer (multiplicand): ");
    scanf("%d", &num1);
    printf("Enter second positive integer (multiplier): ");
    scanf("%d", &num2);

    printf("%d * %d = %d", num1, num2, Multiply(num1, num2));
    return 0;
}
