#include<iostream>
using namespace std;
class son
{
    int real,imag;
public:
    son(int real,int imag)
    {
        this->real=real;
        this->imag=imag;
    }
    int getR()
    {
        return real;
    }
    int getI()
    {
        return imag;
    }
    son operator==(const son &obj)
    {
        if(this->real==obj.real && this->imag==obj.imag)
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
    son obj1(10,5),obj2(10,5),obj3(1,5);
    son obj4=obj1==obj2==obj3;
    if(obj4.getR()==obj1.getR() && obj4.getI()==obj1.getI())
    {
        cout<<"equal";
    }
    else
    {
        cout<<"not";
    }
}
