#include <stdio.h>

// Recursive function to print an array
void printArray(int array[], int size) {
  // Base case: If the size is 0, stop processing and return
  if (size == 0) {
    return;
  }

  // Print the first element of the array
  printf("%d ", array[0]);

  // Recursively print the rest of the array
  printArray(array + 1, size - 1);
}

int main() {
  // Declare and initialize the array
  int array[5] = {1, 2, 3, 4, 5};

  // Print the array
  printf("Array: ");
  printArray(array, 5);
  printf("\n");

  return 0;
}
