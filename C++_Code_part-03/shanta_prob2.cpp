#include<iostream>
using namespace std;
class Shape
{
public:
    double length,width;

};
class Color:public Shape
{
public:
    string color;

};
class ColoredRectangle:private Color
{
    public:
    double length,width;
    void setLength(double length)
    {
        this->length=length;
    }
    void setWidth(double width)
    {
        this->width=width;
    }
    double getLength()
    {
        return length;
    }
    double getWidth()
    {
        return width;
    }
    void setColor(string color)
    {
        this->color=color;
    }
    string getColor()
    {
        return color;
    }
};
void calcArea(ColoredRectangle &obj)
{

    cout<<"area = "<<obj.getLength()*obj.getWidth()<<" color ="<<obj.getColor();
}
int main()
{
    ColoredRectangle obj;
    obj.setLength(10);
    obj.setWidth(6);
    obj.setColor("white");
    calcArea(obj);

}
