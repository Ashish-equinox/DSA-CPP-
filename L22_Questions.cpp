#include<iostream>
using namespace std;
char getMaxOccCharacter(string s)
{
    // create a frequency counter named arr from a-z
    int arr[26]={0};
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        int number=0;
        number=ch-'a';
        // converted char of s from char to int
        arr[number]++;
        // increase the frequency counter of current character in s by 1
    }

    int maxi=-1, ans=0;
    // maxi is no. of occurrences of previous char(in arr)
    // ans is index of max occurring char in s
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    // since ans contains index of max occurring char this added to 97('a') will give that Ascii character
    char finalAns='a'+ans;
    return finalAns;
}
int main()
{
    cout<<"enter ur string: ";
    string str;
    cin>>str;
    cout<<"character having maximum frequency is: "<<getMaxOccCharacter("testcase");
}
// time complexity--> O(n)
// space complexity--> O(1)