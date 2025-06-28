#include<iostream>
using namespace std;
class Human
{
private:
    string name;
    int age;
    string NI;
public:
    Human(string name,int age,string NI)
    {
        this->name=name;
        this->age=age;
        this->NI=NI;

    }
    string getName()
    {
      return  name;
    }
    int getAge()
    {
        return age;
    }
    string getNI()
    {
        return NI;
    }
};
void display(Human obj)
{
    cout<<"name = "<<obj.getName()<<endl;
    cout<<"age = "<<obj.getAge()<<endl;
    cout<<"NI = "<<obj.getNI()<<endl;
}
int main()
{
    string name,NI;
    int age;
    cout<<"enter name = ";
    cin>>name;
    cout<<"enter age = ";
    cin>>age;
    cout<<"enter NI = ";
    cin>>NI;
    Human obj(name,age,NI);
    display(obj);
}
