#include <iostream>
using namespace std;

// 1-d character array
int getLength(char name[])
{
    int count=0;

    for(int i=0;name[i] !='\0';i++){
        count+=1;
    }
    return count;
}

void reverseString(char name[],int len)
{
    // 2-pointer approach
    int start=0;int end=len-1;
    while(start<end){

        swap(name[start],name[end]);
        start++;end--;
    }
    
} 

// after using this fn. words(like noon and Noon will be both be considered as palindrome strings)
char toLower(char ch)
{
    if(ch>='a' && ch<='z'){
        return ch;
    }else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool checkPalindrome(char a[],int len)
{
    int start=0;int end=len-1;
    while(start<=end){
        if(toLower( a[start] )!=toLower( a[end] ))
        {
            return 0;
        }
        else{
            start++;end--;
        }
    }
    return 1;
}
int main()
{
    char name[20];
    cout<<"enter your name:";
    cin>>name;
    cout<<"Your name is:"<<name<<endl;
    // incase of cin if space,tab or newline is used between letters then anything before these will only be considered...
    // after input is given null character(\0) is inserted on its own and anything before that "\0" is only printed

    cout<<"length of string:"<<getLength(name)<<endl;
    int len=getLength(name);
    reverseString(name,len);
    cout<<"reverse of string:"<<name<<endl;
    cout<<"given string is a Palindrome--> "<<checkPalindrome(name,len);

// string--> similar to character arrays but differences are there
    string str="ashish";
    str.length();
    str.push_back('c');
    str.pop_back();

// HW--> key differences between string and character array
/* 1)strings provide dynamic sizing whereas for char array memory once alloacated(manually) can't be changed w/o creating a new one
2) strings are null-terminated, meaning they automatically handle the termination character ('\0') to mark the end of the string. 
You need to explicitly add the null-termination character at the end of the character array to denote its end. For example, char myArray[] = {'H', 'e', 'l', 'l', 'o','\0'}; */
     
}