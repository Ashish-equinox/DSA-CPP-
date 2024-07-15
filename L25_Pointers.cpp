#include<iostream>
using namespace std;

int main()
{
    int x=7;
    int *ptr=&x;
    // (*ptr)++;
    cout<<(*ptr)<<endl;
    cout<<ptr<<endl;
    cout<<"size of var x "<<sizeof(x)<<endl;
    cout<<"size of pointer ptr is "<<sizeof(ptr)<<endl;
    // size of pointer is 8 in most systems(64 bit) but here its 4(32bit)

    double i=4.74;
    double *p=&i;
    cout<<"address of i:"<<(p)<<endl;
    cout<<"value of i"<<(*p)<<endl;
    
    
}