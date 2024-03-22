/*Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll.
Mostly they do, but sometimes a car goes by without paying.
The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
collected. Model this tollbooth with a class called tollbooth.
The two data items are a type unsigned int to hold the total number of cars, and a type double to
hold the total amount of money collected.
A constructor initializes all data members to 0. A member function called payingCar() increments
the car total and adds 0.50 to the cash total. An other function, called nopayCar()
increments the car total but adds nothing to the cash total. Finally, a member function called
printOnConsole() displays the two totals and number of paying as well as non paying cars total.*/



#include<iostream>
using namespace std;


class Tollbooth
{
    private:
    unsigned int totalcars;
    double totalmoney;

    public: 
    Tollbooth(): totalcars(0), totalmoney(0)
    {

    }
    void payingCar()
    {
        totalcars++;
        totalmoney=totalmoney+0.50;

    }

    void nopayCar()
    {
        totalcars++;

    }

    void printOnConsole()
    {
        cout<<"Total cars:"<<totalcars<<endl;
        cout<<"Toal money collected:$"<<totalmoney<<endl;
        cout<<"Number of paying cars:"<<totalcars<<endl;
    }

};

int main()
{
    Tollbooth t;

    t.payingCar();
    t.nopayCar();
    t.payingCar();

    t.printOnConsole();
    
    return 0;

}