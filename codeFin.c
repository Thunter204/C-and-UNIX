
#include<stdio.h>
#include<string.h>

int main()
{
    char str[40];
    printf("Input string: ");
    scanf("%[^\n]s", str);
    char *tptr = strtok(str, " ");
    printf("Output string: ");
    while(tptr != NULL) {
        if(tptr[0] == 'H')
            printf("%s ", tptr);
        tptr = strtok(NULL, " ");
    }
}




#include <stdio.h>
struct student {
    char firstName[20];
    char lastName[20];
    char studentID[20];
    float programming;
    float math;
} s[3];

int main() {
    int i;
    float avg_programming=0,avg_math=0,max_math=0,min_math=0;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 3; ++i){
        printf("----------------------------------------------\n");
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter Last name: ");
        scanf("%s", s[i].lastName);
        printf("Enter grade for programming: ");
        scanf("%f", &s[i].programming);
        printf("Enter grade for Math: ");
        scanf("%f", &s[i].math);

    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 3; ++i) {
        avg_programming=(avg_programming+s[i].programming)/2;
        avg_math=(avg_math+s[i].math)/2;
        printf("First name: ");
        puts(s[i].firstName);
        printf("Last name: ");
        puts(s[i].lastName);
        printf("grade for programming: %.1f\n", s[i].programming);
        printf("grade for Math: %.1f", s[i].math);
        printf("\n");
        if (min_math>s[i].math)
            min_math=s[i].math;
        if (max_math<s[i].math)
            max_math=s[i].math;

    }
    printf("Average of Programming: %.1f\n",avg_programming);
    printf("Average of Math: %.1f\n",avg_math);
    printf("Max Score in Math: %.1f\n",max_math);
    printf("Min Score in Math: %.1f\n",min_math);
    return 0;
}







#include <stdio.h>

void main()

{

int array1[100],i,n,p,insert;

printf("\n\nInsert New value in the sorted array :\n");

printf("Input the size of array : ");

scanf("%d", &n);

/* Stored values into the array/

printf("Input %d elements in the array in ascending order:\n",n);

for(i=0;i<n;i++)

{

printf("element - %d : ",i);

scanf("%d",&array1[i]);

}

printf("Input the value to be inserted : ");

scanf("%d",&insert);

printf("The exist array list is :\n ");

for(i=0;i<n;i++)

printf("% 5d",array1[i]);

/ Determine the position where the new value will be insert./

for(i=0;i<n;i++)

if(insert<array1[i])

{

p = i;

break;

}

/ move all data at right side of the array /

for(i=n;i>=p;i--)

array1[i]= array1[i-1];

/ insert value at the proper position */

array1[p]=insert;

printf("\n\nAfter Insert the list is :\n ");

for(i=0;i<=n;i++)

printf("% 5d",array1[i]);

printf("\n");

}





#include <stdio.h>
int main() {
    char line[50];
    int vow=0, con=0, digit=0;

    printf("Input a string: ");
    fgets(line, sizeof(line), stdin);

    for (int i = 0; line[i] != '\0'; ++i) {
        if (line[i] == 'a'  line[i] == 'e'  line[i] == 'i'
            line[i] == 'o'  line[i] == 'u'  line[i] == 'A'
            line[i] == 'E'  line[i] == 'I'  line[i] == 'O'
            line[i] == 'U') {
            vow=vow+1;
        }
        else if ((line[i] >= 'a' && line[i] <= 'z')  (line[i] >= 'A' && line[i] <= 'Z')) {
            con=con+1;
        }
        else if (line[i] >= '0' && line[i] <= '9') {
            digit=digit+1;
        }
    }

    printf("Vowels: %d", vow);
    printf("\nConsonants: %d", con);
    printf("\nDigits: %d", digit);
    return 0;
}
