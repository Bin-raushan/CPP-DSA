#include <iostream>
#include<algorithm>
#include<set>

using namespace std;

void kthSmallestLargest(int arr[], int n, int k) {
    //Write your code here
    set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    
    if (s.size()<k){
        cout<<"-1"<<" "<<"-1";
    }
    
    else{
    // largest elements
    auto it=s.end();
    for(int i=1;i<=k;i++){
        it--;
    }
    cout<<"kth largest element="<<*it<<endl;
    
    // smallest element
    auto jt=s.begin();
    for(int i=0;i<k-1;i++){
        jt++;   
    }
    cout<<"kth smallest element="<<*jt;
    }
    
    
}

int main() {
    int n;
    cout<<"Enter size of array: ";
    cin >> n;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    kthSmallestLargest(arr, n, k);
    return 0;
}