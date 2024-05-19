// Fig. 8.20: fig08_20.c
// Using function strchr
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE* clPtr;
    char str[600];
    int count = 0;

    if ((clPtr = fopen("C_Language.txt", "r")) == NULL)
    {
        puts("File could nit be opened.")
    }

    else
    {
        while (!feof(clPtr))
        {
            char string[] = fgets(clPtr)
            char *tokenPtr = strtok(string, " ");

            while (token != NULL)
            {
                printf("%s\n", tokenPtr);
                count++;
            }
        }
    }
}














/*int main(void)
{
    FILE* ptr;
    char ch;

    // Opening file in reading mode
    ptr = fopen("C_Language.txt", "r");

    if (NULL == ptr) {
        printf("file can't be opened \n");
    }

    printf("content of this file are: \n");

    // Printing what is written in file
    // character by character using loop.
    do {
        ch = fgetc(ptr);
        printf("%c", ch);

        // Checking if character is not EOF.
        // If it is EOF stop Reading.
    } while (ch != EOF);

    // Closing the file
    fclose(ptr);
    return 0;
}*/

