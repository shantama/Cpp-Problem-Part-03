#include<iostream>
using namespace std;
class Largest
{
    int real;
    int imag;
    string name;
    public:
    Largest(int real,int imag,string name)
    {
        this->real=real;
        this->imag=imag;
        this->name=name;
    }
    string getName()
    {
        return name;
    }
    Largest operator<(const Largest &obj)
    {
        if(this->real<obj.real && this->imag<obj.imag)
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
    Largest obj1(30,40,"obj1"),obj2(2,3,"obj2"),obj3(34,45,"obj3");
    Largest temp=obj1<obj2<obj3;
    cout<<temp.getName()<<" is smallest";
}
