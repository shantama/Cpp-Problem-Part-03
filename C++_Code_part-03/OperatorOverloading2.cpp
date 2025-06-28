#include<iostream>
using namespace std;
class OpOverloading
{
private:
    int real;
    int imag;
public:
    OpOverloading(int real,int imag)
    {
        this->real=real;
        this->imag=imag;
    }

    OpOverloading operator--(int)
    {
    real--;
    imag--;
        return *this;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main()
{
    OpOverloading obj(10,25);
    cout<<"Before decrement :";
    obj.display();
    cout<<"After decreament = ";
    obj--;
    obj.display();
}
