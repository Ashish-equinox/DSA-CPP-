#include <iostream>
using namespace std;

// **Q** find reverse of given no.

// int main()
// {
//     cout << "enter number:";
//     int num{}, reversedNumber = 0;
//     cin >> num;

//     while (num != 0)
//     {
//         int digit = num % 10;
//         reversedNumber = reversedNumber * 10 + digit;
//         num = num / 10;
//     }
//     cout << "Reverse of given no. is:" << reversedNumber;
// }


// **Q** Palindrome No. or not

int main()
{
    cout << "enter number:";
    int num{}, reversedNumber = 0;
    cin >> num;

    int x = num; // storing original value of num in another var.

    while (num != 0)
    {
        int digit = num % 10;
        reversedNumber = reversedNumber * 10 + digit;
        num = num / 10;
    }

    if (x == reversedNumber)
    {

        cout << "given number is a Palindrome " << endl;
    }
    else
    {
        cout << "given number is not a Palindrome" << endl;
    }
}
