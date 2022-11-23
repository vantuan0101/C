#include <iostream>
#include <string>
using namespace std;
class Person
{
protected:
    string name;
    int age;

public:
    Person(){};
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void Eat()
    {
        cout << "Eat 2kg every day" << endl;
    }
    void Xuat()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : public Person
{
    int MSSV;

public:
    Student() {}
    Student(string name, int age, int MSSV) : Person(name, age)
    {
        this->MSSV = MSSV;
        // Để truy xuất đến phương thức
        Person::Eat();
    }
    void Xuat()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "MSSV: " << MSSV << endl;
    }
};
int main()
{
    Person A("nguyen", 20);
    // A.Xuat();
    Student B("nguyen", 20, 123);
    B.Xuat();
    system("cls");
    return 0;
}