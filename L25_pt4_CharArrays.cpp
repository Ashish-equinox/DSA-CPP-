#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    char ch[6]="abcde"; //char elements include "\0"at the end thus ch[6] taken

    cout<<arr<<endl; //prints address of first element of array "arr"
    cout<<ch<<endl; //prints all elements incase of char array "ch"

    char *c=&ch[0];
    // prints entire string
    cout<<c<<endl;

    char temp='z';
    char *p=&temp; 
    cout<<p<<endl;
    // z is stored in var. named temp whose address is stored in p which when printed will print z and other random characters until it gets '\0'.If its size was already defined then this won't happen.

    // Imp:
    char ch[6]="abcdf";
    // BTS:first temporary memory is created in which "abcdf" is stored and then when "ch" is defined elements from temp are copied to "ch".

    char *c="abcde";
    // BTS:first "abcde" stored in temp irrespectively & when pointer c is created,address of temp stored in c. 
    // Avoid this way of defining pointer(for char)-bad practice

}