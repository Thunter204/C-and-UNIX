#include <stdio.h>

#define ARRAY_SIZE 10  // Number of elements in the array

int main() {
  // Declare and initialize the array to be sorted
  int arr[ARRAY_SIZE] = {5, 3, 9, 1, 6, 8, 2, 4, 0, 7};

  // Selection sort
  for (int i = 0; i < ARRAY_SIZE; i++) {
    // Find the smallest value in the unsorted portion of the array
    int min_index = i;
    for (int j = i + 1; j < ARRAY_SIZE; j++) {
      if (arr[j] < arr[min_index]) {
        min_index = j;
      }
    }

    // Swap the smallest value with the value at the current position
    int temp = arr[i];
    arr[i] = arr[min_index];
    arr[min_index] = temp;
  }

  // Print the sorted array
  printf("Sorted array: ");
  for (int i = 0; i < ARRAY_SIZE; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
