#include <bits/stdc++.h>

using namespace std;
class teacher
{
private:
    double salary;

public:
    // properties
    string name;
    string dept;
    string subject;
    // methods / member functions
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // getter function : return private values
    double printSalary()
    {
        return salary;
    }
    /*
        TODO constructor:
            constructor is function written inside a class named as the name name of the class and it does not have any return type

            it is called only one time when the variable is created

            ublike, it doen't need to be called. it called automatically

            memory allocatin happend when constructor called;

            3 types of constructor:
                i. non-parameterized
                ii. parameterized
                iii. copy constructor
    */

    // non-parameterized
    teacher()
    {
        cout << "Hi, i am constructor\n";
        dept = "CSE"; // setting default value
    }

    // perameterized
    teacher(string name, string dept, string subject, double salary)
    {
        // this pointer. point to the object of class
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Depts: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main()
{
    teacher t1("Spark", "CSe", "DSA", 34.56);
    // when we creating the variable t1, it's calling the constructor

    t1.getInfo();

    string newDept = "BBA";
    t1.changeDept(newDept);
    cout << "New dept: " << t1.dept << endl;
}