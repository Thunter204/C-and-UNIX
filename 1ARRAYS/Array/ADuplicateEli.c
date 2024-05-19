#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_RANDOMS 20  // Number of random numbers to generate

int main() {
  // Seed the random number generator
  srand(time(0));

  // Declare and initialize the array to store the nonduplicate values
  int nonduplicates[20] = {0};
  int num_nonduplicates = 0;  // Number of nonduplicate values stored in the array

  // Generate the random numbers and store the nonduplicates in the array
  for (int i = 0; i < NUM_RANDOMS; i++) {
    int random = rand() % 20 + 1;  // Generate a random number between 1 and 20
    int found = 0;  // Flag to indicate if the random number is a duplicate
    for (int j = 0; j < num_nonduplicates; j++) {
      if (nonduplicates[j] == random) {  // Check if the random number is a duplicate
        found = 1;
        break;
      }
    }
    if (!found) {  // If the random number is not a duplicate, store it in the array
      nonduplicates[num_nonduplicates] = random;
      num_nonduplicates++;
    }
  }

  // Print the nonduplicate values
  printf("Nonduplicate values:\n");
  for (int i = 0; i < num_nonduplicates; i++) {
    printf("%d ", nonduplicates[i]);
  }
  printf("\n");

  return 0;
}

