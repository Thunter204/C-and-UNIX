#include <stdio.h>
//Toni Hunter 187009925
//Program:Calculating weekly pay
//This program calculates employee pay based on a code and information entered and finishes when the sentinel(-1) is entered.

int main(void)
{

    int Code;
    double Wage;
    int Weeks;
    int Hours;
    int Items;

    printf("Please Enter your code: ");
    scanf("%d", &Code);

    while (Code != -1){  // loops until user is finished
        if (Code == 1){ // manager
                printf("\nYou are a manager.");
                printf("\nEnter your weekly salary: ");
                scanf("%lf", &Wage);
                printf("Enter weeks worked: ");
                scanf("%d", &Weeks);
                printf("Your earnings are $%0.2f\n", Wage * Weeks);
        }
        else if (Code == 2){ //Hourly Worker
                printf("\nYou are a Hourly Worker.");
                printf("\nEnter amount of hourly pay: ");
                scanf("%lf", &Wage);
                printf("Enter hours worked: ");
                scanf("%d", &Hours);
                    if (Hours > 40){
                        int XHours = Hours - 40; // Gets extra Hours
                        int Time = Wage * 40;
                        double Half = ((Wage * 1.5) * XHours);
                        double WPlus = Time + Half;
                        printf("You worked 40+ hours. Your earnings are $%0.2f\n", WPlus);
                    }
                    else { //to exit if
                       printf("Your Earnings are $%0.2f\n", Wage*Hours);
                    }
                }
        else if (Code == 3){ // Commission worker
                printf("\nYou are a Commission Worker.");
                printf("\nEnter weeks worked: ");
                scanf("%d", &Weeks);
                printf("Enter amount made in sales: ");
                scanf("%lf", &Wage);
                int Base = Weeks*350;
                double Commi = Wage*.065;
                double BaCo = Base + Commi;
                printf("Your commission and earnings are $%0.2f\n", BaCo);
        }
        else if (Code == 4){ // Piece maker
            printf("\nYou are a Piece Maker.");
            printf("\nEnter number of items produced: ");
            scanf("%d", &Items);
            printf("Enter Wage per item: ");
            scanf("%lf", &Wage);
            printf("Your earnings are $%0.2f\n", Wage*Items);
        }
    printf("\nPlease Enter your code: ");
    scanf("%d", &Code);
    }
}

