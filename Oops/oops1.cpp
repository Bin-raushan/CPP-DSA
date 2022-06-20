// Basic oops implementation
#include<iostream>
using namespace std;
class Student{
    public:
    int age;
    int rollNumber;
};
int main(){
    // creating object statically
    Student s1;
    s1.age=20;     
    s1.rollNumber=30;

    // creating object dynamically
    Student *s2= new Student;
    (*s2).age=40;
    (*s2).rollNumber=50;
    // another ways
    Student *s3=new Student;
    s3->age=45;
    s3->rollNumber=60;

    cout<<s1.age<<" "<<s1.rollNumber<<endl;
    cout<<(*s2).age<<" "<<(*s2).rollNumber<<endl;
    cout<<s3->age<<" "<<s3->rollNumber<<endl;

    
    return 0;
}
 