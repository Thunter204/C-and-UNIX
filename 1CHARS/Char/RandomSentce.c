#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define NUM_SENTENCES 20
#define MAX_SENTENCE_LENGTH 100

int main(void) {
char *article[5] = {"the", "a", "one", "some", "any"};
char *noun[5] = {"boy", "girl", "dog", "town", "car"};
char *verb[5] = {"drove", "jumped", "ran", "walked", "skipped"};
char *preposition[5] = {"to", "from", "over", "under", "on"};
char sentence[MAX_SENTENCE_LENGTH];

srand(time(0)); // Seed the random number generator

// Generate and print NUM_SENTENCES sentences
for (int i = 0; i < NUM_SENTENCES; i++) {
// Select random words from the arrays and concatenate them to form the sentence
sprintf(sentence, "%s %s %s %s %s %s.",
*(article + rand() % 5),
*(noun + rand() % 5),
*(verb + rand() % 5),
*(preposition + rand() % 5),
*(article + rand() % 5),
*(noun + rand() % 5));
// Capitalize the first letter of the sentence
sentence[0] = toupper(sentence[0]);
printf("%s\n", sentence);
}

return 0;
}




