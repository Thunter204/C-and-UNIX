/*Write a program that inputs a
line of text and counts the total numbers of vowels, consonants, digits and white spaces in the given
line of text*/

#include <stdio.h>
#include <ctype.h>

int main() {
  char ch;
  int vowels = 0, consonants = 0, digits = 0, spaces = 0;

  printf("Enter a line of text: ");
  while ((ch = getchar()) != '\n') {
    if (isalpha(ch)) {
      if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
          ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        vowels++;
      } else {
        consonants++;
      }
    } else if (isdigit(ch)) {
      digits++;
    } else if (isspace(ch)) {
      spaces++;
    }
  }

  printf("Vowels: %d\n", vowels);
  printf("Consonants: %d\n", consonants);
  printf("Digits: %d\n", digits);
  printf("Spaces: %d\n", spaces);

  return 0;
}
