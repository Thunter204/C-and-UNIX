/* Write two versions of each string-comparison function in Fig. 8.17. The first version should use array indexing, and the second should
use pointers and pointer arithmetic.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[] = "Hello";
    char str4[] = "World";

    printf("strcmp_array: %d\n", strcmp_array(str1, str2)); // prints -1
    printf("strncmp_array: %d\n", strncmp_array(str1, str2, 3)); // prints 0

    printf("strcmp_ptr: %d\n", strcmp_ptr(str3, str4)); // prints -1
    printf("strncmp_ptr: %d\n", strncmp_ptr(str3, str4, 3)); // prints 0

    return 0;
}
