/*(Character Testing) Write a program that inputs a character from the keyboard and tests it
with each of the functions in the character-handling library. The program should print the value
returned by each function.*/

#include <stdio.h>
#include <ctype.h>

int main(void) {
char c;

printf("Enter a character: ");
c = getchar();

// Test each function in the character-handling library
printf("isalpha: %d\n", isalpha(c));
printf("isdigit: %d\n", isdigit(c));
printf("isalnum: %d\n", isalnum(c));
printf("isxdigit: %d\n", isxdigit(c));
printf("isspace: %d\n", isspace(c));
printf("isprint: %d\n", isprint(c));
printf("ispunct: %d\n", ispunct(c));
printf("isupper: %d\n", isupper(c));
printf("islower: %d\n", islower(c));
printf("toupper: %c\n", toupper(c));
printf("tolower: %c\n", tolower(c));

return 0;
}




