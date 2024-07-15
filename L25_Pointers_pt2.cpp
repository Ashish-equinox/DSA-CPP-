#include<iostream>
using namespace std;

int main()
{
    int i=5;

    // initialization of pointer
    int *p=&i;
    cout<<"address of i is:"<<p;
    cout<<"value of i is:"<<*p;

    // declaration of pointer
    // both types of initz. will give same o/p.
    int *q=0; //null pointer
    q=&i;
    cout<<"address of i is:"<<q;
    cout<<"value of i is:"<<*q;


    int num=7;
    int a=num;
    a++;
    cout<<num<<endl;
    // a is present at different address so changing it won't affect num's value

    int (*x)=&num;
    cout<<"before "<<num<<endl;
    (*x)++;
    cout<<"after "<<num<<endl;
    // here x has same address as num thus changing x will change num also...

    // copying a pointer
    int *copy=x;
    cout<<x<<"-"<<copy<<endl;
    cout<<*x<<"-"<<*copy<<endl;

    // increasing j(pointer)  rather than *j
    int k=10;
    int *j=&k;
    cout<<"before j: "<<j<<endl;
    j=j+1;
    cout<<"after j: "<<j<<endl;

    // since int takes 4 bytes so if j is incremented this means it will jump 4 bytes to next integer value.
    
    return 0;



}