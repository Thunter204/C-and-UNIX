#include <stdio.h>

// Recursive function to find the minimum value in an array
int recursiveMinimum(int array[], int size) {
  // Base case: If the size is 1, return the only element in the array
  if (size == 1) {
    return array[0];
  }

  // Recursively find the minimum value in the rest of the array
  int min = recursiveMinimum(array + 1, size - 1);

  // Return the minimum of the first element and the minimum value of the rest of the array
  return array[0] < min ? array[0] : min;
}

int main() {
  // Declare and initialize the array
  int array[5] = {4, 2, 5, 1, 3};

  // Find the minimum value in the array
  int min = recursiveMinimum(array, 5);
  printf("Minimum value: %d\n", min);

  return 0;
}
