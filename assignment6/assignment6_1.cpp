/*Q1. Create a class Date with data memebrs day,month and year.
Cretae a class Person with data members name,address and birthdate. The birthdate should be of
type Date.
Cretae a class Employee with data members id, sal, dept and joining date. The joining date should
be of type date.
Employee class should be inherited from Person.
Implement following classes. Test all functionalities in main().
(Note - Perform the Association and Inheritance in the above case.)*/



#include <iostream>
#include <string>
using namespace std;

class Date {
    int day;
    int month;
    int year;
public:
    void acceptDate() {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }

    void displayDate() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

class Person {
    string name;
    string address;
    Date birthDate;
public:
    void acceptData() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter address: ";
        getline(cin, address);
        cout << "Enter birthdate:\n";
        birthDate.acceptDate();
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Birth ";
        birthDate.displayDate();
    }
};

class Employee : public Person {
    int empid;
    string dept;
    double salary;
    Date doj;
public:
    void acceptData() {
        Person::acceptData();
        cout << "Enter Employee ID: ";
        cin >> empid;
        cout << "Enter department: ";
        cin.ignore();
        getline(cin, dept);
        cout << "Enter salary: ";
        cin >> salary;
        cout << "Enter date of joining:\n";
        doj.acceptDate();
    }

    void displayData() {
        Person::displayData();
        cout << "Employee ID: " << empid << endl;
        cout << "Department: " << dept << endl;
        cout << "Salary: Rs." << salary << endl;
        cout << "Date of Joining ";
        doj.displayDate();
    }
};

int main() {
    Employee emp;
    cout << "Enter employee details: \n";
    emp.acceptData();
    cout << "\nEmployee details: \n";
    emp.displayData();

    return 0;
}