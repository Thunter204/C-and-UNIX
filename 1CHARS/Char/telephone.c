#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  // String containing the telephone number
  char phone_number[] = "(212) 555-1212";

  // Extract the area code
  char *area_code = strtok(phone_number, ") ");
  // Extract the first three digits of the phone number
  char *first_three = strtok(NULL, "-");
  // Extract the last four digits of the phone number
  char *last_four = strtok(NULL, "-");

  // Concatenate the seven digits of the phone number into one string
  char phone_number_seven_digits[8];
  strcpy(phone_number_seven_digits, first_three);
  strcat(phone_number_seven_digits, last_four);

  // Convert the area code string to an integer
  int area_code_int = atoi(area_code);
  // Convert the phone number string to a long
  long phone_number_long = atol(phone_number_seven_digits);

  // Print the area code and phone number
  printf("Area code: %d\n", area_code_int);
  printf("Phone number: %ld\n", phone_number_long);

  return 0;
}
