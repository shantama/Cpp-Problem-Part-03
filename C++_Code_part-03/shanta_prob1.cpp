#include<iostream>
using namespace std;
class MyInfo
{
private:
    string name;
public:
    void setName(string name)
    {
        this->name=name;
    }
    string getName()
    {
        return name;
    }
};
int main()
{
    string name,n;
    cout<<"Enter your full name = ";
    getline(cin,name);
    MyInfo obj;
    obj.setName(name);
    cout<<"My name = "<<obj.getName()<<endl;
}
