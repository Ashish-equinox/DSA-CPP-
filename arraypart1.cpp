#include <iostream>
using namespace std;

// 4) Array with functions:-

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "printing done";
}

int main()
{
    // // 1) printing entire array(thru iteration only)
    // int arr[4] = {1, 2, 34, 78};
    // for (int index = 0; index <= 3; index++)
    // {
    //     // cout << arr[index]<<' ';
    // }

    // // 2) fetching element from array
    // // cout << arr[2];

    // // 3) initializing all elements with 0(possible for 0 only)

    // int zer0[20] = {0};
    // for (int i = 0; i <= 19; i++)
    // {
    //     cout << zer0[i] << ' ';
    // }
    //  4) sizeOf function: int a=sizeof(zer0);
    // // since zer0 has return value int(4byte) thus 20*4=80 is a's size
    // cout<<a;

    // 5) Array with functions:-

    int first[3] = {1, 2, 3};
    // int size= sizeof(first)/sizeof(int);  this var. can also be used to give size to fn. rather than sending it explicitly but if sizeof array is 10 and we have only taken 3 elements in our array then this var. won't be giving 3 to the fn. and will send 10 only.
    printArray(first, 3);

    int Second[8] = {0};
    printArray(Second, 8);

    // 6) different types of array:
    char Alpha[4] = {'a', 'b', 'c', 'd'};
    for (int i = 0; i < 4; i++) // i<size bcoz index starts from 0...
    {
        cout << Alpha[i] << " ";
    }
    cout << "printing done";

    float alphaFloat[3];
    bool alphaBool[4];
}