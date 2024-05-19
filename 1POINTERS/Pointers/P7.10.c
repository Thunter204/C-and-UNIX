#include <stdio.h>

int main(void){
    
    // intial varaibles 
    double value1 = 20.4568;
    double value2;

    // pointer dptr type double 
    double *dPtr;
    dPtr = &value1;

    //print the value 
    printf("Value of the pointer: %f\n",*dPtr);

    value2 = *dPtr;

    printf("Value 2: %f\n",value2);

    printf("Address of value 1: %p\n", &value1);

    printf("Adress stord by the pointer: %p\n", dPtr);


}