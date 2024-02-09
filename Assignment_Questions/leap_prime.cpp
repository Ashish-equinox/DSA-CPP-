#include <iostream>
using namespace std;

// **Q** Leap year or not

// int main()
// {
//     cout << "enter year:";
//     int year{};
//     cin >> year;

//     if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//     {
//         cout << year << "is a leap year";
//     }
//     else
//     {
//         cout << year << " is not a leap year";
//     }
// }

// **Q** Prime number or not

int main()
{
    cout << "enter your number:";
    int num{};
    cin >> num;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "given no. is composite" << endl;
            break;
        }

        if (num % i != 0)
        {
            cout << "given no. is prime" << endl;
            break;
        }
    }
}
