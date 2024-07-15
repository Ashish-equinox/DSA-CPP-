#include<iostream>
using namespace std;

// * Types of Inheritence

class Animal{
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"animal noices"<<endl;
    }
};

class Human{
    public:
    string color;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class demon: public Animal,public Human{
    // * this class inherits from multiple parents thus it obj has properties and func(s) of both classes animal and human...
};

class Cat : public Animal{
    public:
    void car(){
        cout<<"meowing car"<<endl;
    }
};

class Dog : public Animal{
    public:
    void dog(){
        cout<<"barking"<<endl;
    }
};

// * Hybrid Inheritence [hierarchial(among a,b & c)+single(b.w d&c)]

class a{
    public:
    void inA(){
        cout<<"Inside A"<<endl;
    }
};

class d{
    public:
    void inD(){
        cout<<"Inside D"<<endl;
    }
};

class b:public a{
    
    void inB(){
        cout<<"Inside B"<<endl;
    }
};

class Hybr:public a , public d{
    public:
    void inHybr(){
        cout<<"Inside Hybr"<<endl;
    }
};

// * Inheritance ambiguity

class F1{
    public:
    void abc(){
        cout<<"print F1"<<endl;
    }
};

class F2{
    public:
    void abc(){
        cout<<"print F2"<<endl;
    }
};

class F3 : public F1,public F2{

};

int main(){
    // demon d;
    // d.bark();
    // d.speak();
    // // * above is example of multiple inheritance
    
    // Cat c;
    // c.age;
    // c.car();

    // Dog d;
    // d.weight;
    // d.dog();
    // // * above is example of *heirarchical* inheritance

    
    // Hybr X;
    // X.inA();
    // X.inD();
    // X.inHybr();
    // // * above is example of *hybrid* inheritence as Hybr's obj X has access to both A and D's fn.

    // ^ Inheritance ambiguity:

    // F3 obj1;
    // obj1.F1::abc(); //solved ambiguity
    // obj1.F2::abc();

    // It will execute abc() of preferred class




   


    

    


}