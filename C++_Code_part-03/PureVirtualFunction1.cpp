#include<iostream>
using namespace std;
class Shape
{
private:
    double radius;
    public:
    double length;
    double width;
    double base,height;

    void setRadius(double radius)
    {
        this->radius=radius;
    }
    double getRadius()
    {
        return radius;
    }

    void setBandH(double base,double height)
    {
        this->base=base;
        this->height=height;
    }
    virtual double getArea()=0;
};
class Circle:public Shape
{
public:
    double getArea()
    {
        return 3.1416*getRadius()*getRadius();
    }
};
class Rectangle:public Shape
{
public:
    double getArea()
    {
        return length*width;
    }
};
class Triangle:public Shape
{
public:
    double getArea()
    {
        return .5*base*height;
    }
};
int main()
{
 Shape *ptr;
 Circle obj1;
 ptr=&obj1;
 ptr->setRadius(4.5);
 cout<<"area of circle = "<<ptr->getArea()<<endl;
 Rectangle obj2;
 ptr=&obj2;
 ptr->length=10;
 ptr->width=5;
 cout<<"area of rectangle = "<<ptr->getArea()<<endl;
 Triangle obj3;
 ptr=&obj3;
 ptr->setBandH(5,10);
 cout<<"area of triangle = "<<ptr->getArea()<<endl;


























}
