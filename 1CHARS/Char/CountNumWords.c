#include <stdio.h>
#include <string.h>

#define MAX_LEN 100 // maximum length of each line of text

int main() {
  char line[MAX_LEN], *token;
  int count = 0;

  printf("Enter several lines of text (press Ctrl+D when done):\n");
  while (fgets(line, MAX_LEN, stdin) != NULL) {
    // count the number of words in the current line of text
    token = strtok(line, " \n");
    while (token != NULL) {
      count++;
      token = strtok(NULL, " \n");
    }
  }

  printf("Total number of words: %d\n", count);

  return 0;
}
