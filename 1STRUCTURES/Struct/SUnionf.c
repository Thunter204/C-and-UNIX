/* Create union floatingPoint with members float f, double d and long
double x. Write a program that inputs values of type float, double and long double and stores the
values in union variables of type union floatingPoint. Each union variable should be printed as a
float, a double and a long double*/

#include <stdio.h>

union floatingPoint {
    float f;
    double d;
    long double x;
};

int main(void)
{
    union floatingPoint y;

    // Input and store a float value in the union variable
    printf("Enter a float value: ");
    scanf("%f", &y.f);
    printf("y.f (float) = %f\n", y.f);
    printf("y.d (double) = %lf\n", y.d);
    printf("y.x (long double) = %Lf\n", y.x);

    // Input and store a double value in the union variable
    printf("\nEnter a double value: ");
    scanf("%lf", &y.d);
    printf("y.f (float) = %f\n", y.f);
    printf("y.d (double) = %lf\n", y.d);
    printf("y.x (long double) = %Lf\n", y.x);

    // Input and store a long double value in the union variable
    printf("\nEnter a long double value: ");
    scanf("%Lf", &y.x);
    printf("y.f (float) = %f\n", y.f);
    printf("y.d (double) = %lf\n", y.d);
    printf("y.x (long double) = %Lf\n", y.x);

    return 0;
}
