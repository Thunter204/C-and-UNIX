# include<stdio.h>
#define SIZE 10

int main(void){

    int oddNum[SIZE] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

    // pointer iptr that points to an int type object
    int *iPtr;

    // print the values of array in index notaion 
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", oddNum[i]);
    }

    //assign adress of array to pointer varible iptr

    iPtr = oddNum;
    iPtr = &oddNum[0];

    //print the array using pointer
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", *(iPtr + i));
    }

    for (int i = 0; i < SIZE; i++) {
        printf("%d ", *(oddNum + i));
}

    for (int i = 0; i < SIZE; i++) {
        printf("%d ", iPtr[i]);
}

    oddNum[3];
    *(oddNum + 3);
    *(iPtr + 3);
    iPtr[3];


    int *address = iPtr + 5;
    int value = *address;
    printf("Address referenced by iPtr + 5: %d\n", address);
    printf("Value stored at that location: %d\n", value);


    int *address = iPtr - 3;
    int value = *address;
    printf("Address referenced by iPtr - 3: %d\n", address);
    printf("Value stored at that location: %d\n", value);









}
