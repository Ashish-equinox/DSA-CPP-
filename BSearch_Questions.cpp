#include <iostream>
using namespace std;

// (Q1) {M} First and Last position of element in Sorted array

int firstOccurrence(int arr_1[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int midIndex = start + (end - start) / 2;
    int ans = -1; // ans value taken as -1 bcoz if there is no such value equal to key in given array then -1 will be returned(ATQ)       otherwise ans value will be replaced by midIndex...
    // eg: int arr_1[7] = {1, 2, 3, 3, 3, 10, 16};
    // 1)) made a var. "ans" to store midIndex and return it in the very end after finding first/last occurrence index
    // 2)) to find first occurrence we have to move LHS of midIndex by end=midIndex-1
    // 3)) to find last occurrence we have to move RHS of midIndex by start=midIndex+1;

    while (start <= end)
    {
        if (arr_1[midIndex] == key)
        {
            ans = midIndex;
            end = midIndex - 1;
        }

        if (key > arr_1[midIndex])
        {
            start = midIndex + 1;
        }
        else if (key < arr_1[midIndex])
        {
            end = midIndex - 1;
        }
        midIndex = start + (end - start) / 2;
    }
    return ans;
}

int lastOccurrence(int arr_1[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int midIndex = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr_1[midIndex] == key)
        {
            ans = midIndex;
            start = midIndex + 1;
        }

        else if (key > arr_1[midIndex])
        {
            start = midIndex + 1;
        }
        else if (key < arr_1[midIndex])
        {
            end = midIndex - 1;
        }
        midIndex = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr_1[7] = {1, 2, 3, 3, 3, 10, 16};

    pair<int, int> p;
    p.first = firstOccurrence(arr_1, 7, 3);
    p.second = lastOccurrence(arr_1, 7, 3);
    // pair<int, int> is not a data type itself, but rather a template class provided by the Standard Template Library (STL). It represents a pair of two values of potentially different types. In this case, pair<int, int> denotes a pair where both elements are of type int.

    cout << "first occurence of 3 in array is at index:" << p.first << endl;
    cout << "last occurence of 3 in array is at index:" << p.second << endl;

    // Q)) total occurrences of key: (last occurrence index-first occurrence index)+1
    int totalOccurrence=(p.second-p.first)+1;
    cout<<"total occurrence of given key 3 :"<<totalOccurrence;    
}
