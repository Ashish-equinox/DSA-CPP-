#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //an STL array is based on standard array but has its more of its own attributes/functions that can be used 

    array<int, 4> a = {1, 2, 3, 4};
    int size = a.size(); //returns size of given array

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    cout << "element at 2nd index:" << a.at(2) << endl;

    cout << "empty or not" << a.empty() << endl;
    // empty attribute returns a boolean i.e. 0-->empty and 1-->not empty

    cout << "First element:" << a.front() << endl;
    //front() to find first element of array

    cout << "last element:" << a.back() << endl;
    //back() to find last element of array
    
    cout << "size of array:" << size;
}
