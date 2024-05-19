#include <stdio.h>
#include <math.h>

// Function prototypes
void calculateCircumference(double radius);
void calculateArea(double radius);
void calculateVolume(double radius);

int main(void) {
  // Array of function pointers
  void (*calculations[])(double) = {calculateCircumference, calculateArea, calculateVolume};

  // Display menu and get choice from user
  int choice;
  printf("1. Calculate circumference of a circle\n");
  printf("2. Calculate area of a circle\n");
  printf("3. Calculate volume of a sphere\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);

  // Input radius from user
  double radius;
  printf("Enter radius: ");
  scanf("%lf", &radius);

  // Call the function specified by the user's choice
  (*calculations[choice - 1])(radius);

  return 0;
}

// Function to calculate and display the circumference of a circle
void calculateCircumference(double radius) {
  double circumference = 2 * M_PI * radius;
  printf("Calculating circumference...\n");
  printf("Radius: %.2lf\n", radius);
  printf("Circumference: %.2lf\n", circumference);
}

// Function to calculate and display the area of a circle
void calculateArea(double radius) {
  double area = M_PI * radius * radius;
  printf("Calculating area...\n");
  printf("Radius: %.2lf\n", radius);
  printf("Area: %.2lf\n", area);
}

// Function to calculate and display the volume of a sphere
void calculateVolume(double radius) {
  double volume = (4.0 / 3.0) * M_PI * radius * radius * radius;
  printf("Calculating volume...\n");
  printf("Radius: %.2lf\n", radius);
  printf("Volume: %.2lf\n", volume);
}
