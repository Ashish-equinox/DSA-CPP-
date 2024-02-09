// #include <iostream>
// using namespace std;

// // (Q1)To find power of a number

// int power(int num, int pow)
// {
//     int prod = 1;

//     for (int i = 1; i <= pow; i++)
//     {
//         prod = prod * num;
//     }
//     return prod;
// }
// int main()
// {
//     cout << "enter number:" << endl;
//     int num{};
//     cin >> num;

//     cout << "enter power:" << endl;
//     int pow{};
//     cin >> pow;

//     int ans = power(num, pow);
// // calling the function and storing the result in same line
//     cout << "result:" << ans << endl;
// }

// (Q2)Fn. to show whether a no.is even or odd:
// explanaion in notes
#include <iostream>
using namespace std;

bool isOdd(int n)
{
    if (n & 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    cout << "enter your number:" << endl;
    int n{};
    cin >> n;

    isOdd(n);
    if (isOdd(n))
    {
        cout << "number is odd" << endl;
    }
    else
    {
        cout << "number is even" << endl;
    }
}
