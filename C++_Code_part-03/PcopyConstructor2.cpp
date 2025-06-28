#include<iostream>
using namespace std;
class Animal
{
private:
    string name,species;
    int age;
public:
    Animal(string name,string species,int age)
    {
        this->name=name;
        this->species=species;
        this->age=age;
    }
    Animal(const Animal &obj)
    {
        this->name=obj.name;
        this->species=obj.species;
        this->age=obj.age;
    }
    void display()
    {
        cout<<"name = "<<name<<endl;
        cout<<"species = "<<species<<endl;
        cout<<"age = "<<age<<endl;
    }
};
int main()
{
    Animal obj1("cow","memal",2);
    Animal obj2=obj1;
    obj1.display();
    obj2.display();
    }
