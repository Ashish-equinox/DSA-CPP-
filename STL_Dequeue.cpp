#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// dequeue: array in which elements can be added/deleted from both ends
// dequeue--> double-ended queue 
int main()
{
    deque<int>d;

    // here only insertion from both start/end is there...
    d.push_back(1);
    d.push_front(2);
    // for(int i:d){
    //     cout<<i<<" "; 
    // }cout<<endl;

    // d.pop_front();
    // for(int i:d){
    //     cout<<i<<" ";
    // }cout<<endl;

    d.push_back(4);
    d.push_back(5);
    // cout<<"element at index 2:"<<d.at(2);
    // cout<<endl;


    // cout<<"front:"<<d.front();
    // cout<<endl;
    // cout<<"back:"<<d.back();
    // cout<<endl;


    // This code will correctly print the value of the first element in the deque
    // cout<<*d.begin(); 
    // cout<<endl;

    // In order to remove first/last fn. pop_front/back is used but erase fn. is used to remove a series of elements from deque...

    // d.erase(d.begin(),d.begin()+1);  
    // //erases first element i.e. 2 from dequeue...
    // cout<<"after erase"<<d.size()<<endl;
    // for(int i:d){
    //     cout<<i<<endl;
    // }

    
    

    



}
