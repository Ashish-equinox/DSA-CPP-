#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    cout<<"enter elements in a 3x3 matrix: ";

// taking input for matrix
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

// row-wise sum
    // for(int i=0;i<3;i++){
    //     int sum=0;
    //     for(int j=0;j<3;j++){
    //         sum+=arr[i][j];
    //     }
    //     cout<<"Row-wise sum is: "<<sum<<" ";
    //     cout<<endl;

    // }
    // cout<<endl;

// column-wise sum
    // for(int j=0;j<3;j++){
    //     int Colsum=0;
    //     for(int i=0;i<3;i++){
    //         Colsum+=arr[i][j];
    //     }
    //     cout<<"Column-wise sum is: "<<Colsum<<" ";
    //     cout<<endl;
    // }

// largest row-sum & location of that row>>
    int temp=0,x=0;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
            
        }
        cout<<"row wise sum is: "<<sum<<" ";
        if(sum>temp)
        {
            temp=sum;
            x=i;
        }
        cout<<endl;
    }
    cout<<"greatest row-wise sum is: "<<temp<<endl;
    cout<<"that row is: "<<x;

// Do solve Q>>Print like a Wave(codestudio)
}