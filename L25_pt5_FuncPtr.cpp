#include<iostream>
using namespace std;

// Passing a pointer in a function
// void print(int *p)
// {
//     cout<<*p<<endl;
// }

// int main()
// {
//     int value=5;
//     int *p=&value;
//     print(p);
//     return 0;
// }

//Note:whenever an arr[] is passed to a fn. using fn call only a pointer pointing to arr[0] is passed to that fn as parameter & not that entire array block

int getSum(int arr[],int n){ //arr[] or *arr both will work
    
    cout<<"size of arr passed to parameter: "<<sizeof(arr)<<endl;
    // will return 8bytes & not 5*sizeof(int)=5*4=20 as parameter gets pointer to arr & not complete arr as stated above
    
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;

}

int main()
{
    int arr[6]={1,2,3,4,5,8};
    cout<<"Sum is: "<<getSum(arr,6)<<endl;
    cout<<"Sum of last 3 is: "<<getSum(arr+3,3)<<endl;
    return 0;
}

/*Benefits of assingning a pointer of an array to a fn rather than passing the complete array is:

1) it helps in sending a specific part of array to the function on which we want to do changes(eg:printing sum of last 3 elements only)

2) also saves space*/


