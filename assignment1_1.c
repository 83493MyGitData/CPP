/*Q1. Write a menu driven program for Date in a C. Declare a structure Date having data members
day, month, year. Implement the following functions.
void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);*/

#include<stdio.h>
struct Date
{
    int day, month, year;
};

    void initDate(struct Date* ptrDate)
    {
        ptrDate-> day=19;
        ptrDate-> month=03;
        ptrDate-> year=2024;
    }
    void printDateOnConsole(struct Date* ptrDate)
    {
    printf("Default date is %d-%d-%d \n", ptrDate->day,ptrDate->month, ptrDate->year);
    }

    void acceptDatefromConsole(struct Date* ptrDate)
    {
        printf("Enter the day\n");
        scanf("%d", &ptrDate->day);
        printf("Enter the month\n");
        scanf("%d", &ptrDate->month);
        printf("Enter the year\n");
        scanf("%d", &ptrDate->year);
    }

void main()
{
    struct Date currentDate;
    int choice;

    initDate(&currentDate);

    do
    {
        printf("1.Print Date\n");
        printf("2.Accept Date\n");
        printf("3.Exit\n");
        printf("Enter your choice:\n");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            printDateOnConsole(&currentDate);
            break;

            case 2:
            acceptDatefromConsole(&currentDate);
            break;

            case 3:
            printf("Exiting Program. Goodbye\n");
            break;

            default:
            printf("Invalid choice\n Please enter a valid choice between 1 to 3\n");


        }
    }
    while(choice!=3);
}
