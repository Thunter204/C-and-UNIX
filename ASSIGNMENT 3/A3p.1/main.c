//Toni Hunter 187009925
//ASSIGNMENT 3 PROGRECT 1
// Program simulates the rolling of two dice, rolling 36000 times. Calculate the sum of the two die
// use one dimensional array to tally the number of times each possible sum appears, print in tubular format.
//
#include <stdio.h>
#include <time.h>

int main(void)
{
    srand(time(NULL)); // seed random number generator
    int array[20] = {};

    for (int i=1; i <= 36000; i++)
    {
        int roll1 = (1 + rand() % 6);
        int roll2 = (1 + rand() % 6);
        int sum = roll1 + roll2;
        array[sum]++;
    }

    printf("| %s |%6s |\n", "Roll", "Sums");
    printf("|------|-------|\n");

    for(int i=2; i<=9; i++)
    {
        printf("|%d     |   %d|\n",i, array[i]);
    }
    for (int i =10; i <=12; i++)
    {
        printf("|%d    |   %d|\n",i, array[i]); //double digits mess up the formatting a bit
    }
}
