#include<iostream>
using namespace std;
class Employee
{
private:
    string name;
    double salary;
public:
    Employee(string name,double salary)
    {
        this->name=name;
        this->salary=salary;
    }
    string getName()
    {
        return name;
    }
    double getSalary()
    {
        return salary;
    }
    Employee operator<(const Employee &obj)
    {
        if(this->salary<obj.salary)
        {
            return *this;
        }
        else
        {
            return obj;
        }
    }
};
int main()
{
    Employee obj1("shanta",100),obj2("juthi",90),obj3("asma",95);
    Employee temp=obj1<obj2<obj3;
    cout<<temp.getName()<<" gets the lowest salary that is "<<temp.getSalary()<<endl;
}
