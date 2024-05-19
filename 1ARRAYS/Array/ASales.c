#include <stdio.h>

#define MIN_SALARY 200  // Minimum salary for salespeople
#define MAX_SALARY 999  // Maximum salary for salespeople
#define NUM_SALARY_RANGES 8  // Number of salary ranges

int main() {
  // Declare array of counters to track number of salespeople in each salary range
  int salary_ranges[NUM_SALARY_RANGES] = {0};

  // Read in sales data
  printf("Enter gross sales for each salesperson (-1 to end):\n");
  int gross_sales;
  scanf("%d", &gross_sales);
  while (gross_sales != -1) {
    // Calculate salary for this salesperson
    int salary = MIN_SALARY + 0.09 * gross_sales;

    // Increment the appropriate salary range counter
    if (salary > MAX_SALARY) {
      salary_ranges[NUM_SALARY_RANGES - 1]++;
    } else {
      salary_ranges[(salary - MIN_SALARY) / 100]++;
    }

    // Read in the next sales data
    scanf("%d", &gross_sales);
  }

  // Print the results
  printf("\nSalespeople earning salaries in each range:\n");
  for (int i = 0; i < NUM_SALARY_RANGES; i++) {
    int low = MIN_SALARY + 100 * i;
    int high = MIN_SALARY + 100 * (i + 1) - 1;
    printf("$%d-%d: %d\n", low, high, salary_ranges[i]);
  }

  return 0;
}
