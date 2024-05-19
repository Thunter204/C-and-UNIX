/*Write your own versions of the functions in
Fig. 8.5 for converting strings to numbers.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "123";
    char* endptr;
    int num;
    long num_long;
    double num_double;

    num = stoi(str);
    printf("%d\n", num); // prints 123

    num_long = stol(str, &endptr, 10);
    printf("%ld\n", num_long); // prints 123

    num_double = stod(str, &endptr);
    printf("%f\n", num_double); // prints 123.000000

    return 0;
}
