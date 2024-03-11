#include <iostream>
using namespace std;

void selectionSort(int Array[], int size)
{
    int minIndex = 0;
    for (int i = 0; i < size - 1; i++)
    {
        minIndex = i;
        for (int j = minIndex + 1; j < size; j++)
        {
            if (Array[j] < Array[minIndex])
            {
                //comparing each value of array with minIndex and updating it if there's a value smaller than the value in minIndex;swapping will be done after all numbers are compared thus swap used outside the loop... 
                minIndex = j;
            }
        }
        swap(Array[minIndex], Array[i]);
        // swap(new value,old value);
    }
}

int main()
{
    int Array[5] = {64, 25, 12, 22, 11};
    selectionSort(Array, 5);
    cout << "Sorted array is: ";
    for (int i = 0; i < 5; i++) {
        cout << Array[i] << " ";
    }
    return 0;
}
