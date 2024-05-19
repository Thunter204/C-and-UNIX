/*Write two versions of
each of the string-copy and string-concatenation functions in Fig. 8.14. The first version should use
array indexing, and the second should use pointers and pointer arithmetic.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[20] = "Hello";
    char str4[20] = "World";
    // string copy with no pointes  
    strcpy(str1, str2);
    printf("strcpy: %s\n", str1); // prints "World"

    strcat(str1, str2);
    printf("strcat: %s\n", str1); // prints "WorldWorld"

    strcpy_array(str3, str4);
    printf("strcpy_array: %s\n", str3); // prints "World"

    strcat_array(str3, str4);
    printf("strcat_array: %s\n", str3); // prints "WorldWorld"

    return 0;
}

    // string pointer and concatinate with pointers

    char* strcpy_array(char dest[], const char src[])
{
    int i;
    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}

char* strcat_array(char dest[], const char src[])
{
    int i, j;
    for (i = 0; dest[i] != '\0'; i++);
    for (j = 0; src[j] != '\0'; j++)
        dest[i + j] = src[j];
    dest[i + j] = '\0';
    return dest;
}

char* strcpy_ptr(char* dest, const char* src)
{
    char* p = dest;
    while (*src != '\0')
        *dest++ = *src++;
    *dest = '\0';
    return p;
}

char* strcat_ptr(char* dest, const char* src)
{
    char* p =


}

