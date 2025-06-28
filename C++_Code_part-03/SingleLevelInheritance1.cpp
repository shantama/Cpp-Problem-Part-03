#include<iostream>
using namespace std;
class Father
{
private:
    string name;
    double height;
public:
    void setName(string name)
    {
        this->name=name;
    }
    void setHeight(double height)
    {
        this->height=height;
    }
    string getName()
    {
        return name;
    }
    double getHeight()
    {
        return height;
    }
    void display()
    {
        cout<<"name = "<<name<<endl;
        cout<<"height = "<<height<<endl;
    }
};
class Son:public Father
{
public:
    double salary;
    void YearlySalary()
    {
        cout<<"yearly salary = "<<salary*12<<endl;
    }
};
int main()
{
    Father obj1;
    Son obj2;
    obj1.setName("ab");
    obj1.setHeight(5.6);
    obj2.setName("cd");
    obj2.setHeight(4.5);
    obj2.salary=1209;
    obj1.display();
    obj2.display();
    obj2.YearlySalary();
}
