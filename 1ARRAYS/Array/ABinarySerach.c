#include <stdio.h>

// Recursive binary search function
int binarySearch(int array[], int start, int end, int key) {
  // Base case: If the start and end indices are the same or the next index, the key was not found
  if (start >= end || start + 1 == end) {
    return -1;
  }

  // Calculate the midpoint of the array
  int mid = (start + end) / 2;

  // Check if the key is at the midpoint of the array
  if (array[mid] == key) {
    return mid;
  }

  // Recursively search either the left or right half of the array
  if (key < array[mid]) {
    return binarySearch(array, start, mid, key);
  } else {
    return binarySearch(array, mid, end, key);
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
  int index = binarySearch(array, 0, 10, key);
  if (index == -1) {
    printf("Key not found.\n");
  } else {
    printf("Key found at index %d.\n", index);
  }

  return 0;
}
