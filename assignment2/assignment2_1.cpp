/*Q1. Write a menu driven program to calculate volume of the box(length * width * height).
Provide parameterless, parameterized(with 3 parameters) and single paramaterized constructor.
Create the local objects in respective case and call the function to caluclate area.
Menu options ->
1. Calculate Volume with default values
2. Calculate Volume with length,breadth and height with same value
3. Calculate Volume with different length,breadth and height values.*/

#include<iostream>
#include<string>
using namespace std;


class Box
{
    private:
    double length;
    double width;
    double height;

    public:
    Box(): length(2.0), width(4.0), height(1.0)
    {

    }
    Box(double l, double w, double h) :length(l), width(w), height(h)
    {

    } 
    Box(double side): length(side), width(side), height(side)
    {

    }

    double calculateVolume()
    {
        return length*width*height;
    }

};

int main()
{
    int choice;
    double length,width,height;

    do 
    {
        cout<<"Menu Options:"<<endl;
        cout<<"1.Calculate volume with default values:"<<endl;
        cout<<"2.Calculate volume with length, breadth and height with same value:"<<endl;
        cout<<"3.Calculate volume with different length,breadth and height values:"<<endl;
        cout<<"4.Exit:"<<endl;
        cout<<"enter your choice value:"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                Box b1;
                cout<<"Volume with default values:"<<b1.calculateVolume()<<endl;
                break;
            }

            case 2:
            {
                cout<<"Enter the same value for length, width and height:"<<endl;
                cin>>length;
                Box b2(length);
                cout<<"Volume with same length, width and height :"<<b2.calculateVolume()<<endl;
                break;
            }

            case 3:
            {
                cout<<"Enter the different vlaues for length, width and height:";
                cin>>length>>width>>height;
                Box b3(length, width, height);
                cout<<"Volume with different length, width and height:"<<b3.calculateVolume()<<endl;
                break;
            }

            case 4:
            {
                cout<<"Goodbye"<<endl;
                break;

                default :
                cout<<"Please enter a valid choice:"<<endl;

            }
        }
        

    } while(choice!=4);
    return 0;
}