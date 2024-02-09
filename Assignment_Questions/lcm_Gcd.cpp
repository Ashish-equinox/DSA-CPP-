#include <iostream>
using namespace std;

// **Q8** LCM of a no.

// int main()
// {
//     cout << "enter your number:";
//     int n{};
//     cin >> n;

//     for (int i = 2; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             int l = i;
//             cout << "lcm of given number:" << l;
//             break;
//         }
//     }
// }

// **Q9** HCF of given no.(Imp./Epp)

int main()
{
    cout << "Enter the number with greater value: ";
    int nl{};
    cin >> nl;

    cout << "Enter the number with smaller value: ";
    int ns{};
    cin >> ns;

    int h; // Declare h outside the loop to store the HCF

    while (ns != 0)
    {
        int r = nl % ns;
        h = ns;
        nl = ns;
        ns = r;
    }

    cout << "HCF of the two given numbers is: " << h << endl;

    return 0;
}
