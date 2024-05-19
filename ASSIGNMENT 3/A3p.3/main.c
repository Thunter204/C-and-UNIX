//Toni Hunter 187009925
//ASSIGNMENT 3 PROGRECT 3(UNION OF SETS)
// Use one dimensional array. Read two sets of numbers (each set has 10 numbers). After reading the values,
// display all unique elements of both sets.
//
#include <stdio.h>


int main(void)
{
    int a[10], b[10], u[20]; // a = array 1, b = array 2, u = COMBO array holder
                             // initialized value of arrays is 10, u is 20

    int i;
    int j;
    int k;
    int y;
    int comb = 20;

    printf("Enter 10 values for the elements of array 1: \n");
    for (i=0; i<10; i++) //value in each spot of array
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter 10 values for the elements of array 2: \n");
    for (i=0; i<10; i++)
    {
        scanf("%d", &b[i]);
    }


    for(i=0; i<20; i++){
        u[i] = a[i]; //put a elements in u
    }
    for (i=0, j=10; j<20 && i<10; i++, j++){
        u[j] = b[i]; //put b elements in u
    }
    for (i= 0; i < comb; i++){
        for (j = i+1; j<comb; j++){
            if(u[i] == u[j]){
                for (k=j; k < comb - 1; k++){
                    u[k] = u[k+1];
                }
                comb--;
                j--;
            }
        }
    }

    printf("\nThe union of array 1 and array 2: \n");

    for (i=0; i<comb; i++)
    {
        printf("%d ", u[i]); //print elements of u
    }
}
