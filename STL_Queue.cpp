#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// uni-directional flow (FIFO)
int main()
{
    queue<string>q;

    q.push("love");
    q.push("babbar");
    q.push("kumar");

    cout << "first element:" << q.front();
    cout << endl;
    cout << "last element:" << q.back();
    cout << endl;

    q.pop();
    cout << "size after pop:" << q.size();
}