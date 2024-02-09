#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int midIndex = start + (end - start) / 2; // V.Imp optimisation: if (start+end/2) is done then it may exceed int's range thus this expression is same as (start+end/2) but will not exceed int's range()

    while (start <= end)
    {
        if (key == arr[midIndex])
        {
            return midIndex;
        }

        // go to right wala part after midIndex
        if (key > arr[midIndex])
        {
            start = midIndex + 1;
        }

        // go to left wala part befor midIndex
        else
        {
            end = midIndex - 1;
        }
        midIndex = start + end / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {12, 68, 6, 90, 18};

    cout << "index of 12:" << binarySearch(even, 6, 12);
    cout << "index of 90:" << binarySearch(odd, 5, 90);
}