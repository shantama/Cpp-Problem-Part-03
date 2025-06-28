#include<iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;
public:
    Person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    Person(const Person &obj)
    {
        this->name=obj.name;
        this->age=obj.age;
    }
    void display()
    {
        cout<<"name = "<<name<<endl;
        cout<<"age = "<<age<<endl;
    }
};
int main()
{
    string name1,name2;
    int age1,age2;
    cout<<"enter first person name and age = ";
    cin>>name1>>age1;
    cout<<"enter second person name and age = ";
    cin>>name2>>age2;
    Person obj1(name1,age1),obj2(name2,age2);
    obj1.display();
    obj2.display();
    obj2=obj1;
    obj1.display();
    obj2.display();

}
