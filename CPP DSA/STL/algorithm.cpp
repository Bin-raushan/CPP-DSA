////////////////// ALGORITHM /////////////

#include <iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;


// comperator function:

// Q1: sort array in descending order
// bool comp(int el1, int el2) {
// 	if(el1 >= el2) {
// 		return true; 
// 	}
// 	return false; 
// }

// main finction()
//sort(arr,arr+n, comp);



// Q2: // i want you to sort this in such a way 
// that the element who have first element in pair smaller
// appears first, and if first is equal then sort according 
// to second and keep the larger second

// bool comp(pair<int,int> el1, pair<int,int> el2) {
// 	if(el1.first < el2.first) {
// 		return true; 
// 	}
// 	if(el1.first == el2.first) {
// 		if(el1.second > el2.second) {
// 			return true; 
// 		}
// 	}
// 	return false; 
// }
 

// main() function
// pair<int,int> arr[] = {{1, 4},{5, 2},{5, 9}};
// after sorting arr[] = {{1, 4}, {5, 9}, {5, 2}}

// sort(arr, arr+3, comp); 


int main()
{
    // arrays:
    // int n;
    // cout<<"Enter size of array: ";
    // cin>>n;
    // cout<<"Enter array elements: "<<endl;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // vector:
    // int m ;
    // cout<<"Enter size of vector: ";
    // cin>>m;
    // cout<<"enter vector elements:"<<endl;
    // vector<int> vec (m,0);
    // for (int i = 0; i <m; i++)
    // {
    //     cin >> vec[i];
    // }



    // 1.) Sorting algorithm:
    // -> sort()
    // Time complexity is nlog(n)

    // arrays
    // sort(arr, arr + n); // will sort the array element from starting to end

    // // sort(arr + 1, arr + 4); // will sort the array element starting with index 1 and ending with index 3 [1,4).
    
    // // printing array element after sort
    // cout<<"array elements after sorting:"<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // vector:
    // sort(vec.begin(), vec.end()); // will sort entire vector from starting to end

    // sort(vec.begin() + 1, vec.begin() + 4); //  will sort vector elements in range [1,4),

    // printing vector element after reverse
    // cout<<"vector elements after sorting:"<<endl;
    // for (int i : vec)
    // {
    //     cout << i << " ";
    // }




    // 2.) Reverse:
    // reverse(startIterator, endIterator) -> [)  

    // array
    // reverse(arr, arr+n); // will reverse the array element from starting to end
 
    // reverse(arr + 1, arr + 4); // will reverse the array element starting with index 1 and ending with index 3 [1,4).

    // printing array element after reverse

    // cout<<"array elements after reverse:"<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // vector
    // reverse(vec.begin(), vec.end()); // will reverse entire vector from starting to end
 
    // reverse(vec.begin() + 1, vec.begin() + 4);  // will sort vector elements in range [1,4),

    // printing vector element after reverse
    // cout<<"vector elements after reverse:"<<endl;
    // for (int i : vec)
    // {
    //     cout << i << " ";
    // }


    // If i want to fine the maximum elements in any index range 
    // i to j give me the maximum 
    // Maximum and minimum elements in a given range
    // *max_element(firstIterator, lastIterator); 
    // *min_element(firstIterator, lastIterator);

    // implementation:
    // int maxi = INT_MIN; 
    // for(int k = i;k<=j;k++) {
    // 	if(arr[k] > maxi) {
    // 		maxi = arr[k]; 
    // 	}
    // }


    // array:
    // cout<<*max_element(arr, arr+n)<<endl; // will return maximum elements in an array
    // cout<<*max_element(arr+1, arr+4)<<endl; // will return maximum elements in an array in range [1,4)

    // cout<< *min_element(arr, arr+n)<<endl; // will return minimum elements in of array
    // cout<< *min_element(arr+1, arr+4)<<endl; // will return maximum elements in an array in range [1,4)
 
    //vector
    // cout<<*max_element(vec.begin(), vec.end())<<endl;  // will return maximum elements of vector
    // cout<< *max_element(vec.begin()+1, vec.begin()+4)<<endl;  // will return maximum elements in of vector in rangecout<<    // cout<< *min_element(vec.begin(), vec.end());  // will return minimum elements of vector
    
    // cout<<*min_element(vec.begin(), vec.end())<<endl; // will return minimum elements in of array
    // cout<< *min_element(vec.begin()+1, vec.begin()+4); // will return minimum elements in an array in range [1,4)




    // accumulate()
    // // I give you a range and I want you to find the sum in that range 
    // i - j, tell me the sum in that range i to j 

    // accumulate(startIterator, endIterator, initialSum);

    // implementation
    // int sum = 0;
    // for(int k = i;k<=j;k++) {
    // 	sum += arr[k]; 
    // }

    // arrays
    // int sum = accumulate(arr, arr+n, 0); // will return sum of entire elements in an array
    // cout<<sum<<endl;
    // int sum1 = accumulate(arr+2, arr+5, 0);  // will return sum of array elements from index 2 to index 4
    // cout<<sum1<<endl;

    // // vectors
    // int sum2 = accumulate(vec.begin(), vec.end(), 0); // will return sum of entire elements in vector
    // cout<< sum2<<endl;
    // int sum3 = accumulate(vec.begin()+2, vec.begin()+5, 0); //  will return sum of vector elements from index 2 to index 4
    // cout<<sum3<<endl;


    // count()

    // arr[] -> [1, 6, 7, 1, 2, 1, 3] 
    //  x = 1 
    // tell me how many times the element 1 occurs in the array 

    //implementation:
    // int cnt = 0;
    // int x=1;
    // // O(N)
    // for(int i = 0;i<n;i++) {
    // 	if(arr[i] == x) {
    // 		cnt++; 
    // 	}
    // } 
    // cout << cnt;

    // count(firstIterator, lastIterator, x) 
    // int cnt = count(arr, arr+n, 1);
    // int cnt = count(vec.begin(), vec.end(), 1); 


    // find()
    // arr[] -> {1, 2, 5, 1, 2, 4, 4} 
    // i want you to find the first occurrence of 2
    // it is in the index 1 
    
    // implementation
    // int ind = -1;
    // int x=2; 
    // for(int i = 0;i<n;i++) {
    // 	if(arr[i] == x) {
    // 		ind = i;
    // 		break;
    // 	}
    // }
    // cout << ind;

    // arr[] -> {1, 2, 5, 1, 2, 4, 4} 
    // auto it = find(arr, arr+n, 2); // return an iterator 
    // pointing to the first instance of it, or else it 
    // returns pointing to the end() if it is not there 
 
    // int ind = it - arr; // print index of first occurance of 2
    // cout<<ind<<endl;
 
 
    // auto it = find(vec.begin(), vec.end(), 2); 
    // cout<<it-vec.begin();

    // arr[] -> {1, 5, 6, 2, 3, 5, 6}
    // x = 4 
    // auto it = find(vec.begin(), vec.end(), 4); 
    // if(it == vec.end()) {
    // 	cout << "element is not present"; 
    // }
    // else {
    // 	cout << "Element is first present at: " << it - vec.begin(); 
    // }



    // binary search:
    // this stl only works on SORTED arrrays
    // arr[] -> {1, 5, 7, 9, 10} 
    // x = 9
    // true -> 9 exists in my arr 
    // x = 8 
    // false -> 8 does not exist in my arr 

    // binary_search(firstIterator, lastIterator, x)
    // returns a true or returns a false 
    // works in log n complexity 
    // bool res = binary_search(arr, arr+n, 8);
    // cout<< res<<endl; 
    // bool res1 = binary_search(vec.begin(), vec.end(), 8); 
    // cout<<res1<<endl;



    // lowerbound():
    // lower_bound function 
    // returns an iterator pointing to the first
    // element which is not less than x 
    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
    // this works in log N 

    // int x=10;
    // auto it = lower_bound(arr, arr+n, x); // returns an iterator pointing to the element which is not less than x 
    // int ind = it - arr; 
    // cout<<ind<<endl;
 
    // auto it1 = lower_bound(vec.begin(), vec.end(), x); 
    // int ind = it1 - vec.begin();

    // int ind =  lower_bound(vec.begin(), vec.end(), x) - vec.begin(); 




    // upper bound 
    // returns an iterator which points to an element which is 
    // just greater than x
    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
    // x = 7 
    // x = 6 
    // x = 12 -> not present returns  end() iterator 
    // x = 15 -> returns  end() iterator 
    
    // int x=11;
    // auto it = upper_bound(arr, arr+n, x); 
    // int ind = it - arr; 
    // cout<< ind<<endl;
 
    // int y=13;
    // auto it1 = upper_bound(vec.begin(), vec.end(), x); 
    // int ind1 = it1 - vec.begin();
    // cout<<ind1<<endl;
 
    // int ind =  upper_bound(vec.begin(), vec.end(), x) - vec.begin();





    // next permutation
    // Next_Permutation() 
    // string s = "abc"
    // all permutations of s are as follows: 
    // abc
    // acb 
    // bac
    // bca
    // cab
    // cba
 
    // string s = "bca" ;
    // bool res = next_permutation(s.begin(), s.end()); // check next permutation is possible or not
    // cout<<res<<endl; // return true (1) , since next permutation is: cab, cb

    // string st = "cba";
    // bool res1 = next_permutation(st.begin(), st.end());
    // cout<< res1<<endl; // return false (0), since next permutation is not possible

    // if I give you any random string s = "bca"
    // i want you to print all the permutations 
    // string s = "bca"; 
    // sort(s.begin(), s.end()); // this makes the string as "abc"
    // do {
    // 	cout << s << endl; 
    // } while(next_permutation(s.begin(), s.end())); 


    // prev permutation 
    // prev_permutation() 
    // string s= "bca";
    // bool res = prev_permutation(s.begin(), s.end());  // return true, since previous permutatation is possible
    // cout<<res<<endl;

    // string st= "abc";
    // bool res1 = prev_permutation(st.begin(), st.end());  // return true, since previous permutatation is possible
    // cout<<res1<<endl;





     // COMPARATOR: (doubt)
      // There can be any condition
        // implemented as per the need
        // of the problem statement

    //it is a function, always write it's code taking 2 elements 

    // sort(arr, arr+n); // sorts everything in ascending order
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;


    // now i want to sort in descending order
    // sort(arr, arr+n, comp); 

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // other ways:
    // greater<int> is an inbuilt comparator
    // which works only if you wanna do this in descending 
    // sort(arr, arr+n, greater<int>); 
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
 
 
 
    // question of pair 
    // sort(arr, arr+n, greater<pair<int,int>>);

    // vector<vector<int>> vec(n, vectorM<int>(n, 0));
   


    return 0;
}
