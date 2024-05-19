#include <stdio.h>
#include <string.h>

#define MAX_LEN 100 // maximum length of the input line of text

int main() {
  char line[MAX_LEN], word[MAX_LEN], *token;
  int count_before = 0, count_after = 0;

  printf("Enter a line of text: ");
  fgets(line, MAX_LEN, stdin);
  printf("Enter a word to remove: ");
  scanf("%s", word);

  // count the number of words in the given line of text before removing the given word
  token = strtok(line, " ");
  while (token != NULL) {
    count_before++;
    token = strtok(NULL, " ");
  }

  // remove all occurrences of the given word from the input line of text
  for (int i = 0; i < strlen(line); i++) {
    if (strncmp(line + i, word, strlen(word)) == 0) {
      strcpy(line + i, line + i + strlen(word));
      i -= strlen(word);
    }
  }

  // count the number of words in the given line of text after removing the given word
  token = strtok(line, " ");
  while (token != NULL) {
    count_after++;
    token = strtok(NULL, " ");
  }

  printf("Number of words before removing '%s': %d\n", word, count_before);
  printf("Number of words after removing '%s': %d\n", word, count_after);
  printf("Line of text after removing '%s': %s", word, line);

  return 0;
}
