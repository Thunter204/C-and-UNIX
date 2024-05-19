//Toni Hunter 187009925
//FINAL Q4
//
//Ask info from 3 students, store the information into an array of structures.
//info: student ID, last name, programming grade, math grade.
//returns average grade for programming class, math class, max grade from math and min grade from math.
//
#include <stdio.h>

struct student {
    //members in struct student
    char FirstName[20]; //can have up to 20 chars
    char LastName[20];
    char StudentID[20];
    float Pro;
    float Math;

} s[3];

int main() {
    int i;
    float Avg_Pro=0;
    float Avg_Math=0;
    float Max_Math=0;
    float Min_Math=0;
    printf("Please enter student information:\n");

    // storing information for each student in s array, starting at 0
    for (i = 0; i < 3; ++i)
    {
        printf("\n");
        printf("Enter first name: ");
        scanf("%s", s[i].FirstName);
        printf("Enter Last name: ");
        scanf("%s", s[i].LastName);
        printf("Enter grade for programming: ");
        scanf("%f", &s[i].Pro);
        printf("Enter grade for Math: ");
        scanf("%f", &s[i].Math);

    }
    printf("\nBelow is the information of 3 students:");
    printf("\n");

    // displays information on each student starting at 0
    for (i = 0; i < 3; ++i)
    {
        Avg_Pro = (Avg_Pro + s[i].Pro)/2;
        Avg_Math = (Avg_Math +  s[i].Math)/2;
        printf("First name: ");
        puts(s[i].FirstName);

        printf("Last name: ");
        puts(s[i].LastName);

        printf("grade for programming: %.1f\n", s[i].Pro);
        printf("grade for Math: %.1f", s[i].Math);
        printf("\n");
        printf("\n");

        if (Min_Math > s[i].Math)
        {
            Min_Math = s[i].Math;
        }

        if (Max_Math < s[i].Math)
        {
            Max_Math = s[i].Math;
        }

    }

    printf("PROGRAMMING AVERAGE: %.1f\n", Avg_Pro);
    printf("MATH AVERAGE: %.1f\n", Avg_Math);
    printf("MAXIMUM MATH GRADE: %.1f\n", Max_Math);
    printf("MINIMUM MATH GRADE: %.1f\n", Min_Math);
    return 0;
}
