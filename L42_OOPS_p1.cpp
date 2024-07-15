#include<iostream>
// #include "Hero.cpp"
using namespace std;


class Hero{
    // ^ properties/data members
    private:
    int health;

    public:
    char level;

    // ^ defining getter
    int getHealth(){
        return health;
    }

    // ^ defining setter
    void setHealth(int h){
        health=h;
    }
};

int main(){


    // ^ object creation
    Hero Paul;
    cout<< "size of class: "<<sizeof(Paul);
    // note: we created obj->Paul to find size of class as class when defined doesn't have any size until its obj is created
    // size of class should be 5 bytes(4->int,1->char) but padding of 3 bytes is done by compiler

    // * by default set to private--> change properties to public first 
    // * garbage value printed until value of property set manually

    // ^ If we want to access the private property of a class outside that class then use "getters-setters" method.

    Paul.setHealth(80); //setter used
    Paul.level='A';
    cout<<"health is: "<<Paul.getHealth()<<endl; //getter used
    cout<<"Level is: "<<Paul.level<<endl; 

    // * static allocation
    Hero a;
    a.setHealth(50);
    a.level='B';
    cout<<"health of a is: "<<a.getHealth()<<endl;
    cout<<"level of a is: "<<a.level<<endl;

    // * dynamic allocation
    // I can dynamically allocate the properties of class "hero" for object "b"

    Hero *b= new Hero ; //obj created in heap and pointer b points to that obj
    b->setHealth(100); 
    //either use -> or (*b).setHealth(100)
    b->level='C';
    cout<<"health of c is: "<<b->getHealth()<<endl;
    cout<<"lvl of c is: "<<b->level<<endl;

}

// a class is a blueprint for creating objects that encapsulates data and methods to manipulate that data

