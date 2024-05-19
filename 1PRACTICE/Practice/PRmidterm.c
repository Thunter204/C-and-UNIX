#include <stdio.h>

// Function prototype
double findSum(int n);

int main() {
  int n;

  // Read input from the user
  printf("Enter a number (not greater than 50): ");
  scanf("%d", &n);

  // Print the sum of the series up to the Kth term
  printf("Sum of series up to K%d = %.2lf\n", n, findSum(n));

  return 0;
}

// Function definition
double findSum(int n) {
  double sum = 0;

  // Loop through the terms of the series and add them to the sum
  for (int i = 1; i <= n; i++) {
    sum += (i * i + 1) / (i * 2 + 1);
  }

  return sum;
}
