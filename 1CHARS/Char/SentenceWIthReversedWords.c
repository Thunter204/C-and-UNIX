#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000

int main(void) {
  char line[MAX_LINE_LENGTH];
  printf("Enter a line of text: ");
  fgets(line, MAX_LINE_LENGTH, stdin);

  // Tokenize the line of text
  char *token = strtok(line, " ");
  char *tokens[MAX_LINE_LENGTH];
  int i = 0;
  while (token != NULL) {
    tokens[i++] = token;
    token = strtok(NULL, " ");
  }

  // Output the tokens in reverse order
  for (int j = i - 1; j >= 0; j--) {
    printf("%s ", tokens[j]);
  }
  printf("\n");

  return 0;
}
