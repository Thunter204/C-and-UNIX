//Toni Hunter 187009925
//Project 1
//
#include <stdio.h>

//DEFINING 2D ARRAY
#define STUDENTS 5
#define EXAMS 4


// function prototypes
int minimum(const int grades[][EXAMS], int studentss, int tests); //(studentGrades array, int student num(STUDENTS), int exam num(EXAMS)
int maximum(const int grades[][EXAMS], int studentss, int tests);// ^
double TAverage(const int setOfGrades[], int tests); // (studentGrades[student 0-4], int exam num(EXAM) in loop
double SAverage (const int setofGrades[], int tests, int StudentCode); // ^
void printAll(const int grades[][EXAMS], int studentss, int tests); //(studentGrades array, int student num(STUDENTS), int exam num(EXAM))
void printStudent(const int grades[][EXAMS], int StudentCode, int tests); // ^same, just using SCode for specific student



int main(void)
{
    int NewGrade; // Used by teacher
    int ExamCode; //Used by teacher
    int EditCode; //Used by teacher
    int user; // S
    int StudentCode; // S
    double CA = 0; // CLASS AVERAGE
    double NCA =  0; //NEW CLASS AVERAGE
    int ACode; // T & S

    int studentGrades[STUDENTS][EXAMS]; //[row][column]
    FILE *GradesFile;


    GradesFile = fopen("Grades.txt", "r"); // open file for reading

    if (GradesFile == NULL)
    {
        printf("FNF!\n");
        return 1;
    }

    int row = 0;

    while (!feof(GradesFile)) // while not end of file
    {
        for (int i = 0; i < EXAMS; i++)
        {
            //reads from the file the next float value and
            //stores in the array at the row index row and the column index i
            //& operator passes in the memory address of th element into the array, sets element to int value
            //fscanf skips over whitespace in between numbers on the row and \n at end of lines
            fscanf(GradesFile, "%d", &studentGrades[row][i]);
        }
        row++;
        if (row == STUDENTS) break;
    }
    fclose(GradesFile);

    printf("If you are a TEACHER please enter [1] if you are a STUDENT please enter [2]: ");
    scanf("%d", &user);

    while (user != -1) // sentinel
    {
        if (user == 1)
        {
                printf("\nStudents' current grades are: \n");
                printf("-----------------------------\n");
                printAll(studentGrades, STUDENTS, EXAMS);

                printf("\n");
                printf("\nStudents' current averages are: \n");
                printf("-------------------------------\n");


                for (int student = 0; student < STUDENTS; student++) // loops for each student
                {
                        printf("Student %u: %.2f%%\n",
                        student+1, TAverage(studentGrades[student], EXAMS)); // student + 1 for formatting to start at 0
                }

                printf("\nLOWEST GRADE: %d%%\nHIGHEST GRADE: %d%%\n",
                minimum(studentGrades, STUDENTS, EXAMS),
                maximum(studentGrades, STUDENTS, EXAMS));

                for (int student = 0; student < STUDENTS; student++) // loops
                {
                        CA +=  TAverage(studentGrades[student], EXAMS); //adds averages of each student together
                }
                printf("CLASS AVERAGE: %.2f%%\n", CA/5);

                //code = -1;

                printf("Would you like to make a change to the grades? If YES type 1, if NO type 2:  ");
                scanf("%d", &ACode);

                while (ACode == 1 )
                {
                    printf("\nPlease enter the student you would like to edit: ");
                    scanf("%d", &EditCode); // specific student

                    printf("\nPlease enter the exam grade you would like to edit: ");
                    scanf("%d", &ExamCode); // specific exam

                    printf("\nPlease Enter the new grade: ");
                    scanf("%d", &NewGrade); // new grade input
                    studentGrades[EditCode-1][ExamCode-1] = NewGrade;

                    printf("\nWould you like to make a change to the grades? If YES type 1, if NO type 2:  ");
                    scanf("%d", &ACode);
                }


                if (ACode == 2)
                {
                    printf("\nYou have checked/Edited grades, current grades are outputted below.");
                    printf("The grades have been uploaded to Grades.txt. Goodbye.");

                    printf("\nStudents' current grades are: \n");
                    printf("-----------------------------\n");
                    printAll(studentGrades, STUDENTS, EXAMS);//outputs grades for students
                    printf("\n");
                    printf("\nStudents' current averages are: \n");
                    printf("-------------------------------\n");

                    GradesFile = fopen("Grades.txt", "w");
                   // fprintf(GFile, "%s", "  EXAMS  | [1]  [2]  [3]  [4]\n");
                   // fprintf(GFile, "%s", "-----------------------------\n");

                    for (int i = 0; i < STUDENTS; i++)
                    {
                      //  fprintf(GFile, "student %d| ", i+1); // prints in front of each line in grades updates

                        for (int j = 0; j < EXAMS; j++)
                        {
                            fprintf(GradesFile, "%-5d", studentGrades[i][j]); // %d i+1 student 1: g, student 1: g2... WRONG
                        }
                        fprintf(GradesFile, "\n"); // newline after each line
                    }
                    fclose(GradesFile);

                    //outputs averages of each student
                    for (int student = 0; student < STUDENTS; student++)
                    {
                        printf("Student %u: %.2f%%\n",
                        student+1, TAverage(studentGrades[student], EXAMS));
                    }

                    printf("\nLOWEST GRADE: %d%%\nHIGHEST GRADE: %d%%\n",
                    minimum(studentGrades, STUDENTS, EXAMS),
                    maximum(studentGrades, STUDENTS, EXAMS));

                    for (int student = 0; student < STUDENTS; student++)
                    {
                        NCA +=  TAverage(studentGrades[student], EXAMS); //adds averages together
                    }
                    printf("CLASS AVERAGE: %.2f%%\n ", NCA/5); // calculate new class average if there is a change
                }



                user = -1;

        }
        else if (user == 2)
        {
                printf("\nPlease enter your student code (1, 2, 3, 4, or 5): ");
                scanf("%d", &StudentCode);
                if (StudentCode == 1 || 2 || 3 || 4 || 5) //avoiding unnecessary redundancy
                {
                    printf("\nDisplayed below are your grades for each exam: \n");
                    printStudent(studentGrades, StudentCode, EXAMS);

                    printf("\nYOUR AVERAGE: %.2f%%", TAverage(studentGrades[StudentCode-1], EXAMS));

                    for (int student = 0; student < STUDENTS; student++)
                    {
                        CA +=  TAverage(studentGrades[student], EXAMS); //adds averages together
                    }
                    printf("\nCLASS AVERAGE: %.2f%%\n", CA/5);

                    user = -1;

                }
        }
    }
}

// Find the minimum grade
int minimum(const int grades[][EXAMS], int studentss, int tests)
{
   int lowGrade = 100; // initialize to highest possible grade

   // loop through rows of grades
   for (int i = 0; i < studentss; ++i) {

      // loop through columns of grades
      for (int j = 0; j < tests; ++j) {

         if (grades[i][j] < lowGrade) { //compare
            lowGrade = grades[i][j];
         }
      }
   }

   return lowGrade; // return minimum grade
}

// Find the maximum grade
int maximum(const int grades[][EXAMS], int studentss, int tests)
{
   int highGrade = 0; // initialize to lowest possible grade

   // loop through rows of grades
   for (int i = 0; i < studentss; ++i) {

      // loop through columns of grades
      for (int j = 0; j < tests; ++j) {

         if (grades[i][j] > highGrade) {
            highGrade = grades[i][j];
         }
      }
   }

   return highGrade; // return maximum grade
}

// Determine the average grade for a particular student
double TAverage(const int setOfGrades[], int tests)
{
   int total = 0; // sum of test grades

   // total all grades for one student
   for (int i = 0; i < tests; ++i)
   {
      total += setOfGrades[i];
   }

   return (double) total / tests; // average
}

double SAverage(const int setofGrades[], int tests, int StudentCode)
{

   int total = 0; // sum of test grades

   // total all grades for one student
   for (int i = 0; i < tests; ++i)
   {
      total += setofGrades[i];
   }

   return (double) total / tests; // average
}

// Print the array
void printAll(const int grades[][EXAMS], int studentss, int tests) //studentGrade[EXAMS], int student num, int exam num
{
   // output column heads
   printf("%s", "  EXAMS  | [1]  [2]  [3]  [4]\n");
   printf("%s", "-----------------------------");

   for (int i = 0; i < studentss; ++i) //accesses row/student
   {
      // output label for row
      printf("\nStudent %u| ", i+1);

      // output grades for one student
      for (int j = 0; j < tests; ++j) //accesses all exams in specific row
      {
         printf("%-5d", grades[i][j]); //prints row by row after first for loop
      }
   }
}

void printStudent(const int grades[][EXAMS], int StudentCode, int tests)
{
    for (int i = 0; i< tests; i++)
    {
        printf("Exam %u: ", i+1); //i+1 for printing format
        printf("%d%% \n", grades[StudentCode-1][i]); //%% because formating
    }
}




