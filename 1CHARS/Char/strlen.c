#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "World";

    printf("strlen_array: %zu\n", strlen_array(str1)); // prints 5
    printf("strlen_ptr: %zu\n", strlen_ptr(str2)); // prints 5

    return 0;
}
size_t strlen_array(const char s[])
{
    size_t i;
    for (i = 0; s[i] != '\0'; i++);
    return i;
}

size_t strlen_ptr(const char* s)
{
    const char* p = s;
    while (*p != '\0')
        p++;
    return p - s;
}
