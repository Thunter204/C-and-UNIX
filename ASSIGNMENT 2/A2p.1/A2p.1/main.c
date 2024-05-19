//Toni Hunter 180009925
//Assignment 2: Project 1
//
//Write a program that will produce 2 randomized numbers to multiply, then asks user for answer input
//if input is correct, another question is asked and if incorrect, user is asked repeatedly for the answer
//until correct
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int mult(void); //function prototype

int main(void)
{
    srand(time(NULL));

    int user; //user's answer
    int answer = mult(); // multiplies numbers
    scanf("%d", &user); //first scan


    while (user != -1) //sentinel
    {
        while (user != answer){
            printf("No. Please try again!\n");
            scanf("%d", &user);
        }
    if (user == answer){ //if user is correct
        printf("Very good!!");
        answer = mult();
        scanf("%d", &user);
    }

    }
    if (user == -1){ // sentinel reached
        printf("Keep up the good work!");
    }
}


int mult(void)
{
    int user; //user's answer
    int num1 = (10 + rand()  %89); //double digits only
    int num2 = (10 + rand()  %89);

    printf("How much is %d times %d?\n" ,num1, num2); //first question

    return num1 * num2; // return product of two numbers
}
