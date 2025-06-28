#include<iostream>
using namespace std;
class person
{
public:
    string name;
    int age;
    void display()
    {
        cout<<"name = "<<name<<endl;
        cout<<"age = "<<age<<endl;
    }
};
class Student:public person{
public:
    double grade;
    void gradeDisplay()
    {
        cout<<"grade = "<<grade<<endl;
    }

};
int main()
{
    person obj1;
    obj1.name="orange";
    obj1.age=20;
    Student obj2;
    obj2.name="mango";
    obj2.age=22;
    obj2.grade=4.00;
    obj1.display();
    obj2.display();
    obj2.gradeDisplay();

}
