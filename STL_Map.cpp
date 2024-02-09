#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//  a map called m which maps integer keys to string values
int main()
{
    map<int, string> m;

    m[1] = "babbar";
    m[2] = "love";
    m[13] = "kumar";
    m[3] = "ashish";

    // var."i" iterates over key(i.first) and value(i.second)-->follows ascending order for keys while inserting in map;keys are unique.
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "finding 13: " << m.count(13) << endl;
    // count is a membership fn. which checks presence of entity mentioned in parantheses of count fn.(bool)

    // m.erase(3); //removing that key-value pair
    // cout<<"after erase"<<endl;
    // for(auto i:m){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    // The find() function takes the key of the element you want to find as an argument and returns an iterator to the element if it's found. If the element is not found, it returns an iterator pointing to the end of the container.

    // (*i).first essentially retrieves the key of the element that i is pointing to in the map.

    auto it = m.find(13);
    if (it != m.end())
    {
        for (auto i = it; i != m.end(); i++)
        {
            cout << (*i).first << endl;
        }
    }
    else
    {
        cout << "Key 13 not found in the map." << endl;
    }
}