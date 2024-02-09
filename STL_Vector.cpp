#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//vector: dynamic array in which the size of a vector can change dynamically during runtime. It automatically manages memory allocation and resizing as elements are added or removed.

int main(){
    vector<int>v;

    // capacity: total memory allocated to a vector(can be checked by v.capacity())
    // size: no. of elements in a vector
    
    // push_back:appends an element at the end of vector

    v.push_back(1);
    cout<<"capacity:"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity:"<<v.capacity()<<endl;

    // when there are 3 elements in vector its old capacity(i.e. 2) is full and thus it doubles it to 4(dynamic memory allocation) 

    v.push_back(3);
    cout<<"capacity:"<<v.capacity()<<endl;
    cout<<"size:"<<v.size()<<endl;

    // v.push_back(7);
    // cout<<"element at index 3: "<<v.at(3)<<endl;

    // int size=v.size();
    cout<<"before pop:"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back(); //last element removed

    cout<<"after pop:"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.front();
    v.back();

    vector<int>x(5,2); //fixing the size of vector and initz. all values with 2
    vector<int>last(x); //copying all values of x in last array
    for(int i:last){
        cout<<i<<" "; //no need to cout<<last[i] as it(i) is already iterating over vector--> last
    }


    


  
    



}

