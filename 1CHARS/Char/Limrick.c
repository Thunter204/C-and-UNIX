/*A limerick is a humorous five-line verse in which the first and second lines
rhyme with the fifth, and the third line rhymes with the fourth. Using techniques similar to those
developed in Exercise 8.11, write a program that produces random limericks. Polishing this program to produce good limericks is a challenging problem, but the result will be worth the effort*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_LINES 5
#define NUM_WORDS 10

const char *words[NUM_WORDS] = {
    "cat", "dog", "rat", "bat", "hat",
    "gnat", "flat", "pat", "mat", "splat"
};

const char *rhymes[NUM_WORDS] = {
    "fat", "bat", "rat", "cat", "pat",
    "gnat", "flat", "mat", "that", "splat"
};

int main(int argc, char *argv[]) {
    srand(time(NULL));

    for (int i = 0; i < NUM_LINES; i++) {
        int word1 = rand() % NUM_WORDS;
        int word2 = rand() % NUM_WORDS;
        int rhyme1 = rand() % NUM_WORDS;
        int rhyme2 = rand() % NUM_WORDS;

        if (i == 0 || i == 1) {
            printf("There once was a %s so %s\n", words[word1], words[word2]);
        } else if (i == 2) {
            printf("It liked to eat %s and %s\n", rhymes[rhyme1], rhymes[rhyme2]);
        } else if (i == 3) {
            printf("But when it tried to eat a %s\n", rhymes[rhyme1]);
        } else if (i == 4) {
            printf("It ended up with a %s on its %s\n", rhymes[rhyme1], rhymes[rhyme2]);
        }
    }

    return 0;
}
