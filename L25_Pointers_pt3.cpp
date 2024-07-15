#include<iostream>
using namespace std;

int main()
{
    /*
    int arr[10]={23,122,41,67};

    cout<<"address of first memory block: "<<arr<<endl;
    cout<<&arr[0]<<endl;
    // both represent address of 0th element

    cout<<"M1"<<*arr<<endl; //value at arr[0]
    cout<<"M2"<<*arr+1<<endl; //value at arr[0]+1
    cout<<"M3"<<*(arr+1)<<endl; //value at arr[1]
    cout<<"M4"<<*(arr)+1<<endl; //value at arr[0]+1

    cout<<"M5"<<*(arr+2)<<endl; //value at arr[2]
    // If arr[0] is at 710 address then arr+2 will be at 718 as each element has size 4 bytes.

    int i=3;
    cout<<arr[i]<<"="<<*(arr+i)<<endl;
    cout<<i[arr]<<"="<<*(i+arr)<<endl;

//  Confusing Eg:1
    int temp[10]={1,2};
    cout<<sizeof(temp)<<endl; //no.of elements*size of int
    cout<<"1st"<<sizeof(*temp)<<endl; //*temp is 0th element-->int-->4bytes
    cout<<"2nd"<<sizeof(&temp)<<endl; //pointer has 8bytes to hold address(64bit)

//  Confusing Eg:2
    int *ptr=&temp[0];
    cout<<sizeof(ptr)<<endl; //ans:8(32 bit that's why 4bytes)
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;
*/
    
//  Imp.Part
    int arr[10];
    // arr=arr+1;
    // address of arr is already stored in symbol table thus changing it will give error & its address won't be changed.

    int *ptr=&arr[0];
    cout<<ptr<<endl;
    ptr=ptr+2;
    cout<<ptr<<endl;
    // this wil work for pointer ptr bcoz here its changing address of arr stored in it & not its own address.

}