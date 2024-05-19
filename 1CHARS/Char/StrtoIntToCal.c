/*(Converting Strings to Integers for Calculations) Write a program that inputs six strings
that represent integers, converts the strings to integers, and calculates the sum and average of the
six values.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
char s1[10], s2[10], s3[10], s4[10], s5[10], s6[10];
int num1, num2, num3, num4, num5, num6;
int sum, average;

printf("Enter six integers: ");
scanf("%s%s%s%s%s%s", s1, s2, s3, s4, s5, s6);

// Convert strings to integers using atoi
num1 = atoi(s1);
num2 = atoi(s2);
num3 = atoi(s3);
num4 = atoi(s4);
num5 = atoi(s5);
num6 = atoi(s6);

// Calculate sum and average
sum = num1 + num2 + num3 + num4 + num5 + num6;
average = sum / 6;

printf("Sum: %d\n", sum);
printf("Average: %d\n", average);

return 0;
}




