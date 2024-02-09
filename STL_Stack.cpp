#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// LIFO principle
int main()
{
    stack<string> s;

    s.push("love");
    s.push("babbar");
    s.push("kumar");

    cout << "top element:" << s.top() << endl;

    s.pop(); //check how to return the popped value

    cout << "size of stack:" << s.size() << endl;
    cout << "empty or not" << s.empty();
}