#include<iostream>
using namespace std;
class OpOverloading
{
private:
    int real;
    int imag;
public:
    OpOverloading(){}
    OpOverloading(int real,int imag)
    {
        this->real=real;
        this->imag=imag;
    }
    OpOverloading operator++(int)
    {
        real++;
        imag++;
        return *this;
    }
    void display()
    {
        cout<<"result = "<<real<<"+"<<imag<<"i"<<endl;
    }
};

int main()
{
    OpOverloading obj(20,15);
    obj.display();
    obj++;
    obj.display();
}
