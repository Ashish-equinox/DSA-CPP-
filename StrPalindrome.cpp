#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// 2 approaches to find whether a string is palindrome or not
// 1) 2-finger-heart/2 pointer approach 2) Direct fn.

bool palCheck_2P(const string &str)
{
    int left = 0;
    int right = str.length() - 1;
    while (left < right)
    {
        if (str[left] != str[right])
        {
            return false;
        }

        left++;
        right--;
    }
    return true;
}

// bool Dfn(const string &str)
// {
//     string tempStr = str;
//     reverse(tempStr.begin(), tempStr.end());
//     if (tempStr == str)
//     {
//         return true;
//     }
//     return false;
// }

int main()
{
    string str;
    cout << "enter your string:";
    getline(cin, str); // fetches a line of text from user

    if (palCheck_2P(str))

    // if (Dfn(str))
    {
        cout << "your string is a palindrome";
    }
    else
    {
        cout << "your string is not a palindrome";
    }
    return 0;
}