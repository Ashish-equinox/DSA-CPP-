#include <iostream>
using namespace std;

// strong number
// 1!+4!+5!=145

int factorial(int a){
    int pro=1;
    for(int i=1;i<=a;i++){
        pro=pro*i;
    }
    return pro;  
    //return statment must be outside the for loop so complete product is returned after fn. is terminated
}

int main()
{
    cout<<"enter your number:";
    int num{};
    cin>>num;
    int temp=num;
    int sum=0;

    while(num !=0){
        int a=num%10;
        int x=factorial(a);
        sum+=x;
        num=num/10;
    }

    num=temp;

    if(sum==num){
        cout<<"given number is strong";
    }
    else{
        cout<<"given number is not strong";
    }

}