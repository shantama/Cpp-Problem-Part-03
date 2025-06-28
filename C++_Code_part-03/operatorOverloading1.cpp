#include<iostream>
using namespace std;
class ComplexNumber
{
private:
    double real;
    double imaginary;
public:
    ComplexNumber(double real=0,double imaginary=0)
    {
        this->real=real;
        this->imaginary=imaginary;
    }
    ComplexNumber operator-(const ComplexNumber &obj)
    {
        ComplexNumber temp;
        temp.real=this->real-obj.real;
        temp.imaginary=this->imaginary-obj.imaginary;
        return temp;
    }
    double getReal()
    {
        return real;
    }
    double getImag()
    {
        return imaginary;
    }
};
int main()
{
    ComplexNumber obj1(20,30),obj2(43,1);
    ComplexNumber obj=obj1-obj2;
    cout<<"substract of complex number = "<<obj.getReal()<<"+"<<obj.getImag()<<"i"<<endl;

}
