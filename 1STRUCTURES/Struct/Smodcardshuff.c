/* Modify the program of Fig. 10.16 to shuffle
the cards using a high-performance shuffle (as shown in Fig. 10.3). Print the resulting deck in a
two-column format that uses the face and suit names. Precede each card with its color.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_FACES 13
#define NUM_CARDS 52

// Card structure definition
struct card {
    const char *face;
    const char *suit;
    const char *color;
};

// Prototypes
void shuffle(struct card * const wDeck);
void deal(const struct card * const wDeck);

int main(void)
{
    struct card deck[NUM_CARDS];

    // Initialize the deck
    const char *faces[] = { "Ace", "Deuce", "Three", "Four", "Five", "Six",
                             "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
    const char *suits[] = { "Hearts", "Diamonds", "Clubs", "Spades" };
    const char *colors[] = { "Red", "Red", "Black", "Black" };

    // Populate the deck with cards
    for (size_t i = 0; i < NUM_CARDS; ++i) {
        deck[i].face = faces[i % NUM_FACES];
        deck[i].suit = suits[i / NUM_FACES];
        deck[i].color = colors[i / NUM_FACES];
    }

    // Shuffle the cards
    shuffle(deck);

    // Deal the cards
    deal(deck);

    return 0;
}

// Function to shuffle cards
void shuffle(struct card * const wDeck)
{
    // Seed the random number generator
    srand(time(NULL));

    // Perform the high-performance shuffle
    for (size_t i = 0; i < NUM_CARDS; ++i) {
        // Generate a random index between 0 and 51
        size_t j = rand() % NUM_CARDS;

        // Swap the cards at indices i and j
        struct card temp = wDeck[i];
        wDeck[i] = wDeck[j];
        wDeck[j] = temp;
    }
}

// Function to deal cards
void deal(const struct card * const wDeck)
{
    // Print the cards in a two-column format
    for (size_t i = 0; i < NUM_CARDS; ++i) {
        printf("%s %-8s of %-8s\n", wDeck[i].color, wDeck[i].face, wDeck[i].suit);
        if ((i + 1) % 2 == 0) {
            puts("");
        }
    }
}
