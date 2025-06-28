#include<iostream>
using namespace std;
class ComplexNumber
{
    private:
    double real;
    double imag;
    public:
        ComplexNumber(){}
        ComplexNumber(double real,double imag)
        {
            this->real=real;
            this->imag=imag;
        }
        double getReal()
        {
            return real;
        }
        double getImag()
        {
            return imag;
        }
        ComplexNumber operator/(const ComplexNumber &obj)
        {
            ComplexNumber temp;
            temp.real=this->real/obj.real;
            temp.imag=this->imag/obj.imag;
            return temp;
        }
};
int main()
{
    ComplexNumber obj1(20,10),obj2(10,5),obj3(5,2);
    ComplexNumber temp=obj1/obj2/obj3;
    cout<<"result = "<<temp.getReal()<<"+"<<temp.getImag()<<"i"<<endl;
}
