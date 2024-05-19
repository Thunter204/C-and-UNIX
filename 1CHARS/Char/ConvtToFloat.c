/*(Converting Strings to Floating Point for Calculations) Write a program that inputs six
strings that represent floating-point values, converts the strings to double values, stores the values
into a double array and calculates the sum, and average of the values*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
char s1[10], s2[10], s3[10], s4[10], s5[10], s6[10];
double nums[6];
double sum = 0.0, average;
int i;

printf("Enter six floating-point values: ");
scanf("%s%s%s%s%s%s", s1, s2, s3, s4, s5, s6);

// Convert strings to double values using atof
nums[0] = atof(s1);
nums[1] = atof(s2);
nums[2] = atof(s3);
nums[3] = atof(s4);
nums[4] = atof(s5);
nums[5] = atof(s6);

// Calculate sum and average
for (i = 0; i < 6; i++) {
sum += nums[i];
}
average = sum / 6;

printf("Sum: %.2lf\n", sum);
printf("Average: %.2lf\n", average);

return 0;
}




