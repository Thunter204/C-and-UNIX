//Toni Hunter 187009925
//QUESTION 2


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int HundrethK(n)
{
    //base case
    if (n == 1){
        return n;
    }
    else{
        return n + HundrethK(n - 1);
    }
}


int main(void)
{
    int n;
    printf("Enter an integer less than 30: ");
    scanf("%d", &n);
    printf("\nOutput: ", HundrethK(n));

}


