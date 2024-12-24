#include<iostream>
#include<vector>
using namespace std;


// Q1.. reverse array using recursion(avoid 2 ptr, use only 1)

// int n = arr.size();
// end=n-1 & decrease constantly rather take end as n-start-1

/* void rev(vector<int>& arr,int start){
    int n=arr.size();

    if(start>n/2) return;

    swap(arr[start],arr[n-start-1]);

    rev(arr,start+1);

}
int main(){
    vector<int> arr(5);
    arr={1,2,3,4,5};
    rev(arr,0);
    for(int x:arr){
        cout<<x<<endl;
    }
} */

// -------------------------------------------------------------//

// Q2.. Check palindrome(Imp)


/* bool checkPal(vector<char>& word, int start){
    int n=word.size();

    if(start>=n/2) return true ;

//  write false condtion first if it makes the code flow simpler
    if(word[start]!=word[n-start-1]){
        return false;
    }
    
    return checkPal(word,start+1);
}

int main(){
    int n;
    cout<<"enter size of word: ";
    cin>>n;

    vector<char> word(n);
    cout<<"enter ur word: ";
    for(int i=0;i<n;i++){
        cin>>word[i];
    }

    if(checkPal(word,0)){
        cout<<"is a palindrome";
    }
    else{
        cout<<"not a palindrome";
    }

    return 0;
} */

// -------------------------------------------------------------//

