#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter Size of array: ";
    int n;
    cin >> n;

    int *arr = new int[n];
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array before deletion:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter position: ";
    int position;
    cin >> position;
    cout << "Enter value to insert: ";
   

    // insertion
    if (position < 1 || position > n)
    {
        cout << "invalid position";
    }
    else
    {
        for (int i = position- 1; i<n - 1; i++)
        {
            arr[i] = arr[i+1];
        }
        n--;

        cout << "array after deletion:" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}