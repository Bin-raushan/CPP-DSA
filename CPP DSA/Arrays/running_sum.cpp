//Running sum of an array
// input=[1 2 3 4 5]
// output=[1 3 6 10 15]
 #include<iostream>
 using namespace std;
 int main(){
     int n;
     cout<<"Enter the size of array: ";
     cin>>n;
     int arr[n];
     int ans[n];
     cout<<"Enter the element of array\n";
     for(int i=0;i<n;i++){
         cin>>arr[i]; 
     }
     ans[0]=arr[0];
     cout<<ans[0]<<" ";
     for(int j=1;j<n;j++){
         ans[j]=ans[j-1]+arr[j];
         cout<<ans[j]<<" ";
     }
     return 0;

 }