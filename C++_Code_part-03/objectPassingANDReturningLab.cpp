 #include<iostream>

using namespace std;

class Student{
    int marks;
public:


    Student(int marks){
        this->marks = marks;

    }

    int getMarks(){
        return marks;
    }

};

Student totalMarks(Student jahid, Student siam){
    int total = jahid.getMarks()+siam.getMarks();
    Student sami(total);
    return sami;


}

int main(){
    Student jahid(60),siam(30),sami(0);
    cout<<sami.getMarks()<<endl;
    sami = totalMarks(jahid,siam);
    cout<<"Marks : "<<sami.getMarks();
}

