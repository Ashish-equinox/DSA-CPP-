#include <iostream>
using namespace std;

int bubbleSort(int arrB[], int n)
{
    // i--> no. of rounds(for n elements we need n-1 rounds as smallest element's natural position=its final position so don't neeed n rounds to set n elements)
    // j--> iterate over each element except last one as nothing on its RHS to compare with
    // optimisation: if in a particular round no swapping is done then it means array is already sorted ; break out of for loop

    bool swapped = false;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arrB[j] > arrB[j + 1])
            {
                swap(arrB[j], arrB[j + 1]);
                swapped = true;
            }
        }
        // already sorted
        if (swapped == false)
        {
            break;
        }
    }
}

int main()
{
    int arrB[6] = {10, 1, 7, 6, 14, 9};
    bubbleSort(arrB, 6);

    for (int i = 0; i < 6; i++)
    {
        cout << "bubble sorted array is:" << arrB[i] << " ";
    }
}