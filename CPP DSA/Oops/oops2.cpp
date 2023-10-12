// Getter and Setter function
#include<iostream>
using namespace std;
class Student
{
    int rollno;   // By default data members are private
    float marks;


public:
    int getRollno() // getter function to access private data member
    {
        return rollno;
    }
    int getMarks() // getter function to access private data member
    {
        return marks;
    }
    void setRollnO(int roll){ //setter function for setting value into private  data member
        rollno=roll;

    }
    void setMarks(int marks){ //setter function for setting value into private  data member
        this->marks=marks;    // this keyword is used when data member name and function parameter is same
        //(*this).marks=marks;
    }
};

int main(){
    Student s1;
    cout<<s1.getMarks()<<" "<<s1.getRollno()<<endl;// print garbage value
    s1.setRollnO(20);
    s1.setMarks(30);
    cout<<s1.getRollno()<<" "<<s1.getMarks();  // prints passed value
    return 0;
}
