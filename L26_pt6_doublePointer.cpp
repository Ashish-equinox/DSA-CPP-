#include<iostream>
using namespace std;

void update(int **p2)
{
    p2=p2+1;
    // kuch change hoga-No
    // as pass by value & changes to P2 is specific to update() only 

    // *p2=*p2+1;
    // kuch change hoga-Yes
    // directly changing value at p2

    // **p2=**p2+1; 
    // kuch change hoga-Yes
}
int main()
{
    int i=5;
    int *p=&i;
    int **p2=&p;

/*  cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl; //prints value stored in i
    cout<<endl;

    // all 3 will print address of p
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;
    
    cout<<endl;
    
    cout<<&p<<endl;
    cout<<p2<<endl;
*/
    cout<<endl<<endl; //2 blank line in o/p
    
    cout<<"Before"<<i<<endl;
    cout<<"Before"<<p<<endl;
    cout<<"Before"<<p2<<endl;
    update(p2); //using a fn.(in double pointer)
    cout<<"after"<<i<<endl;
    cout<<"after"<<p<<endl;
    cout<<"after"<<p2<<endl;
    cout<<endl<<endl;
    

}