// program to check Valid Palindrome

#include <bits/stdc++.h>
using namespace std;
int isPalindrome(string S)
{
    // Your code goes here
    int start = 0;
    int end = S.length() - 1;
    while (start < end)
    {
        if (S[start] != S[end])
        {
            return 0;
        }
        start++, end--;
    }
    return 1;
}
int main()
{
    string str;
    cin>>str;
    cout<<isPalindrome(str);

    return 0;
}