/*Write a program using functions to check if a person is eligible for
 voting or not by comparing his age with legal voting age i.e. 18.*/
 #include<iostream>
 using namespace std;
 void voting_eligiblity(int age){
    if(age>=18 && age<=100){
        cout<<"Congratulation! You are eligible for voting.";
    }
    else{
        cout<<"Sorry! You are not eligible for voting.";
    }


    // Or we can do it in one line code as:
    // age>=18?cout<<"Eligible":cout<<"Not eligible";
 }

 void odd_even_check(int num){
     num%2==0?cout<<"Enter number is even"
             :cout<<"Enter number is odd";
 }
 int main(){
     int voter_age;
     cout<<"Enter the age of voter: ";
     cin>>voter_age;
     voting_eligiblity(voter_age);
     cout<<endl;
     int number;
     cout<<"Enter any number: ";
     cin>>number;
     odd_even_check(number);
 } 
