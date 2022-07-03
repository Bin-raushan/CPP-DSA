#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1.)length or size of a string
    string s1 = "Raushan";
    cout << s1.size() << endl;
    cout << s1.length() << endl;

    // 2.) substr
    string s2 = "Ramayana";
    cout << s2.substr(0) << endl;    // will give entire element starting with index 0
    cout << s2.substr(3) << endl;    // will give entire element starting with index 3
    cout << s2.substr(3, 3) << endl; // print string of length 3, starting from index 3.

    // 3.) find :-> Returns the stating index of first occurrence of element in a string.
    string s3 = "abcdefghi";
    cout << s3.find('c') << endl;
    string s4;
    s4 = "Ram is a good boy and he is good in cricket";
    cout << s4.find("good") << endl;

    // 4.) to_string:-> Conversion of integer into string
    int a = 123;
    string str = to_string(a);
    string str1 = "Hello" + str;
    cout << str1 << endl;

    // 5.) atoi:-> Conversion of string into integer
    string st="123";
    int b=atoi(st.c_str());
    int sum=10+b;
    cout<<sum<<endl;

    // 6.) push_back() :->inserts elements from end;
    string st1="1234";
    st1.push_back('5');
    cout<<st1<<endl;


    return 0;
}