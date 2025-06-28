#include<iostream>
using namespace std;
class Student
{
private:
    double mark;
public:
    Student(){}
    Student(double mark)
    {
        this->mark=mark;
    }
    double getMark()
    {
        return mark;
    }
};
Student totalMark(Student &obj1,Student &obj2)
{
    double mark=obj1.getMark()+obj2.getMark();
    Student obj3(mark);
    return obj3;
}
int main()
{
    Student obj1(120),obj2(456);
    Student obj;
    obj=totalMark(obj1,obj2);
    cout<<"total mark = "<<obj.getMark();
}
