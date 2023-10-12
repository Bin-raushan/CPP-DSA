#include <iostream>
using namespace std;
#include<algorithm>
#include<vector>

void sort012(int arr[], int n) {
    //Write your code here
    int a, b, c;
    a= b =c =0;
    for(int i =0; i<n; i++)
    {
        if(arr[i] == 0) a++;
        else if(arr[i] == 1) b++;
        else c++;
    }
    int i=0;
    while(a)
    {
        arr[i] = 0;
        i++;
        a--;
    }
    
    while(b)
    {
        arr[i] = 1;
        i++;
        b--;
    }
    
    while(c)
    {
        arr[i] = 2;
        i++;
        c--;
    }
}

int main() 
{
    int n;
    cout<<"Enter size of array: ";
    cin >> n;
    int arr[n];
    cout<<"Enter Array elements"<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort012(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}