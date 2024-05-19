#include <stdio.h>
#include <ctype.h>

int main(void) {
  char c;
  
  printf("Enter a character: ");
  scanf("%c", &c);
  
  if (isdigit(c)) {
    printf("The character is a digit.\n");
  } else {
    printf("The character is not a digit.\n");
  }
  
  return 0;
}
