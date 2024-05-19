/* The following program uses function multiple to determine if the
integer entered from the keyboard is a multiple of some integer X. Examine the function multiple,
then determine X’s value.*/

#include <stdio.h>

int multiple(int x)
{
return (x % 3 == 0); // X is 3
}

int main(void)
{
int x;
printf("Enter an integer: ");
scanf("%d", &x);

if (multiple(x))
{
printf("%d is a multiple of 3.\n", x);
}
else
{
printf("%d is not a multiple of 3.\n", x);
}

return 0;
}




