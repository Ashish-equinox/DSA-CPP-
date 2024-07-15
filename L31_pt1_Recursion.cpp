#include<iostream>
using namespace std;

// for factorial
int factorial(int n){
    if(n==0){
        return 1; 
//* the base case will give value of 0! which will help in giving solution of 1! which will answer value of 2! and this will go on...

// ^ The intermediate values{2*1!} are temporarily stored in the call stack until the computation{1*0!} is complete.
    }
    int smallerProblem=factorial(n-1);
    int biggerProblem= n*smallerProblem;

    return biggerProblem;
}
int main(){
    int n;
    cin>>n;

    int ans=factorial(n);
    
    cout<<ans;
}



