#include<iostream>
using namespace std;

class DateClass 
{
    private:
    int day,month,year;

    public: void initDate()
    {
        day=1;
        month=1;
        year=2000;
    }
    void printDateOnConsole()
    {
        cout<<"Date:"<<day<<"/"<<month<<"/"<<year<<endl;
    }
    void acceptDateFromCosnsole()
    {
        cout<<"Enter Day:";
        cin>>day;
        cout<<"enter Month:";
        cin>>month;
        cout<<"enter year:";
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
    int choice;
    DateClass dateClass;

    cout<<"Select implementation\n";
    cout<<"1. Structure\n";
    cout<<"2.Class\n";
    cout<<"Enter choice";
    cin>>choice;

    switch(choice)
    {
        case 1:
        dateStruct.initDate();
        break;

        case 2:
        dateStruct.initDate();
        break;

        default:
        cout<<"Invalid choice. Exiting]n";
        return 0;
    }
    do 
    {
        cout<<"\nMenu:]\n";
        cout<<"1.Print Date\n";
        cout<<"2.Accept Date\n";
        cout<<"3.Check Leap Year\n";
        cout<<"4.Exit\n";
        cout<<"Enter choice:";
        cin>>choice;


        switch(choice)
        {
            case 1:
            if(choice==1)
            (choice==1)?dateStruct.printDateOnConsole():dateClass.printDateOnConsole();
        break;

        case 2:
        if(choice==2)
        (choice==2)? dateStruct.acceptDateFromCosnsole():dateClass.acceptDateFromCosnsole();
    break;

    case 3:
    if(choice==3)
    (choice==3)?cout<<"Leap Year:"<<(dateStruct.isLeapYEar()?"Yes":"No")<<endl:cout<<"Leap Year:"<<(dateClass.isLeapYEar()?"Yes": "No")<<endl;
break;

case 4:
cout<<"Exiting]\n";
break;
default:
cout<<"Invalid choice. Please enter again.\n";
        }

    } while (choice!=4);
    return 0;
}