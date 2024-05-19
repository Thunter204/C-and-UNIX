#include <stdio.h>

#define NUM_ROWS 3  // Number of rows in the matrices
#define NUM_COLUMNS 3  // Number of columns in the matrices

int main() {
  // Declare the matrices
  int matrix1[NUM_ROWS][NUM_COLUMNS] = {0};
  int matrix2[NUM_ROWS][NUM_COLUMNS] = {0};
  int matrix3[NUM_ROWS][NUM_COLUMNS] = {0};

  // Read in the elements of matrix1
  printf("Enter the elements of matrix1:\n");
  for (int i = 0; i < NUM_ROWS; i++) {
    for (int j = 0; j < NUM_COLUMNS; j++) {
      scanf("%d", &matrix1[i][j]);
    }
  }

  // Read in the elements of matrix2
  printf("Enter the elements of matrix2:\n");
  for (int i = 0; i < NUM_ROWS; i++) {
    for (int j = 0; j < NUM_COLUMNS; j++) {
      scanf("%d", &matrix2[i][j]);
    }
  }

  // Calculate the product of the matrices and store the result in matrix3
  for (int i = 0; i < NUM_ROWS; i++) {
    for (int j = 0; j < NUM_COLUMNS; j++) {
      for (int k = 0; k < NUM_COLUMNS; k++) {
        matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
      }
    }
  }

  // Print the resulting matrix
  printf("Resulting matrix:\n");
  for (int i = 0; i < NUM_ROWS; i++) {
    for (int j = 0; j < NUM_COLUMNS; j++) {
      printf("%d ", matrix3[i][j]);
    }
    printf("\n");
  }

  return 0;
}
