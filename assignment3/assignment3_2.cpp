/*Q2. Write a class for Time and provide the functionality
Time()
Time(int h,int m,int s)
getHour()
getMinute()
getSeconds()
printTime()
setHour()
setMinute()
setSeconds()
Allocate the memory for the the object dynamically and test the functunalities using time ptr.*/



#include<iostream>
using namespace std;


class Time
{
    private:
    int hour,minute,second;

    public:

    Time():hour(0), minute(0), second(0)
    {
    }

    Time(int h, int m, int s):hour(h), minute(m),second(s)
    {
    }
    
    int getHour()
    {
      return hour;
    }

    int getMinute()
    {
     return minute;
    }

    int getSecond()
    {
        return second;
    }

    void printTime()
    {
        cout<<"Time:"<<hour<<":"<<minute<<":"<<second<<endl;
    }


    void setHour(int h)
    {
        hour=h;
    }
    void setMinute(int m)
    {
        minute=m;
    }
    void setSecond(int s)
    {
        second=s;
    }
};

int main()
{
    //double *ptr = new double (illustration)
    // Time t1; // local object , we cannot do this in case of dyanamic memory allocation
    
    Time* tptr = new Time(10,10,10);

    cout<<"Hour:"<< tptr->getHour()<<endl;
    cout<<"Minute:"<<tptr->getMinute()<<endl;
    cout<<"Second:"<<tptr->getSecond()<<endl;

    tptr->printTime();

    tptr->setHour(12);
    tptr->setMinute(22);
    tptr->setSecond(44);

    tptr->printTime();

    delete tptr;

    return 0;

}