//Toni Hunter 187009925
//ASSIGNMENT 4 PROJECT 1
//
// Take two strings from user (no larger than 20 characters), pass the strings as pointers
// to the concatenate function.
//
#include <stdio.h>

void Catfun(char*, char*, char*); //function prototype, character pointer is argument type

int main(void)
{
   char str1[21] = {0}; //character named str1, 11 makes space for \0
   char str2[21] = {0};
   char fin[41] = {0};


   printf("Please enter your first string: \n"); //user input
   scanf("%20s", str1);
   printf("Please enter your second string: \n");
   scanf("%20s", str2);

   Catfun(str1, str2, fin);
   printf("Your concatenated string is: %s\n", fin);

}

//DEREFRENCING *: to retrieve the value from the memory address that is pointed by the pointer
//character pointer named p1 is set to the address of str1
void Catfun(char*p1, char*p2, char*f3)
{
    while(*p1 != '\0') //dereference increments through address of str1 to get to null char
    {
        *(f3++)=*(p1++);
    }
    //p1 is pointing to \0 at the end of this while loop

    // once the end of address one is reached, values in p2's address are stored in p1's address
    //this is done by continuing to increment through p1 to elongate it and incrementing through
    //p2. p2's values are stored in p1.

    while(*p2 != '\0')
    {
        *(f3++)=*(p2++);
    }
    *f3 = '\0';  //the while loop terminates at null of p2 so null char is added to the end of p1
}
