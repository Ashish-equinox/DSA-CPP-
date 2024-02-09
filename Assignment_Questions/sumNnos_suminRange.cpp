#include <iostream>
using namespace std;

// **Q** sum of first n natural nos.

// int main()
// {
//       cout<<"enter no. till sum to be printed:";
//       int n{};
//       cin>>n;

//       int sum=0;
//       for(int i=1;i<=n;i++){
//         sum=sum+i;
//       }
//       cout<<"sum of nos. is:"<<sum;

// }

// **Q** sum of first n nos. within given range

int main()
{
    cout << "enter initial number:";
    int init{};
    cin >> init;

    cout << "enter final number:";
    int fnit{};
    cin >> fnit;

    int sumRange = 0;
    for (int i = init; i <= fnit; i++)
    {
        sumRange = sumRange + i;
    }
    cout << "sum of nos. within given range:" << sumRange;
}
