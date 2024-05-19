#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Function strtod - Converts a string to double 
 char *stringPtr; // create char pointer
 double d = strtod(string, &stringPtr);

 printf("The string \"%s\" is converted to the\n", string);
 printf("double value %.2f and the string \"%s\"\n", d, stringPtr);

 // function strtol - converts string to long

 const char *string = "-1234567abc"; // initialize string pointer
 char *remainderPtr; // create char pointer
 long x = strtol(string, &remainderPtr, 0);

 printf("%s\"%s\"\n%s%ld\n%s\"%s\"\n%s%ld\n",
"The original string is ", string,
 "The converted value is ", x,
 "The remainder of the original string is ",
 remainderPtr,
 "The converted value plus 567 is ", x + 567);

 // strtoul -- converts string to unsigned long

 const char *string = "1234567abc"; // initialize string pointer
 char *remainderPtr; // create char pointer
 unsigned long int x = strtoul(string, &remainderPtr, 0);

 printf("%s\"%s\"\n%s%lu\n%s\"%s\"\n%s%lu\n",
"The original string is ", string,
"The converted value is ", x,
 "The remainder of the original string is ",
 remainderPtr,
 "The converted value minus 567 is ", x - 567);





}
