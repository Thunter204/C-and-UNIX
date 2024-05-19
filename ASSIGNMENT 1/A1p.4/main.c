#include <stdio.h>
//Toni Hunter 187009925
//Program: Pythagorean Triples
// This program uses "brute force" to compute all Pythagorean triples up to 500 without repeating eqautions

int main(void)
{
    int counter;

    for (int a=1; a<=500; a++) // a values
        {
        for (int b=1; b<=500; b++){ //b values
            for (int c=1; c<=500; c++){ //c values

                if ( a<b && a*a + b*c == c*c){ // checks if Pythagorean triple
                    printf("(%d^2 + %d^2 = %d^2) ", a,b,c);
                    printf("\n");
                    counter++; // keeps track of triples
                    }
                }
        }
    }
}
