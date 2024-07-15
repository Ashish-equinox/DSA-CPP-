#include<iostream>
using namespace std;

// int main()
// {
// ^ reference variable--> same memory location but different name
//     int i=5;
//     int &j=i; //creates a ref var.
//     cout<<i<<endl;
//     i++;
//     cout<<i<<endl;
//     j++;
//     cout<<i<<endl;
//     cout<<j<<endl;
    
//     return 0;

// }

/* 
! Maqsad of ref var:
* Use of reference var --> can be passed directly into a fn. from main fn() rather than creating a copy of that variable & changes will take place directly in main variable only and not in the copy created.
*/

void update1(int n){
    n++;
}

void update2(int &j){
    j++;
}

int main()
{
    int n=5;
    cout<<"before: "<<n<<endl;

    // & pass by value(copy of "n" created)
    update1(n);
    cout<<"after update1: "<<n<<endl;

    // & using reference variable(changes made directly on "n" in main())

    update2(n);
    cout<<"after update2: "<<n<<endl;
}
