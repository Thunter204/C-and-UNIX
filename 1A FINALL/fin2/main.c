//Toni Hunter 187009925
//FINAL Q2
//
//count the frequency of elements in an array of any size(greater than zero).

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num; //number of elements in the array, user input

    printf("Please enter number of elements to be stored into the array: ");
    scanf("%d", &num);

    while (num > 0)
    {
        int array[num]; //initialize to user input size, must be after scanf to work
        for (int i = 0; i < num; i++) //starts at index zero until num is reached
        {
            printf("element %d: ", i);
            scanf("%d", &array[i]); //set element at location i (starts at 0) to i
        }

        printf("the frequency of all the elements of the array: \n");



        for (int i = 0; i < num; ++i)
        {
            int count = 0; //initializes count to 0 for the array
            for (int j = 0; j < num; ++j)
            {
                if (array[j] == array[i])
                {
                    count++; //increments count for each element
                }
            }
            printf("%d occurs %d times.\n", array[i], count);
        }

    }
    printf("Please enter an array size larger than 0!");

}
