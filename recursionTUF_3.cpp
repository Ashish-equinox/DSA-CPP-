#include<iostream>
#include<vector>
using namespace std;

// Multiple Recursion:- when there are 2/more recursive calls within a fn
// Q1.. fibonacci series using recursion

int fibo(int i) {

    if (i == 0) return 0;
    if (i == 1) return 1;

//  1st last will generate a result & then slast will be called
//  multiple recursive calls work line by line & not simultaneouly
    int last = fibo(i - 1);
    int slast = fibo(i - 2);

    return last + slast;
}
int main() {
    int i;
    cout << "enter index:- ";
    cin >> i;

    cout << "number at given index in fibonacci series is: " << fibo(i);
}