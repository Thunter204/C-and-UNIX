#include <stdio.h>
//Toni Hunter 187009925
//Program: Diamond-Printing Program
//This program prints a diamond shape with 15 stars in the middle

int main(void)
{
    int row = 15;
    int space = row + 1;
//top half
    for (int i = 0; i <= row; i++) //keeps track of rows
        {
            for (int k = 0; k <= space - 1; k++){
              printf(" ");
            }
            for (int j = 0; j <= i-1; j++){ //keeps track of stars
                printf("* ");  //prints star and spaces between
            }
    printf("\n");
    space--;  //decrements space while going down
}
//bottom half
    space += 1;
    for (int i = row; i >= 0; i--) // i == row because bottom half starts from middle
        {
            for (int k = 0; k <= space; k++){
              printf(" ");
            }
            for (int j = 0; j < i-1; j++){ //keeps track of stars
                printf("* ");
            }
    printf("\n");
    space++; //increments space while going down
}
}
