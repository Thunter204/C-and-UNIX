/*Write a program that uses function strcat to concatenate two
strings provided by the user. The program should print the strings before and after concatenating
as well as the length of the concatenated string*/

#include <stdio.h>
#include <string.h>

int main(void) {
char s1[100], s2[100], s3[200];
int s1_len, s2_len, s3_len;

printf("Enter the first string: ");
fgets(s1, sizeof(s1), stdin);
// Remove the newline character from the string
s1[strcspn(s1, "\n")] = 0;

printf("Enter the second string: ");
fgets(s2, sizeof(s2), stdin);
// Remove the newline character from the string
s2[strcspn(s2, "\n")] = 0;

// Concatenate s1 and s2 and store the result in s3
strcpy(s3, s1);
strcat(s3, s2);

// Get the lengths of each string
s1_len = strlen(s1);
s2_len = strlen(s2);
s3_len = strlen(s3);

printf("s1: %s (length: %d)\n", s1, s1_len);
printf("s2: %s (length: %d)\n", s2, s2_len);
printf("s3: %s (length: %d)\n", s3, s3_len);

return 0;
}




