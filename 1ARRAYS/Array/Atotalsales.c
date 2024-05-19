#include <stdio.h>

#define NUM_SALESPEOPLE 4  // Number of salespeople
#define NUM_PRODUCTS 5  // Number of products

int main() {
  // Declare and initialize the two-dimensional array to store the total sales
  int sales[NUM_SALESPEOPLE][NUM_PRODUCTS] = {0};

  // Read in the sales slips for last month
  printf("Enter the sales slips for last month:\n");
  printf("Format: salesperson product total_sales\n");
  printf("Enter -1 -1 -1 to stop.\n");
  while (1) {
    int salesperson, product, total_sales;
    scanf("%d%d%d", &salesperson, &product, &total_sales);
    if (salesperson == -1 && product == -1 && total_sales == -1) {
      break;
    }
    sales[salesperson - 1][product - 1] += total_sales;
  }

  // Print the results in tabular format
  printf("\tProduct 1\tProduct 2\tProduct 3\tProduct 4\tProduct 5\n");
  for (int i = 0; i < NUM_SALESPEOPLE; i++) {
    printf("Salesperson %d\t", i + 1);
    for (int j = 0; j < NUM_PRODUCTS; j++) {
      printf("%d\t\t", sales[i][j]);
    }
    printf("\n");
  }

  return 0;
}
