#include <iostream>
using namespace std;

// **Q** No. of digits in an integer

// int countDigits(int num)
// {
//     if (num == 0) // if given num is 0 then num/10 doesn't make sense thus this case handled separately
//     {
//         return 1;
//     }

//     int count = 0;

//     while (num != 0)
//     {
//         num = num / 10;
//         count = count + 1;
//     }
//     return count;
// }

// int main()
// {
//     cout << "enter your no.=";
//     int num{};
//     cin >> num;

//     int result = countDigits(num);
//     cout << "total digits in given no. is:" << result;
// }

// **Q** Sum of digits of a no.

int sum = 0;
int i = 0;
int sumDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    while (n != 0)
    {
        i = n % 10;
        sum = sum + i;
        n = n / 10;
    }
    return sum;
}

int main()
{
    cout << "enter your number:";
    int n{};
    cin >> n;

    int result = sumDigits(n);
    cout << "sum of digits of given no. is:" << result;
}