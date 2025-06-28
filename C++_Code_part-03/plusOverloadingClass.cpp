#include<iostream>
using namespace std;

class Complex{
    int real,img;
public:
    Complex(){
    }
    Complex(int real, int img){
        this->real = real;
        this->img =  img;
    }
    int getReal(){
        return this->real;
    }
    int getImg(){
        return this->img;
    }
    Complex operator+(const Complex &obj){
     //   obj.real=100;
     Complex temp;
        temp.real = real + obj.real;
        temp.img = this->img + obj.img;
       // cout<<r<<"+"<<im<<"i"<<endl;
       return temp;

    }

};

int main(){
    Complex obj1(10,5),obj2(20,15),obj3(30,45),obj4(2,2),obj;

    //obj=obj1+obj2+obj3+obj4;
    obj=obj1.operator+(obj2).operator+(obj3).operator+(obj4);
    cout<<obj.getReal()<<"+"<<obj.getImg()<<"i"<<endl;



   // obj1.operator+(obj2);
}
