#include <iostream>
#include<bits/stdc++.h>

using namespace std;

// Q>> Swapping alternate elements in an array

// void swapAlternate(int arr[], int a)
// {

//     for (int i = 0; i < a; i += 2)
//         if (i < a - 1)
//         {
//             swap(arr[i], arr[i + 1]);
//         }
// }
// void printArray(int arr[], int a)
// {
//     for (int i = 0; i < a; i++)
//     {

//         cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     int arr_odd[5] = {1, 2, 3, 6, 7};
//     int arr_even[6] = {4, 5, 7, 8, 9, 10};
//     swapAlternate(arr_odd, 5);
//     printArray(arr_odd, 5);
//     cout << endl;

//     swapAlternate(arr_even, 6);
//     printArray(arr_even, 6);
// }

// ------------------------------------------------------------------------------------------------------------------------------------//

// Q2>> Find unique elemeny in array
// M1--brute force[O(n^2)= O(49)]

// int main()
// {
//     int arr[7] = {3, 7, 2, 2, 7, 3, 4};
//     int temp = 0;
//     for (int i = 0; i < 7; i++)
//     {
//         for (int j = 0; j < 7; j++)
//         {
//             if (arr[i] != arr[j])
//             {
//                 temp = arr[i];
//             }
//         }
//     }
//     cout << "Unique element in array: " << temp;
// }

// int main()
// {
//     // tc=O(7)
//     int ans=0;
//     int arr[7] = {3, 7, 2, 2, 7, 3, 4};
//     for(int i=0;i<7;i++){
//         ans=ans^arr[i]; // XOR only returns that no. when inputs are unique...
//     }
//     cout<<ans;
// }

int findDuplicate(vector<int> &arr) 
{
    sort(arr.begin(),arr.end());
    for(int i=1;i<arr.size();i++){
        if(arr[i]==arr[i-1]){
            return arr[i];
        }
    }
	
}



