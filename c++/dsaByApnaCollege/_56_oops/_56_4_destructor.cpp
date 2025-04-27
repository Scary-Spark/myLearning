#include <bits/stdc++.h>

using namespace std;
class teacher
{
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    void changeDept(string newDept)
    {
        dept = newDept;
    }

    double printSalary()
    {
        return salary;
    }

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

    // destructor: destructor has the same name as the class
    // destructor called automatically when main function is over
    ~teacher()
    {
        cout << "Hi, I have deleted everything\n";
        delete &dept;
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