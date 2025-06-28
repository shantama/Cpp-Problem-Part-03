#include<iostream>
using namespace std;
class Animal
{
public:
    virtual void makeSound()=0;
};
class Dog:public Animal
{
public:
    void makeSound()
    {
        cout<<"gaugau \n";
    }
};
class Cat:public Animal
{
public:
    void makeSound()
    {
        cout<<"meaw meaw\n";
    }
};
class Bird:public Animal
{
public:
    void makeSound()
    {
    cout<<"coo coo\n";

    }
};
int main()
{
    Animal *ptr;
    Dog obj1;
    Cat obj2;
    Bird obj3;
    ptr=&obj1;
    ptr->makeSound();
    ptr=&obj2;
    ptr->makeSound();
    ptr=&obj3;
    ptr->makeSound();
}
