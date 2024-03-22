/*Q3. Write a class Address with data members (string building, string street, string city ,int pin)
Implement constructors, getters, setters, accept(), and display() methods.
Test the class functunalities by creating the object of class and calling all the functions.*/





#include<iostream>
#include<string>
using namespace std;


class Address
{
    private:

    string building;
    string street;
    string city;
    int pin;

    public:

    Address(): building(""), street(""), city(""), pin(0000)
    {

    }

    string getBuilding()
    {
        return building;
    }

    string getStreet()
    {
        return street;
    }

    string getCity()
    {
        return city;
    }

    int getPin()
    {
        return pin;
    }

    void setBuilding(string b)
    {
        building=b;
    }

    void setCity(string c)
    {
        city=c;
    }

    void setStreet(string s)
    {
        street=s;
    }
    void setPin(int p)
    {
        pin=p;
    }
    void acceptAddressOnCosnsole()
    {
        cout<<"Enter your building name:"<<endl;
        cin>>building;
        cout<<"Enter your Street name:"<<endl;
        cin>>street;
        cout<<"Enter the city name:"<<endl;
        cin>>city;
        getline(cin, city);
        cout<<"Enter your PIN No:"<<endl;
        cin>>pin;

    }

    void displayAdressOnConsole()
    {
        cout<<"Building Name:"<<building<<endl;
        cout<<"Street Name:"<<street<<endl;
        cout<<"City Name:"<<city<<endl;
        cout<<"Pincode:"<<pin<<endl;

    }    
};

    int main()
{
    Address a;

        cout<<"Building Name:"<<a.getBuilding()<<endl;
        cout<<"Street Name:"<<a.getStreet()<<endl;
        cout<<"City Name:"<<a.getCity()<<endl;
        cout<<"Pincode:"<<a.getPin()<<endl;


        a.setBuilding("Happy");
        a.setStreet("MainRoad");
        a.setCity("Akola");
        a.setPin(4444);

     a.acceptAddressOnCosnsole();
     a.displayAdressOnConsole();

     return 0;
}