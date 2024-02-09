#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// set: no modifications done after creation;all elements are unique
// insert,find,count,erase all these fn(s) have tc--> O(log n) whereas size,begin,empty have tc O(1).
int main()
{
    set<int>s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    s.insert(0);

    for(auto i:s){
        cout<<i<<" ";

    }cout<<endl;
    
    // removed element at index "1" it++
    set<int>::iterator it=s.begin();
    it++;
        s.erase(it);
        for(auto i:s){
            cout<<i<<endl;
        }

    // checks presence of element in set and returns boolean if that element is present or not
    cout<<"5 is present or not-->"<<s.count(5)<<endl;

// This line finds the element 5 in the set s and returns an iterator itr pointing to the position of 5 in the set.

    set<int>::iterator itr=s.find(5); 

    // prints element after from 5 in set...
    // *it means value at that index will be printed
    
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;
}