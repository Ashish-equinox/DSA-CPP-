#include <iostream>
using namespace std;

// Q)) finding peak element of mountain array(first increases;reaches peak value;starts decreasing)

int peakElement(int mountainArray[], int size)
{
    int start = 0;
    int end = size - 1;
    int midIndex = start + (end - start) / 2;

    while (start <= end)
    {
        if (mountainArray[midIndex] < mountainArray[midIndex + 1])
        {
            start = midIndex + 1;
            return mountainArray[start];
        }
        if (mountainArray[midIndex] > mountainArray[midIndex + 1])
        {
            end = midIndex;
            return mountainArray[end];
        }
        midIndex = start + (end - start) / 2;
    }
}
int main()
{
    int mountainArray[4] = {1, 3, 10, 0};
    int ans = peakElement(mountainArray, 4);
    cout << "greatest element of mountain array:" << ans;
}
