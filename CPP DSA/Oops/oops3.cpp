/* As soon as we create a class we get some free function with it automatically
    1.) Default constructor
    2.) copy constructor
    3.) copy assignment operator
    4.) Destructor

/* constructor 
 when we create an object a constructor calls
 properties of constructor: no return type , constructor name will be same as class name
*/
#include<iostream>
using namespace std;
class Student{
    char * name;
    public:
    int roll;
    int marks;
    

    // creating default constructor, inbuilt constructor get vanish/killed when we create our own constructor
    // Student(){
    //     cout<<"constructor is called"<<endl;
    //     roll=10;
    //     marks=30;
    // }

    // parameterized constructor
    Student(int rollno, int marks){
        roll=rollno;
        this->marks=marks;

    }
    Student(){
        name=new char[100];
    }
    void setName(char name){
        this->name=name;
    }


    // our own copy constructor
    // inbuilt copy constructor get killed when we make our own copy constructor
    Student(Student& temp){
        cout<<"copy constructor called"<<endl;
        this->roll=temp.roll;
        this->marks=temp.marks;

    }




};

int main(){
    //creation of object
    //statically
    //Student s1; // implicit default constructor is invoked i.e s1.Student()
    //Student s(10,20);  // declaring a prameterized constructor hides/kills the default constructor.

    // dynamically
    // Student * s2=new Student(11,22);
    // cout<<s1.roll<<" "<<s1.marks<<endl;
    // cout<<s.roll<<" "<<s.marks<<endl;
    // cout<<s2->roll<<" "<<s2->marks<<endl;

    // copy constructor
    // copy constructor is called at the time of creation of object
    Student r1(10,100);
    Student r2(r1); // copy constuctor invokes copy the value of r1 into r2 , it means r1.roll=r2.roll, r1.marks=r2.marks
    cout<<r1.roll<<" "<<r1.marks<<endl;
    cout<<r2.roll<<" "<<r2.marks<<endl;

    

    return 0;
}


