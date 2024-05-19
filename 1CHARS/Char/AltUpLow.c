/*(Displaying Strings in Alternating Uppercase and Lowercase) Write a program that inputs
a line of text into char array s[100]. Output the line in alternate uppercase letters and lowercase letters.*/

#include <stdio.h>
#include <ctype.h>

int main(void) {
char s[100];
int i;

printf("Enter a line of text: ");
fgets(s, sizeof(s), stdin);

for (i = 0; s[i] != '\0'; i++) {
if (i % 2 == 0) {
// Print even-indexed characters in uppercase
printf("%c", toupper(s[i]));
} else {
// Print odd-indexed characters in lowercase
printf("%c", tolower(s[i]));
}
}

return 0;
}




