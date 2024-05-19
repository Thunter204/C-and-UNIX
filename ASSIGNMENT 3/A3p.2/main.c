//Toni Hunter 187009925
//ASSIGNMENT 3 PROGRECT 2(SALES COMMISSIONS)
// Use a one dimensional array of counters that determines how may of the salespeople earned
// salaries in each of the ranges provided.
//
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double Sales;
    double Salary;

    int SalaryCount[9] = {0}; //sets array to be able to have 9 spots, 0 sets all spots to zero

    while(Sales != -1) // sentinel = -1
    {
        printf("\nPlease enter salesperson's gross sales(or -1 to end program): $");
        scanf("%lf", &Sales);

        Salary =(200 + (Sales*.09)); //salary equation

        // printf("The Salesperson's salary is $%0.2f\n", Salary);  //FOR CHECKING


        if (Salary >= 200 && Salary <= 299){
            SalaryCount[0]++; //count++ in specified element
        }
        else if (Salary >= 300 && Salary <= 399){
            SalaryCount[1]++;
        }
        else if (Salary >= 400 && Salary <= 499){
            SalaryCount[2]++;
        }
        else if (Salary >= 500 && Salary <= 599){
            SalaryCount[3]++;
        }
        else if (Salary >= 600 && Salary <= 699){
            SalaryCount[4]++;
        }
        else if (Salary >= 700 && Salary <= 799){
            SalaryCount[5]++;
        }
        else if (Salary >= 800 && Salary <= 899){
            SalaryCount[6]++;
        }
        else if (Salary >= 900 && Salary <= 999){
            SalaryCount[7]++;
        }
        else if (Salary >= 1000){
            SalaryCount[8]++;
        }

    }

    //FORMATTING NEATNESS!!!
    printf("\nThe table below will display the range of salaries and the number of Salespersons that earned them.\n");
    printf("\n ---------------------------------------\n");
    printf("| %s | %6s |\n", "Salary Range", "Number of Salespersons");
    printf("|--------------|------------------------|\n");
    printf("|$200-299      :         %d              |\n", SalaryCount[0]);
    printf("|$300-399      :         %d              |\n", SalaryCount[1]);
    printf("|$400-499      :         %d              |\n", SalaryCount[2]);
    printf("|$500-599      :         %d              |\n", SalaryCount[3]);
    printf("|$600-699      :         %d              |\n", SalaryCount[4]);
    printf("|$700-799      :         %d              |\n", SalaryCount[5]);
    printf("|$800-899      :         %d              |\n", SalaryCount[6]);
    printf("|$900-999      :         %d              |\n", SalaryCount[7]);
    printf("|$1000+        :         %d              |\n", SalaryCount[8]);
    printf(" ---------------------------------------\n");
}
