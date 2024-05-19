#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ROLLS 36000  // Number of times to roll the dice
#define MIN_SUM 2  // Minimum possible sum of the dice
#define MAX_SUM 12  // Maximum possible sum of the dice

int main() {
  // Seed the random number generator
  srand(time(0));

  // Declare and initialize the array to tally the number of times each sum appears
  int sum_counts[MAX_SUM - MIN_SUM + 1] = {0};

  // Roll the dice and tally the sums
  for (int i = 0; i < NUM_ROLLS; i++) {
    int die1 = rand() % 6 + 1;  // Roll the first die
    int die2 = rand() % 6 + 1;  // Roll the second die
    int sum = die1 + die2;  // Calculate the sum of the dice
    sum_counts[sum - MIN_SUM]++;
  }

  // Print the results in a tabular format
  printf("Sum\tCount\n");
  for (int i = 0; i <= MAX_SUM - MIN_SUM; i++) {
    printf("%d\t%d\n", i + MIN_SUM, sum_counts[i]);
  }

  return 0;
}
