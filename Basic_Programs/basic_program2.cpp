// Area calculation
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    // area and circumference of circle
    #define pi 3.14 //we can also declare it as, const float pi=3.14; 
    float r;
    float area,perimeter;
    cout<<"Enter the radius of circle: ";
    cin>>r;
    area=pi*pow(r,2);
    perimeter=2*pi*r;
    cout<<"Area of circle is="<<area<<endl;
    cout<<"Circumference of circle is="<<perimeter<<endl;


    // area and perimeter of rectangle
    int length,width;
    cout<<"Enter the length and width of rectangle: ";
    cin>>length>>width;
    area=length*width;
    perimeter=2*(length+width);
    cout<<"Area of rectangle is="<<area<<endl;
    cout<<"Perimeter of rectangle is="<<perimeter;



    return 0;
}