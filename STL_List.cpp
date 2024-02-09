#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// unlike other STl data structures elements in a list can't be accessed directly as we have to iterate to get that element... 

int main()
{
    list<int>l; 

    // push_back/front $ pop_back/front can be done in List also(just like dequeue)...
    l.push_back(1);
    l.push_front(2);
    // l.pop_front();

    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());
    cout<<"after erase:";
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"size of list:"<<l.size()<<endl;

    list<int>x(5,100);
    for(int i:x){
        cout<<i<<" ";
    }cout<<endl;

    list<int>copy_l(l);
    for(int i:copy_l){
        cout<<i<<" ";
    }
}