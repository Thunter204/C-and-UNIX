//Toni Hunter 187009925
//FINAL Q3
//
//Delete or insert a value into an array (sorted, 7 elements max or smaller).

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int array[7]; // array with max size 7
    int num; //array size, user input
    char user;
    int val;

    printf("Please input the number of elements to be stored in the array: ");
    scanf("%d", &num);

    printf("input %d elements into the array: \n", num);
    printf("\n");

    while (num > 0 && num <= 7)
    {
        int array[num]; //initialize to user input size, must be after scanf to work
        for (int i = 0; i < num; i++) //starts at index zero until num is reached
        {
            printf("element %d: ", i);
            scanf("%d", &array[i]); //set element at location i (starts at 0) to i
        }

        printf("DELETE(D) or INSERT(I) or EXIT(E): ");
        scanf("%c", &user);

        if (user == 'D' || 'd')
        {
            printf("input value to be deleted: ");
            scanf("%d", val);

            printf("\nThe existing array is: \n");
            for (int i = 0; i < num; i++)
            {
                printf("%d ", array[i]);
            }

            printf("The array after the delete is: \n");

            for (int i = 0; i < num; i++)
            {
                if (array[i] == val)
                {
                    array[i] = array[i + 1];
                }
                num--;
                printf("%d ", array[i]);
            }






        }

        /*else if (user == 'I' || 'i')
        {

        }
        else if (user == 'E' || 'e')
        {
            break;
        }*/


    }

}

