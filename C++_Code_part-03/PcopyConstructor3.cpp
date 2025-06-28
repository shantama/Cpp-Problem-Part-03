#include<iostream>
using namespace std;
class Rectangle
{
private:
    double width,height;
public:
    Rectangle(double width,double height)
    {
        this->width=width;
        this->height=height;
    }
    Rectangle(const Rectangle &obj)
    {
        this->width=obj.width;
        this->height=obj.height;
    }
    void display()
    {
        cout<<"width = "<<width<<endl;
        cout<<"height = "<<height<<endl;

    }
};
int main()
{
    Rectangle obj1(10,20);
    Rectangle obj2=obj1;
    obj1.display();
    obj2.display();
}
