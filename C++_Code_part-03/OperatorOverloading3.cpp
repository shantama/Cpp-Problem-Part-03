#include<iostream>
using namespace std;
class Car
{
private:
    string name;
    string model;
public:
    Car(string name,string model)
    {
        this->name=name;
        this->model=model;
    }
    int operator==(const Car &obj)
    {
        return (name == obj.name && model == obj.model);

    }
};
int main()
{
    Car obj1("toyota","A5"),obj2("toyota","A5");
    if(obj1==obj2)
    {
        cout<<"They are equal\n";
    }
    else
    {
        cout<<"They are not equal\n";
    }
}
