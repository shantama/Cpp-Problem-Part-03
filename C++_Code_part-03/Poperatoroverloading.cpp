#include<iostream>
using namespace std;
class Car
{
private:
    string name,model;
public:
    Car(string name,string model)
    {
        this->name=name;
        this->model=model;
    }
    Car(){}
    int operator==(const Car &obj)
    {
        if(this->name == obj.name && this->model == obj.model)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    Car obj1("toyota","a6"),obj2("toyota","A6");
    if(obj1==obj2)
    {
            cout<<"they are equal";
        }
        else{
            cout<<"they are not equal";
        }
}
