#include <stdio.h>

// Recursive function to print a string backward
void stringReverse(char str[]) {
  // Base case: If the character is the null terminator, stop processing and return
  if (str[0] == '\0') {
    return;
  }

  // Recursively print the rest of the string
  stringReverse(str + 1);

  // Print the first character of the string
  printf("%c", str[0]);
}

int main() {
  // Declare and initialize the string
  char str[] = "Hello, world!";

  // Print the string backward
  printf("String backward: ");
  stringReverse(str);
  printf("\n");

  return 0;
}
