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
    cout << "Array before insertion:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter position: ";
    int position;
    cin >> position;
    cout << "Enter value to insert: ";
    int value;
    cin >> value;

    // insertion
    if (position < 1 || position > n)
    {
        cout << "invalid position";
    }
    else
    {
        for (int i = n - 1; i >= position - 1; i--)
        {
            arr[i + 1] = arr[i];
        }

        arr[position - 1] = value;
        n++;

        cout << "array after insertion:" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}