#include <iostream>
using namespace std;

// // Q1))-printing minimum and maximum of an array
// int main()
// {
//     cout << "enter size of array:";
//     int size{};
//     cin >> size;

//     // taking user input in an array
//     int arr[100]; // avoid taking size var. rather put int arr[size]=100 as taking var. as parameter is considered bad practice...

//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     int Max = 0;
//     int Min = arr[0];

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > Max)
//         {
//             Max = arr[i];
//         }
//     }
//     cout << "Maximum of array is:" << Max << endl;

//     for (int j = 0; j < size; j++)
//     {

//         if (arr[j] < Min)
//         {
//             Min = arr[j];
//         }
//     }
//     cout << "Minimum of array is:" << Min;
// }

// Q2))-sum of elements in array

// int main()
// {
//     cout << "enter size of array:";
//     int size{};
//     cin >> size;

//     int sum = 0;

//     // taking user input in an array
//     int arr[100];

//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//         sum += arr[i];
//     }
//     cout << "sum of elements of array:" << sum;
// }

// Q3--> Linear Search in array

// bool search(int arr[], int size, int key)
// {

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             return 1;
//         }
        
//     }
//     return 0; 
// }

// int main()
// {
//     int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

//     cout << "enter the element to search for: " ;
//     int key{};
//     cin >> key;

//     bool found = search(arr, 10, key);

//     if (found)
//     {
//         cout << "Key is present" << endl;
//     }
//     else
//     {
//         cout << "key is absent" << endl;
//     }
// }


