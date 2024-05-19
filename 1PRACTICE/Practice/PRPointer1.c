#include<stdio.h>

int main(void){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    
    //print tht array backwards using pointers. 

    int *aPtr = &arr[9]; // pointing to the last element in that array

    while (aPtr >= arr){
        printf("%d ", *aPtr);
        aPtr--;
    }

    // add two numbers using pointers 

    int *n1Ptr; 
    int *n2Ptr; 
    int num1,num2;

    n1Ptr =&num1;
    n2Ptr = &num2;

    printf("\nEnter the first number: ");
    scanf("%d",n1Ptr);

    printf("Enter the second number: ");
    scanf("%d",n2Ptr);

    int sum = *n1Ptr + *n2Ptr;

    printf("The sum of %d + %d is %d\n",*n1Ptr,*n2Ptr,sum);

    //swap two arrays 

    int arr1[3] = {1,2,3};

    int arr2[3] = {4,5,6};

    int *a1Ptr , *a2Ptr;

    a1Ptr = &arr1[0];
    a2Ptr = &arr2[0];

    int i, temp;
  
  // Swap the elements of the two arrays
  for (i = 0; i < 3; i++) {
    temp = a1Ptr[i];
    a1Ptr[i] = a2Ptr[i];
    a2Ptr[i] = temp;
  }

    for (int i=0; i<3; i++){
        printf("The num in arr1 is: %d\n", arr1[i]);
    }

    // Find the length of a string using pointer

    char text [100];
    char *StrPtr = text;

    int count = 0;

    printf("Enter any string: ");
    scanf("%s",&text);

    while (*(StrPtr++) != '\0') count++;

    printf("Length of %s = %d", text,count);
}
