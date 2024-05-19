//Toni Hunter 187009925
//ASSIGNMENT 5 PROGRAM 2
//
// Write a code to count the number of words (any token separated by space) from the file.
//
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char data[5000];
    int WCount = 0;
    FILE *cfptr;
    cfptr = fopen("C_Language.txt", "r");

   if(cfptr == NULL) // check for file existience
   {
     printf("FNF!");
   }

   else
   {
       while (!feof(cfptr)) // not EOF
       {
               fgets(data, 5000, cfptr); // reads line from cfptr and stores in data
               char *tokenptr = strtok(data, "\n "); // assigns tokenptr to first token in data seprated by \n and space

               while (tokenptr != NULL) // continue tokenizing until NULL
               {
                 WCount++;
                 tokenptr = strtok(NULL, "\n "); //get next token
               }
       }
       printf("The number of words present in the file: %d\n", WCount);
   }

}
