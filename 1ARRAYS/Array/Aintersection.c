#include <stdio.h>

#define SET_SIZE 10  // Number of elements in each set
#define MAX_ELEMENT 50  // Maximum possible value for an element in a set

int main() {
  // Declare and initialize the arrays to store the sets
  int set1[SET_SIZE] = {0};
  int set2[SET_SIZE] = {0};

  // Read in the elements of the first set
  printf("Enter the elements of the first set:\n");
  for (int i = 0; i < SET_SIZE; i++) {
    scanf("%d", &set1[i]);
  }

  // Read in the elements of the second set
  printf("Enter the elements of the second set:\n");
  for (int i = 0; i < SET_SIZE; i++) {
    scanf("%d", &set2[i]);
  }

  // Declare and initialize an array to store the unique elements in the intersection of the sets
  int unique_elements[MAX_ELEMENT + 1] = {0};

  // Mark the elements that appear in both sets as present in the unique elements array
  for (int i = 0; i < SET_SIZE; i++) {
    for (int j = 0; j < SET_SIZE; j++) {
      if (set1[i] == set2[j]) {
        unique_elements[set1[i]] = 1;
      }
    }
  }

  // Print the unique elements in the intersection of the sets
  printf("Unique elements in the intersection of the sets:\n");
  for (int i = 0; i <= MAX_ELEMENT; i++) {
    if (unique_elements[i]) {
      printf("%d ", i);
    }
  }
  printf("\n");

  return 0;
}
