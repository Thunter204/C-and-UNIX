#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_GAMES 1000  // Number of games to play
#define MAX_ROLLS 20  // Maximum number of rolls per game

int main() {
  // Seed the random number generator
  srand(time(0));

  // Declare and initialize the arrays to store the number of games won/lost on each roll
  int games_won[MAX_ROLLS + 1] = {0};
  int games_lost[MAX_ROLLS + 1] = {0};

  // Play the specified number of games of craps
  for (int i = 0; i < NUM_GAMES; i++) {
    // Roll the dice for the first time
    int die1 = rand() % 6 + 1;
    int die2 = rand() % 6 + 1;
    int sum = die1 + die2;

    // Check for a natural (7 or 11) or craps (2, 3, or 12) on the first roll
    if (sum == 7 || sum == 11) {
      // Game won on first roll
      games_won[0]++;
    } else if (sum == 2 || sum == 3 || sum == 12) {
      // Game lost on first roll
      games_lost[0]++;
    } else {
      // Game continues
      int point = sum;  // Set the point
      int roll = 1;  // Initialize the roll count
      while (1) {
        // Roll the dice again
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1;
        sum = die1 + die2;

        // Check if the game is won or lost
        if (sum == point) {
          // Game won
          games_won[roll]++;
          break;
        } else if (sum == 7) {
          // Game lost
          games_lost[roll]++;
          break;
        }

        // Increment the roll count
        roll++;
        if (roll > MAX_ROLLS) {
          // Game won after the twentieth roll
          games_won[MAX_ROLLS]++;
          break;
        }
}
    }
  }
}