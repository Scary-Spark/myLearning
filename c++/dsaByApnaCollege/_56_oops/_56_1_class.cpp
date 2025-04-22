#include <bits/stdc++.h>

using namespace std;
/*
    TODO access modifiers:
        private: data and methods can be only accessed inside the class

        public: data and methods accessible to everyone

        protected: accessible inside class and it's derived class
*/
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

    // setter function: set private values
    void setSalary(double newSalary)
    {
        salary = newSalary;
    }

    // getter function : return private values
    double printSalary()
    {
        return salary;
    }
};
class students
{
private:
    // properties
    string name;
    string dept;
    string subject;
    double salary;

    // methods / member functions
    void changeDept(string newDept)
    {
        dept = newDept;
    }
};
class officeStaff
{
protected:
    // properties
    string name;
    string dept;
    string subject;
    double salary;

    // methods / member functions
    void changeDept(string newDept)
    {
        dept = newDept;
    }
};
int main()
{
    teacher t1;
    t1.name = "Spark";
    t1.dept = "Cse";
    t1.subject = "DSA";
    t1.setSalary(68.8);

    cout << "Teacher 1 name: " << t1.name << endl;
    cout << "Depts: " << t1.dept << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Salary: " << t1.printSalary() << endl;

    string newDept = "BBA";
    t1.changeDept(newDept);
    cout << "New dept: " << t1.dept << endl;
}