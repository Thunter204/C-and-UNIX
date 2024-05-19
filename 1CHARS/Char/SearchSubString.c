#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000

int main(void) {
  char line[MAX_LINE_LENGTH];
  char search_string[MAX_LINE_LENGTH];
  printf("Enter a line of text: ");
  fgets(line, MAX_LINE_LENGTH, stdin);
  printf("Enter a search string: ");
  fgets(search_string, MAX_LINE_LENGTH, stdin);

  // Locate the first occurrence of the search string in the line of text
  char *search_ptr = strstr(line, search_string);
  if (search_ptr != NULL) {
    // Print the remainder of the line of text beginning with the search string
    printf("%s", search_ptr);
  } else {
    printf("Search string not found in line of text\n");
  }

  // Locate the second occurrence of the search string in the line of text
  search_ptr = strstr(search_ptr + 1, search_string);
  if (search_ptr != NULL) {
    // Print the remainder of the line of text beginning with the second occurrence of the search string
    printf("%s", search_ptr);
  } else {
    printf("Second occurrence of search string not found in line of text\n");
  }

  return 0;
}
