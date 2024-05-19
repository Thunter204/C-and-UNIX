/*Write a program that reads a series of strings and prints only
those beginning with the letters "Th".*/
#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 100

int main() {
char strings[MAX_STRINGS][64];
int num_strings = 0;

// Read in a series of strings
printf("Enter a series of strings (up to %d):\n", MAX_STRINGS);
while (num_strings < MAX_STRINGS && scanf("%63s", strings[num_strings]) == 1) {
num_strings++;
}

// Print only those strings beginning with "Th"
printf("Strings beginning with 'Th':\n");
for (int i = 0; i < num_strings; i++) {
if (strncmp(strings[i], "Th", 2) == 0) {
printf("%s\n", strings[i]);
}
}

return 0;
}




