#include<iostream>
using namespace std;

struct Date
{
    int day,month,year;


void initDate()
{
    day=1;
    month=1;
    year=2000;
}

void printDateOnConsole()
{
    cout<< "Date:"<<day<<"/"<< month<<"/"<<year<<endl;
}

void acceptDateFromConsole()
{
    cout<<"Enter day:";
    cin>>day;
    cout<<"Enter month:";
    cin>>month;
    cout<<"Enter year:";
    cin>>year;
}

bool isLeapYear()
{
    if((year%4==0 && year%100!=0) || (year%400==0))
    return true;
    else
    return false;
}
};

int main()
{
    Date d;
    int choice;


do 
{
    cout<<"\nMenu:\n1. Initialize Date\n2. Print Date\n3.Accept Date\n4.Check Leap Year\n5.Exit\nEnter your choice:";
    cin>>choice;

    switch(choice)
    {
        case 1:
        d.initDate();
        break;
        case 2:
        d.printDateOnConsole();
        break;
        case 3:
        d.acceptDateFromConsole();
        break;
        case 4:
        if(d.isLeapYear())
        cout<<"The year is a leap year."<<endl;
    else
    cout<<"The year is not a leap year."<<endl;
break;
case 5:
cout<<"Invlaid choice. Please try again."<<endl;
    }
} while(choice!=5);
return 0;
}