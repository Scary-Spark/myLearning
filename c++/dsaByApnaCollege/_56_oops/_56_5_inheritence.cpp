#include <iostream>
#include <string>
using namespace std;
class person
{
public:
    string name;
    int age;
    person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
class student : public person
{
public:
    int roll;

    student(string name, int age, int roll) : person(name, age)
    {
        this->roll = roll;
    }

    void getInfo()
    {
        cout << "Student name: " << this->name << endl;
        cout << "Student age: " << this->age << endl;
        cout << "Student roll: " << this->roll << endl;
    }
};
int main()
{
    student s1("Spark", 21, 23452);
    s1.getInfo();
}
