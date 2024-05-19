//Toni Hunter 187009925
//Assignment 4 Project 2
//
// Card shuffling and dealing modification -- create high performance shuffling algorithm that
// avoids indefinite postponement(). Modify shuffle function to loop row by row and column by column
// through the array.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// prototypes
//void shuffle(int d[4][13]); // modified shuffle
void printArray(int d[4][13]);

int main(void){
int ndeck[4][13] = { //ROW||, COLUMN--
    {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13},
    {14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26},
    {27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39},
    {40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52}};


   puts("Below is the UNSHUFFLED deck: \n");
   printArray(ndeck);
   shuffle(ndeck);
   puts(" ");
   puts("\nBelow the deck has been SHUFFLED 2 times: \n");
   printArray(ndeck);
   shuffle(ndeck);
   printf("\n");
   printArray(ndeck);


}

void printArray(int d[4][13])
{
    int k = 0;
    printf("     0   1   2   3   4   5   6   7   8   9  10  11  12\n");
    printf("  ----------------------------------------------------\n");
   // loop through rows
   for (int i = 0; i <= 3; i++) {
        printf("%d|", k++);

      // output column values
      for (int j = 0; j <= 12; j++) {
         printf("%4d", d[i][j]);
      }

      printf("\n"); // start new line of output
   }
}


// shuffle cards in deck
void shuffle(int d[4][13])
{
    int row, col;

    for (int i = 0; i<4; i++)
    {
        for (int j = 0; j <13; j++)
        {
            int e = d[i][j]; //takes a element
            row = rand() % 4;  //gets random row
            col = rand() %13;  // random column
            d[i][j] = d[row][col];  //moves the element
            d[row][col] = e;  //sets the new number equal to element
        }
    }
}

