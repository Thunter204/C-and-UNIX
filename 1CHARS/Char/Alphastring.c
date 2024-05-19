/*Use the string-comparison functions and the techniques
for sorting arrays to write a program that alphabetizes a list of strings. Use the names of 10 or 15
towns in your area as data for your program */

#include <stdio.h>
#include <string.h>

#define NUM_TOWNS 15

int main() {
char towns[NUM_TOWNS][64] = { "Aberdeen", "Bellevue", "Covington", "Duvall", "Enumclaw", "Federal Way", "Gig Harbor", "Hunts Point", "Issaquah", "Kirkland", "Maple Valley", "Newcastle", "Olympia", "Puyallup", "Redmond" };
int i, j;

// Sort the array of towns in alphabetical order
for (i = 0; i < NUM_TOWNS - 1; i++) {
for (j = i + 1; j < NUM_TOWNS; j++) {
if (strcmp(towns[i], towns[j]) > 0) {
char temp[64];
strcpy(temp, towns[i]);
strcpy(towns[i], towns[j]);
strcpy(towns[j], temp);
}
}
}

// Print out the sorted list of towns
printf("Sorted list of towns:\n");
for (i = 0; i < NUM_TOWNS; i++) {
printf("%s\n", towns[i]);
}

return 0;
}




