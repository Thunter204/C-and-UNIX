/*Write a C program that declares and initializes an array of 10 integers
 to the following values: 1, 0, 3, 0, 5, 0, 7, 0, 9, 0.
  Then the program should print the array.*/

#include <stdio.h>

int main(void){

    int array[10] = {1,0,3,0,5,0,7,0,9,0};

    for (int i = 0; i < 10; i++){
        printf("%d\n",array[i]);
    }

    int arr[3][5];
    int count =1;

    for(int i = 0; i<3; i++){
        for(int j = 0; j<5; j++){
            arr[i][j]= count;
            count++; 

        }

    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j<5; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    /*Write a C program that declares and initializes an array of 10 integers to the values 10, 9, 8, 7, 6, 5, 4, 3, 2, 1. 
    Then the program should print the array in reverse order, 
    so that the output looks like this:*/

    printf("\n");

    int array2[10];
    int num = 1;
    int sum = 0;

    for (int i=1; i<=10; i++){
        array2[i] = num ;
        num++;

    }

    for (int i= 10; i>0; i--){
        printf("%d ",array2[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        sum += array2[i];
    }   
    printf("\nThe sum on array 2 is: %d", sum);
}