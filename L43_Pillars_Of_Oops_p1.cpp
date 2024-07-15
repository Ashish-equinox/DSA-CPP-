#include<iostream>
using namespace std;

// * inheritence using different access modifiers

class Human{
    private:
    int height;
    
    public:
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight=w;
    }


};

class Male : protected Human{
    public:
    string color;

    void sleep(){
        cout<<"Male sleeping"<<endl;
    }
    int getHeight(){
        return this->height;
        //* not accessible even within class as parent class has set it to private
    }
    
    
};

int main(){
    Male m1;
    // cout<<m1.height<<endl;

    // * class male has height as protected property thus it can be accessed only within that class or inherited class or using getter/setter(comes under within that class only)
    cout<<m1.getHeight()<<endl; //used getter

}