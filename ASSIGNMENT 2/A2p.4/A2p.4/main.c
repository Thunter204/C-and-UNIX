//Toni Hunter 180009925
//Assignment 2: Program 4
//
//A program that simulates coin tossing 50,000 times. Heads and tails is recorded and printed out
//and also a percentage of each is printed out.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //function prototype for time

int main()
{
    srand(time(NULL)); // randomizes based on clock to obtain seed
    int frequencyH = 0; //initialized tossed head counter
    int frequencyT = 0; //initialized tosses tails counter
    float percentageH;
    float percentageT;

    for (unsigned int toss = 1; toss <= 50000; toss++){
        int coin = 1 + rand() % 2; //random number 1 to 2 since H and T

        switch(coin){

        case 1: //tossed head
            frequencyH++;
            break;

        case 2: //tossed tails
            frequencyT++;
            break;

        }
    }
    percentageH = (frequencyH/50000.0) * 100;
    percentageT = (frequencyT/50000.0) * 100;



    printf(" %s|%11s|%11s\n", "Side", "frequency", "Percentage");
    printf("-----|-----------|------------\n");
    printf("Tails| %10u|%10.2f\n", frequencyT, percentageT);
    printf("Heads| %10u|%10.2f\n", frequencyH, percentageH);
}
