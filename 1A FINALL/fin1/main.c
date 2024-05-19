//Toni Hunter 187009925
//FINAL Q1
//
//Two functions: average, mode with 1 dimensional array of integers and the size of the array as parameters.
//Average should return number as float, Mode should return int.

#include <stdio.h>


//prototypes
float average(int array[], int num);
int mode(int array[], int num);

int main(void)
{
    int num; // number of elements, user input

    printf("Please input the number of elements to be stored in the array: ");
    scanf("%d", &num);

    printf("input %d elements into the array: \n", num);
    printf("\n");

    int array[num]; //initialize to user input size, must be after scanf to work
    for (int i = 0; i < num; i++) //starts at index zero until num is reached
    {
        printf("element %d: ", i);
        scanf("%d", &array[i]); //set element at location i (starts at 0) to i
    }


     /*printf("\nEntered elements: \n");
     for (int i = 0; i < num; i++)
     {
        printf("%d \n", array[i]);
     }*/

     printf("\nAverage: %.1f", average(array, num)); //function call average
     printf("\nMode: %d", mode(array, num)); //function call num

}

float average(int array[], int num)
{
    int total = 0;

    // loop through the elements
    for ( int i = 0; i < num; i++ )
    {
        total += array[i]; // add elements in array
    }
    float avg = total / num; // calculates the average

    return avg; //returns double average
}

int mode(int array[], int num)
{
    int maxValue = 0;
    int maxCount = 0;

    for (int i = 0; i < num; ++i)
    {
        int count = 0; //initializes count to 0 for the array
        for (int j = 0; j < num; ++j)
        {
            if (array[j] == array[i])
            count++; //increments count for each element
        }
        if (count > maxCount)
        {
            maxCount = count; // sets maxcount to count
            maxValue = array[i]; // sets max element
       }
   }

   return maxValue;
}
