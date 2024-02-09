#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    cout << "enter decimal number:";
    int n{};
    cin >> n;

    float ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;

        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << "answer is:" << ans << endl;
}