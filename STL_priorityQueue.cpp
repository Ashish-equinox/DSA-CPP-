#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// 2 types of priority_queue: a)Max heap(queue in which elements are arranged in descending order;when popped FIFO priority)
// b)Min heap(queue in which elements are arranged in ascending order)

int main()
{
    // max heap
    priority_queue<int>maxi;

    // Imp: min-heap
    // So, priority_queue<int, vector<int>, greater<int>> mini; creates a priority queue named mini that stores integers (int) using a vector as the underlying container, and it's ordered such that the smallest element has the highest priority (min-heap).
    // greater<int> is inbuilt fn. from STL that compares a,b and swaps them if a>b...
    
    priority_queue<int,vector<int> , greater<int> > mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    int n=maxi.size();

    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop(); 
    }cout<<endl;

cout<<"is it empty? "<<mini.empty()<<endl;
}