#include <iostream>
using namespace std;

int main()
{
    cout << "enter no. whose factorial to be taken:";
    int num{}, product = 1;
    cin >> num;

    for (int i = num; i >= 1; i--)
    {
        product = product * i;
    }
    cout << "factorial of given no. is:" << product;
}