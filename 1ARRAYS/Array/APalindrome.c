#include <ctype.h>
#include <stdio.h>

#define MAX_LENGTH 100  // Maximum length of the string

// Recursive function to test if a string is a palindrome
int testPalindrome(char str[], int start, int end) {
  // Base case: If the start and end indices are the same or the next index, the string is a palindrome
  if (start >= end || start + 1 == end) {
    return 1;
  }

  // Ignore spaces and punctuation in the string
  while (!isalpha(str[start]) && start < end) {
    start++;
  }
  while (!isalpha(str[end]) && start < end) {
    end--;
  }

  // Check if the characters at the start and end indices are the same
  if (tolower(str[start]) != tolower(str[end])) {
    return 0;
  }

  // Recursively check the rest of the string
  return testPalindrome(str, start + 1, end - 1);
}

int main() {
  // Declare and read in the string
  char str[MAX_LENGTH] = {0};
 
