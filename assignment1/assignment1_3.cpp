/*Q3. Write a menu driven program for Student in CPP language. Create a class student with data
members roll no, name and marks. Implement the following functions
void initStudent();
void printStudentOnConsole();
void acceptStudentFromConsole();*/



#include<iostream>
#include<string>
using namespace std;

class Student
{
    private:
    int rollno;
    float marks;
    string name;


    public:

    void initStudent()
    {
        rollno=21;
        marks=88;
        name="sumit";

    }

    void printStudentOnConsole()
    {
        cout<<"roll no:"<<rollno<<endl;
        cout<<"marks:"<<marks<<endl;
        cout<<"name:"<<name<<endl;

    }

    void acceptStudentFromConsole()
    {
        cout<<"enter the student roll no:";
        cin>>rollno;
        cout<<"enter the student marks:";
        cin>>marks;
        cout<<"Enter the student name:";
        cin>>name;
    }
};


    int main()
    {
        Student s;
        int choice;

        do
        {
            cout<<"\nMenu\n"<<endl;
            cout<<"1.Initialize Student"<<endl;
            cout<<"2.Print Student Details"<<endl;
            cout<<"3. Accept Student"<<endl;
            cout<<"4. Exit"<<endl;
            cout<<"Please Enter your choice"<<endl;
            cin>>choice;
            switch(choice)
            {
                case 1:
                s.initStudent();
                cout<<"Student has been initialized successfully:";
                break;

                case 2:
                s.printStudentOnConsole();
                break;

                case 3:
                s.acceptStudentFromConsole();
                break;

                case4:
                cout<<"Goodbye.";
                break;

                default:
                cout<<"please enter a valid number between 1 to 4";
            
           }
        }           while(choice!=4);
        return 0;

    }

