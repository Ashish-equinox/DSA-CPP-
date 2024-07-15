/*
* Note: we always used to take size of array at compile time(good practice and not during runtime).
? Reason: 2 types of memory--> stack and heap || stack--> allocated during runtime and if sizeof(array) exceeds this then error occurs whereas heap is quite big but has special declaration for it...
* for dynamic/runtime allocation of an array we have to use heap
? syntax: new char; (variable isn't named)
* for naming it use a pointer to that var--> ~ "char *ch=new char";
*/
#include<iostream>
using namespace std;

int getSum(int *array,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=array[i];
    }
    return sum;
}

int main(){
    int n;
    cout<<"enter total elements: ";
    cin>>n;

    // * variable size array
    int *arr=new int[n];

    // taking input in array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=getSum(arr,n);
    cout<<"sum of all elements: "<<ans<<endl;
    cout<<"variable size of array created successfully";
}
