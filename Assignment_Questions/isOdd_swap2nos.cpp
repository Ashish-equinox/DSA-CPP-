#include <iostream>
using namespace std;

// **Q3**[odd or even]

// bool isOdd(int num)
// {

//     if (num & 1)
//     {
//         return true; 
//     }
//     else
//     {
//         return false;
//     }
// }

// int main()
// {
//     int num{};
//     cin >> num;

//     int result = isOdd(num);
//     if (result == 1)
//     {
//         cout << "odd no.";
//     }
//     else
//     {
//         cout << "even no.";
//     }
// }

// **Q4** swappin' 2 nos. without third variable

int main()
{
    cout << "value of a:";
    int a{};
    cin >> a;
    cout << "value of b:";
    int b{};
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;
    cout << "swapped value of a:" << a << endl;
    cout << "swapped value of b:" << b << endl;
}



