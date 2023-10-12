// vecor:
// it is a dynamic array
// we can change the size of vector during the execution of our program


#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v; // initialization of empty vector
    vector<int>vec(5,0); // {0,0,0,0,0} when size of the vector known
    cout<<v.size()<<endl; // ->0 check how many elements present in vector
    cout<<v.capacity()<<endl; // ->0 check vecor assign for how many elements

    // inserting elements in vector from end
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    //printing vector elements
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;

    // random access of vector element:
    cout<<v.at(2)<<endl;
    cout<<v[2]<<endl;

    cout<<v.size()<<endl; // ->3
    cout<<v.capacity()<<endl; // ->4 

    cout<<"first element="<<v.front()<<endl;
    cout<<"last element="<<v.back()<<endl;

    cout<<v.size()<<endl;;
    v.clear();  // erase all vectors elements at once
    cout<<v.size();

    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.erase(v.begin(),v.begin()+2); // removing vector elements of given range

    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;


    // removing elements in vector from end one by one
    v.pop_back();
    v.pop_back();
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;
    cout<<v.size()<<endl; // ->1
    cout<<v.capacity()<<endl; // ->4

    // how to copy one vector into another
    vector<int>v1(5,10); // {10,10,10,10,10}
     for(auto i:v1){
        cout<<i<<" ";
    }cout<<endl;

    vector<int>v2(v1.begin(),v1.end()); //copying v1 into v2
    // another way
    vector<int>v2(v1);

    for(auto i:v2){
        cout<<i<<" ";
    }cout<<endl;




    // How to define and declare 2D vector
    vector<vector<int>>vec; // initialization of a 2d vector i.e vecor of vectors
    vector<int> v1;
	v1.push_back(1); 
	v1.push_back(2); 
 
	vector<int> v2;
	v2.push_back(10); 
	v2.push_back(20); 
 
	vector<int> v3;
	v3.push_back(19); 
	v3.push_back(24); 
	v3.push_back(27); 
 
	// vec.push_back(v1); 
	// vec.push_back(v2); 
	// vec.push_back(v3); 

    // // printing 2d vector

    // // traditional way
    // for(int i = 0;i<vec.size();i++) {
	// 	for(int j = 0;j<vec[i].size();j++) {
	// 		cout <<  vec[i][j] << " "; 
	// 	}
	// 	cout << endl; 
	// }cout<<endl;

    // // another way
    // for(auto row: vec) {
	// 	for(auto element: row) {
	// 		cout << element << " "; 
	// 	}
	// 	cout << endl; 
	// }


    // // define 10X20 vector
    // vector<vector<int>> vec(10, vector<int> (20, 0));

    // //array of vectors
    // vector<int> arr[4]; // 4 size of array created, each element of array is  empty vector [{},{},{},{}]
    // arr[0].push_back(1);
    // arr[1].push_back(2);
    // arr[1].push_back(3); // [{1}, {2,3}, {} , {}]
    // cout<<arr[1].at(1);
	

    // // 10 x 20 x 30 // int arr[10][20][30] 
	// vector<vector<vector<int>>> vec(10, vector<vector<int>> (10, vector<int> (20, 0)));
 

// lower bound , upper bound 
 
	// swap swap(v1, v2) 
	// begin(), end(), rbegin(), rend() 
 







    return 0;
}
