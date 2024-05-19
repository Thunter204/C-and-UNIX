#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000

int main(void) {
  char line[MAX_LINE_LENGTH];
  char search_string[MAX_LINE_LENGTH];
  printf("Enter a search string: ");
  fgets(search_string, MAX_LINE_LENGTH, stdin);

  // Total occurrences of the search string
  int total_occurrences = 0;

  // Read lines of text until EOF is reached
  while (fgets(line, MAX_LINE_LENGTH, stdin) != NULL) {
    // Locate the first occurrence of the search string in the line of text
    char *search_ptr = strstr(line, search_string);
    while (search_ptr != NULL) {
      // Increment the total occurrences of the search string
      total_occurrences++;
      // Locate the next occurrence of the search string in the line of text
      search_ptr = strstr(search_ptr + 1, search_string);
    }
  }

  // Print the total occurrences of the search string
  printf("Total occurrences: %d\n", total_occurrences);

  return 0;
}
