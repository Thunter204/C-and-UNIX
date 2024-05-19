// Toni Hunter 180009925
//Assignment 2: Project 2
//
//Simulating the game of craps. except adding a wager for user
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // contains prototype for function time

// enumeration constants represent game status
enum Status { CONTINUE, WON, LOST };


int rollDice(void); // function prototype
//int Craps(void); //function prototype

int main(void)
{
    int Wager;
    int Balance = 2000; //initial bank balance


    printf("Rules to Craps!:\n1.Two dices are required to play and a player rolls two six-sided dice and adds the numbers rolled together.\n2.If on the first roll a player encounters a total of 7 or 11 the player automatically wins,\nand if the player rolls a total of 2, 3, or 12 the player automatically loses, and play is over.\n3.If a player rolls a total of 4, 5, 6, 8, 9, or 10 on their first roll, that number becomes the point.\nThen the player continues to roll the two dice again until one of two things happens \neither they roll the point again, in which case they win, or they roll a 7, in which case they lose.\n");
    printf("\nYour initial bank balance is $%d\n", Balance);
    printf("please Enter your wager: ");
    scanf("%d", &Wager);
    printf("\n");

    while (Wager > Balance)
    {
        printf("\nWager is too high, please enter a lower wager: ");
        scanf("%d", &Wager);
    }
    while (Wager != -1)
    {
        int Crap = Craps();
        if (Crap == 1)
        {
            printf("\nYour Balance is now $%d. Now we're talking!\n", Balance += Wager);
        }
        if (Crap == 2)
        {
            printf("Your Balance is now $%d. Want to keep going?\n", Balance -= Wager);
        }
        if (Balance == 0){
            printf("Sorry, you're broke!\n");
            break;
        }
        printf("\nPlease enter new wager to play again or -1 to quit: ");
        scanf("%d", &Wager);
        while (Wager > Balance)
        {
            printf("\nWager is too high, please enter a lower wager: ");
            scanf("%d", &Wager);
        }
    }
    printf("\nYour total winnings are $%d. Play again sometime!", Balance);
}

int Craps(void)
{
   // randomize random number generator using current time
   srand(time(NULL));

   int myPoint; // player must make this point to win
   enum Status gameStatus; // can contain CONTINUE, WON, or LOST
   int sum = rollDice(); // first roll of the dice

   // determine game status based on sum of dice
   switch(sum) {

      // win on first roll
      case 7: // 7 is a winner
      case 11: // 11 is a winner
         gameStatus = WON;
         break;

      // lose on first roll
      case 2: // 2 is a loser
      case 3: // 3 is a loser
      case 12: // 12 is a loser
         gameStatus = LOST;
         break;

      // remember point
      default:
         gameStatus = CONTINUE; // player should keep rolling
         myPoint = sum; // remember the point
         printf("Point is %d\n", myPoint);
         break; // optional
   }

   // while game not complete
   while (CONTINUE == gameStatus) { // player should keep rolling
      sum = rollDice(); // roll dice again

      // determine game status
      if (sum == myPoint) { // win by making point
         gameStatus = WON;
      }
      else {
         if (7 == sum) { // lose by rolling 7
            gameStatus = LOST;
         }
      }
   }

   // display won or lost message
   if (WON == gameStatus) { // did player win?
      puts("Player wins");
      return gameStatus;
   }
   else { // player lost
      puts("Player loses");
      return gameStatus;
   }
}

// roll dice, calculate sum and display results
int rollDice(void)
{
   int die1 = 1 + (rand() % 6); // pick random die1 value
   int die2 = 1 + (rand() % 6); // pick random die2 value

   // display results of this roll
   printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
   return die1 + die2; // return sum of dice
}

