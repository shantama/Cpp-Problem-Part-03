#include<iostream>
using namespace std;
class Circle
{
private:
    double radius;
public:
    Circle(){}
    Circle(double radius)
    {
        this->radius=radius;
    }
    double getRadius()
    {
        return radius;
    }
};
Circle calcArea(Circle &obj)
{
    double area=3.1416*obj.getRadius()*obj.getRadius();
    Circle obj4(area);
    return obj4;

}
int main()
{
    Circle obj1(4.5),obj2(6.56);
    Circle obj3,robj1,robj2;
    robj1=calcArea(obj1);
    robj2=calcArea(obj2);
    obj3=(robj1.getRadius()+robj2.getRadius())/2;
    cout<<robj1.getRadius()<<endl<<robj2.getRadius()<<endl<<obj3.getRadius()<<endl;


}
