#include <stdio.h>
//Toni Hunter 187009925
//Program: Calculating credit limits
//This program analyzes the credit status of three customers of a company by having user input their information
//and printing the new credit limit and stating overbalance



int main(void)
{
    int AccNum;
    double PrevCredLimt;
    double CurrBal;

    for (int cust = 1; cust <= 3; cust++)
        {
            printf("Enter Account number: ");
            scanf("%d", &AccNum);

            printf("Enter current credit limit: ");
            scanf("%lf", &PrevCredLimt);

            printf("Enter current balance: ");
            scanf("%lf", &CurrBal);

            double NewCredLim;
            NewCredLim = ((PrevCredLimt * 4)/5);  //new credit limit

            printf("New credit Limit: %0.2f\n", NewCredLim);


            if (CurrBal > NewCredLim){
                printf("%d: Your Current Balance Exceeds New Credit limit!\n", AccNum);
            } //end if

            printf("\n");
}
}
