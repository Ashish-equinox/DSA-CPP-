// GCD(a,b)
#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    // gcd of a no. with 0 is the no. itself
    if(a==0){ 
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b){
        
    // if a!=b and a>b then subtract a from b until both become equal & then return a or b as gcd(same if b>a)
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}
int main()
{
    cout<<"enter 2 nos. a&b: ";
    int a,b;
    int e1,e2;
    cin>>a>>b;
    cout<<"gcd of both nos. is:"<<gcd(a,b);
}