//Toni Hunter 187009925
//Question 3


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("Input an integer less than 50: ");
    scanf("%d", &n);

    printf("The sum of the series (floating point) is: %.2f\n", KthNum(n));
}

int KthNum(n)
{
    float sum;
    for (int i = 1; i <= n; i++)
    {
        sum = (i*2 + 1)/((i * 2) + 1);

    }
    return sum;
}
