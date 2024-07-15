#include<iostream> //preprocessor directive
using namespace std;

// * Macro: a piece of code in a program that is replaced by value of macro

#define pi 3.14 //macro
// ? advantages of using macro over a variable: a) no memory taken b) variable can be modified within main() but macro can't be changed within main()


int main(){
    int r=5;
    // pi+=1; macros can't be modified
    double area=pi*r*r;
    cout<<"area of circle is: "<<area<<endl;
    
    return 0;
}

/*  
* diff b/w macro and preprocessor directive:
^ 1) ppd is used to include the contents of header files into the current source file
^ 2) macros are used to define constants or inline code snippets
*/

/*
* Tertiary operator for If-else condition:

^ simple way
if(a>b){
    ans=a;
}
else{
    ans=b;
}

^ tertiary operator
ans=(a>b)?a:b;
*/