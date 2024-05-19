/*Research the Fisher-Yates shuffling algorithm online,
then use it to reimplement the shuffle method in Fig. 10.3.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

// function prototype
void shuffle(int wDeck[][13]);

int main(void)
{
int deck[4][13] = {0}; // initialize deck

for (int suit = 0; suit <= 3; suit++) // populate the deck
{
for (int face = 0; face <= 12; face++)
{
deck[suit][face] = face;
}
}

shuffle(deck); // shuffle the deck

// display the first four cards in the shuffled deck
for (int i = 0; i < 4; i++)
{
for (int j = 0; j < 13; j++)
{
printf("%5d", deck[i][j]);
}
printf("\n");
}

return 0;
}

// shuffle cards in deck
void shuffle(int wDeck[][13])
{
// initialize random number generator with current time
srand(time(NULL));

// for each of the cards, choose a random card to swap it with
for (int i = 0; i < 4; i++)
{
for (int j = 0; j < 13; j++)
{
int row = rand() % 4; // choose a random row index
int column = rand() % 13; // choose a random column index
int temp = wDeck[i][j]; // store current card in temp
wDeck[i][j] = wDeck[row][column]; // swap current card with random card
wDeck[row][column] = temp; // store temp in random card
}
}
}




