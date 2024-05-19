#include <stdio.h>

// Recursive linear search function
int linearSearch(int array[], int size, int key) {
  // Base case: If the size is 0, the key was not found
  if (size == 0) {
    return -1;
  }

  // Check if the key is at the first element of the array
  if (array[0] == key) {
    return 0;
  }

  // Recursively search the rest of the array
  int index = linearSearch(array + 1, size - 1, key);
  if (index == -1) {  // If the key was not found, return -1
    return -1;
  } else {  // If the key was found, add 1 to the index to account for the offset
    return index + 1;
  }
}

int main() {
  // Declare and initialize the array
  int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  // Read in the search key
  int key;
  printf("Enter the search key: ");
  scanf("%d", &key);

  // Search the array for the key
  int index = linearSearch(array, 10, key);
  if (index == -1) {
    printf("Key not found.\n");
  } else {
    printf("Key found at index %d.\n", index);
  }

  return 0;
}
