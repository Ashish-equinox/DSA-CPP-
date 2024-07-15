#include<iostream>
using namespace std;

// * Polymorphism :- 1 obj. , many forms

// ^ compile-time--> a) fn overloading

class A {

    // public:
    // void sayHello(){
    //     cout<<"Hello,Homelander"<<endl;
    // }
    
    // void sayHello(string name){
    //     cout<<"Hello,Butcher"<<endl;
    // }

    // int sayHello(string name,int a){
    //     cout<<"Petite,Hughie"<<endl;
    // }

    // // above are examples of fn overloading

    
    public:
    int a;
    int b;

    public: //overloaded + to perform subtraction
    void operator+ (A &obj){
        int value1=this -> a; 

/*both obj1 and obj2 are current obj's Inside operator+:
"this" points to obj1, the left-hand operand. Therefore, this->a accesses obj1.a, which is 4.
obj is a reference to obj2, the right-hand operand. Therefore, obj.a accesses obj2.a, which is 7. */

        int value2=obj.a;
        cout<<"output "<<value2-value1<<endl;
    }
};

class Parent1{
    public:
    void Thor(){
        cout<<"I am Thor"<<endl;
    }
};

class child1 : public Parent1{
    public:
    void Thor(){
        cout<<"Bring me Thanos!!"<<endl;
    }
};

int main(){
    A obj;

    //* execution of overloaded fn(s) depends on that fn's argument type and number

    // obj.sayHello(); 

    // string s;
    // obj.sayHello(s);

    // obj.sayHello(s,5);

    // above are examples of fn overloading
    
    //-----------------------------------------------------------//

    // * operator overloading

    // A obj1 , obj2;
    // obj1.a=4;
    // obj2.a=7;

    // obj1+obj2;

    // * Run-time/dynamic polymorphism
    // ^ Include only one type --> Method Overriding

    child1 a;
    a.Thor();
    // child1's redefined fn of Thor will be executed as it overrides Thor of Parent1
    
    // Parent1 b;
    // b.Thor(); 
   
}