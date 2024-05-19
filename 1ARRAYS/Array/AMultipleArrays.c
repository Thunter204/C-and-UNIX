#include <stdio.h>

#define ARRAY_SIZE 20  // Number of elements in the array

int main() {
  // Declare the array
  double sales[ARRAY_SIZE];

  // Read the elements of the array from the keyboard
  for (int i = 0; i < ARRAY_SIZE; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%lf", &sales[i]);
  }

  return 0;
}
#include <stdio.h>

#define ARRAY_SIZE 75  // Number of elements in the array

int main() {
  // Declare and initialize the array
  double allowance[ARRAY_SIZE] = {0};

  // Add 1000 to each element of the array
  for (int i = 0; i < ARRAY_SIZE; i++) {
    allowance[i] += 1000;
  }

  return 0;
}
#include <stdio.h>

#define ARRAY_SIZE 50  // Number of elements in the array

int main() {
  // Declare the array
  int numbers[ARRAY_SIZE];

  // Initialize the array to zero
  for (int i = 0; i < ARRAY_SIZE; i++) {
    numbers[i] = 0;
  }

  return 0;
}
#include <stdio.h>

#define ARRAY_SIZE 10  // Number of elements in the array

int main() {
  // Declare and initialize the array
  int GPA[ARRAY_SIZE] = {0};

  // Print the elements of the array in column format
  for (int i = 0; i < ARRAY_SIZE; i++) {
    printf("GPA[%d] = %d\n", i, GPA[i]);
  }

  return 0;
}



