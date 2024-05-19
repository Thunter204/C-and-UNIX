/*Write a program that uses function strncat to append part
of a string to another string. The program should input the strings, and the number of characters
to be appended, then display the first string and its length after the second string was appended*/

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




sammu.sunny@hotmail.com
Write a program that uses function strncat to append part
of a string to another string. The program should input the strings, and the number of characters
to be appended, then display the first string and its length after the second string was appended

#include <stdio.h>
#include <string.h>

int main(void) {
char s1[100], s2[100];
int num_chars, s1_len, s2_len;

printf("Enter the first string: ");
fgets(s1, sizeof(s1), stdin);
// Remove the newline character from the string
s1[strcspn(s1, "\n")] = 0;

printf("Enter the second string: ");
fgets(s2, sizeof(s2), stdin);
// Remove the newline character from the string
s2[strcspn(s2, "\n")] = 0;

printf("Enter the number of characters to append: ");
scanf("%d", &num_chars);

// Append the first num_chars characters of s2 to s1
strncat(s1, s2, num_chars);

// Get the lengths of the modified s1 and s2 strings
s1_len = strlen(s1);
s2_len = strlen(s2);

printf("s1: %s (length: %d)\n", s1, s1_len);
printf("s2: %s (length: %d)\n", s2, s2_len);

return 0;
}




