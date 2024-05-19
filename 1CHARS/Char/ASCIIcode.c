/*Write a program that inputs an ASCII code and
prints the corresponding character*/
#include <stdio.h>

int main() {
int ascii_code;

printf("Enter an ASCII code: ");
scanf("%d", &ascii_code);

printf("The corresponding character is '%c'\n", ascii_code);

return 0;
}