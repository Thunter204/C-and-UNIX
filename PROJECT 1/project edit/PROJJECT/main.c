/*
Allison Okomski
Sammu Suryanarayana
Toni Hunter

C & Unix Project
12/13/2022
*/

#include <stdio.h>
#define STUDENTS 5
#define GRADES 4


// function declarations
void printArr( const int studentGrades[][GRADES], int students, int grades);
void printStudentArray( const int studentGrades[][GRADES], int studentNum, int grades );
void update( int studentGrades[][GRADES], int student, int gradeNum, int grade );

double sAverage( const int studentGrades[], int grades );
double cAverage( int studentGrades[STUDENTS][GRADES] );

int minimum( const int studentGrades[STUDENTS][GRADES]);
int maximum( const int studentGrades[STUDENTS][GRADES]);


int main ( void )
{
    char user, edit; // define character variables
    int gradeNum, studentNum, newGrade, row=0; // define integer variables

    // student array
    int studentGrades[STUDENTS][GRADES];
    // Read student file
    FILE* info;
    if ((info = fopen("studentgrades.txt","r"))== NULL){
        puts("Student grades could not be opened."); // opening student file
    }

    while (!feof(info)) // till the end of the file
    {
        for(int i = 0; i<GRADES;i++){
            // read each grade from the file into the array
            fscanf(info,"%d",&studentGrades[row][i]);
        }
        row++;
        if(row==STUDENTS)
            break; //ends the loop
    }
    fclose(info);

    printf( "Type \"T\" for teacher or \"S\" for student: " );
    scanf( "%c", &user );

    // if user input is t, open access for the teacher
    if ( user == 'T' || user == 't' )
    {
        puts( "\nThe student's grades are:\n" );

        // function call to print the grades for each student
        printArr( studentGrades, STUDENTS, GRADES );
        puts("");

        printf("\nStudents' current averages are: \n");
        printf("-------------------------------\n");

        for ( int student = 0; student < STUDENTS; student++ )
        {
            // print the average grade for each student
            printf("Student %u: %.2f%%\n",
            student+1, sAverage(studentGrades[student], GRADES));
        }

        // function calls to print the highest and lowest grades and class average
        printf( "\n\nLOWEST GRADE: %d%%", minimum(studentGrades));
        printf( "\nHIGHEST GRADE: %d%%", maximum(studentGrades));
        printf( "\nCLASS AVERAGE: %.2f%%", cAverage(studentGrades));

        printf( "\n\nDo you want to make an edit to the grades? (if yes, type \"Y\" | if no, type \"N\"): " );
        scanf( " %c", &edit );

        // enter loop if the teacher wants to edit the grades
        while ( edit == 'Y' || edit == 'y' )
        {
            // collect input from the teacher regarding what grade she wants to change
            printf( "Enter which student you want to edit (1,2,3,4, or 5): " );
            scanf( "%d", &studentNum );
            printf( "Enter the grade for student %d you want to edit (1,2,3, or 4): ", studentNum );
            scanf( "%d", &gradeNum );
            printf( "Enter the new grade: " );
            scanf( "%d", &newGrade );

            // update the student grades function
            studentGrades[studentNum-1][gradeNum-1] = newGrade;

            printf( "\n\nDo you want to make another edit to the grades? (if yes, type \"Y\" | if no, type \"N\"): ");
            scanf( " %c", &edit );
        }

        // writing the grade back to the file
        info = fopen("studentgrades.txt", "w");
        for (int i = 0; i < STUDENTS; i++)
        {
            for (int j = 0; j < GRADES; j++)
            {
                fprintf(info, "%-5d", studentGrades[i][j]); //
            }
            fprintf(info, "\n"); // newline after each line
        }
        fclose(info);

        // prints all the new information
        puts( "\nStudents' new grades are:\n" );

        // function call to print the grades for each student
        printArr( studentGrades, STUDENTS, GRADES );
        puts("");

        printf("\nStudents' new averages are:\n");
        printf("-------------------------------\n");

        for ( int student = 0; student < STUDENTS; student++ )
        {
            // print the average grade for each student
            printf("Student %u: %.2f%%\n",
            student+1, sAverage(studentGrades[student], GRADES));
        }

        // function calls to print the highest and lowest grades
        printf( "\n\nNEW LOWEST GRADE: %d%%", minimum(studentGrades));
        printf( "\nNEW HIGHEST GRADE: %d%%", maximum(studentGrades));
        printf( "\nNEW CLASS AVERAGE: %.2f%%", cAverage(studentGrades));

        puts("\n");
    }

    // if user input is s, open access for the student
    else if ( user == 'S' || user == 's' )
    {
        // find out what student the user is
        printf( "Enter student code (1,2,3,4, or 5): " );
        scanf( "%d", &studentNum);

        printf("\nYour current grades are: \n");
        printf("--------------------------\n");

        // function call to print the grades for the student
        printStudentArray( studentGrades, studentNum, GRADES );

        // function call to print the average grade for the student
        printf("\nYOUR AVERAGE: %.2f%%\n", sAverage(studentGrades[studentNum-1], GRADES));
        printf("CLASS AVERAGE: %.2f%%\n", cAverage(studentGrades));

    }

    else
    {
        // if the user enters anything aside from t or s, it is an invalid entry
        printf( "Invalid entry." );
    }
}


void printArr( const int studentGrades[][GRADES], int students, int grades)
{
    // print a header for the grades
    printf("%s", "  EXAMS  | [1]  [2]  [3]  [4]\n");
    printf("%s", "-----------------------------");

    // loop through the students in the array
    for ( int i = 0; i < students; i++ )
    {
        // print the student
        printf("\nStudent %u| ", i+1);

        // loop through the grades in the array
        for ( int j = 0; j < grades; j++ )
        {
            // print the grades for each student
            printf("%-5d", studentGrades[i][j]);
        }
    }
}


void printStudentArray( const int studentGrades[][GRADES], int studentNum, int grades )
{
    // loop through the grades
    for ( int i = 0; i < grades; i++ )
    {
        printf("Exam %d: ", i+1);
        // print the grades of the given student
        printf("%d%%\n", studentGrades[studentNum-1][i]);
    }
}

double sAverage( const int studentGrades[], int grades ){
    int total = 0; // define integer variables
    double avg = 0.0; // define double variables

    // loop through the grades
    for ( int i = 0; i < grades; i++ )
    {
        // add the grade to the running total
        total += studentGrades[i];
    }

    // calculate the average of the grades
    avg = (double) total / grades;

    // return the average of the student
    return avg;
}

double cAverage(int studentGrades[STUDENTS][GRADES] ){
    int total = 0; // all the grades together
    int count = 0; // the total number of grades

    // loop through the students
    for (int i = 0; i < STUDENTS; i++){
        // loop through the grades
        for(int j = 0; j < GRADES; j++){
            // increment the total, grade, and count variables appropriately
            total += studentGrades[i][j];
            count ++;
        }
    }
    // return the class average
    return (total/count);
}

int minimum( const int studentGrades[STUDENTS][GRADES]){
    // initialize min to the first grade in array
    int min = studentGrades[0][0];

    // loop through the students
    for (int i = 0; i < STUDENTS; i++){
        // loop through the grades
        for (int j = 0; j < GRADES; j++){
            // if min variable is greater than the grade, set the grade to the new min
            if (min > studentGrades[i][j]){
                min = studentGrades[i][j];
            }
        }
    }
    // return the minimum grade
    return min;
}
int maximum( const int studentGrades[STUDENTS][GRADES]){
    // initialize max to the first grade in array
    int max = studentGrades[0][0];

    // loop through the students
    for (int i = 0; i < STUDENTS; i++){
        // loop through the grades
        for (int j = 0; j < GRADES; j++){
            // if max variable is less than the grade, set the grade to the new max
            if (max < studentGrades[i][j]){
                max = studentGrades[i][j];
            }
        }
    }
    // return the maximum grade
    return max;
}
