#include <iostream>
using namespace std;

class Shape {
protected:
    float dimension;
public:
    void setDimension() {
        cin >> dimension;
    }

    virtual float calculateArea()=0;
};

class Circle : public Shape {
public:

};

class Square : public Shape {
public:
    float calculateArea() {
        return dimension * dimension;
    }
};

int main() {


    Shape *ptr;

    Circle cobj;
    Square sobj;

    ptr = &cobj;
    cout << "Enter the radius of the Circle: ";
    cobj.setDimension();
    cout << "Area of circle: " << ptr->calculateArea() << endl;

    ptr= &sobj;
    cout << "\nEnter length of the Square: ";
    sobj.setDimension();
    cout << "Area of square: " << ptr->calculateArea() << endl;

    return 0;
}
