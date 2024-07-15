#include<iostream>
#include<cstring> // TODO: cstring for using strcpy 
using namespace std;

class Hero{
    // properties
    private:
    int health;

    public:
    char *name; //dynamic sizing of array
    char level;
    static int timeTOComplete; // static property


    // ^ Default const
    Hero(){ 
        cout<<"constructor called"<<endl;
        // * disadvantage of default copy const.
        name= new char[100];
    } 

    // ^ Parameterized const
    Hero(int health,char level){
        cout<<"value in this--> "<<this<<endl;
        this-> health=health;
        this-> level=level;

        // * this--> keyword used as pointer to current obj. as we aim to change value of ramesh's health with user given health in argument, so to avoid confusion b/w both healths this keyword is used...
    }

    // ^ Our copy const 
    
    // TODO (has to use pass by reference otherwise using copy construct on a duplicate/copy of that property's value will cause infinite loop, thus use pass by ref)
    Hero(Hero&temp){
        // cout<<"our copy const called"<<endl;

        // TODO: create copy of name[] for deep copy
        char *ch=new char[sizeof(name) + 1];
        strcpy(ch,temp.name);

        this->name=ch; // // replaced this->name=temp.name
        this->health=temp.health;
        this->level=temp.level;
    }
    
    void getHealth(){
        cout<< health;
    }

    void setHealth(int h){
        health=h;
    }

    void getLevel(){
        cout<<level;
    }

    void setLevel(char lvl){
        level=lvl;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }

    void print(){
        cout<<endl;
        cout<< "[" << "name:"<<this-> name <<" ,";
        cout<<"health:"<<this->health<<" ,";
        cout<<"level:"<<this->level<< "]" <<endl;
    }

    // TODO: destructor syntax
    ~Hero(){
        cout<<"destructor called"<<endl;
    }

    // * static function
    static int random(){
        cout<<timeTOComplete<<endl; 
    //no other property can be printed as only this obj is static
    }
};

// TODO: syntax for creating static property
int Hero :: timeTOComplete = 5; 

int main(){

    // ^ Constructors

    // Hero ramesh; //(for defualt)
    // ramesh.Hero() const created automatically upon obj creation(not visible). If a const created manually then this automatic const will die... 
    // created a const Hero(inside class) to show that when obj ramesh created then it will be called automatically & comment printed.

    Hero ramesh(10,'Z'); //(for parameterized)
    cout<<"address of ramesh--> "<< &ramesh<<endl;
    ramesh.getHealth();
    cout<<endl;

    // Hero S(70,'C');
    // S.print();   

    // // Copy const(default)
    // Hero R(S);
    // R.print();

    // * Default copy construct creates shallow copy i.e if we make change in independent obj's properties then it also changes values of dependent obj.

    // ^ disadvantage of shallow copy

    Hero hero1;

    char name[10]="Ashish";
    hero1.setName(name);
    hero1.setHealth(18);
    hero1.setLevel('E');

    hero1.print();

    // ^ creating copy via default const.
    // Hero hero2(hero1); 
    // hero2.print(); 

    // cout<<endl;

    // cout<<"First letter of hero1's name changed:";
    // hero1.name[0]='$';
    // hero1.print();
    // cout<<endl;

    // cout<<"Effect on hero2's name can't be seen due to deep copy now:";
    // hero1 will be temp and hero2 will be current obj as its already created like this--> Hero hero2(hero1);
    // hero2.print();

    // * deep copy: creating an entirely different array(char *ch) for dependent obj(hero2) so that changes in independent obj(hero1) won't reflect in hero2.

    // ^ Destructor

    //* Static allocation for obj-> a
    Hero a;

    //* dynamic allocation
    Hero *b=new Hero();
    delete b; //desc is invoked as soon as 'delete' is used alongwith an obj

    // * static keyword: it helps in accessing a specific property of a class without the need for creating an obj

    // syntax for initz-> datatype className :: (scope resolution operator) fieldName=value;

    cout<<"time to complete this game is: "<<Hero::timeTOComplete<<endl;

    // not recommended to create an obj for any static prop like:
    // Hero a;
    // cout<<a.timeTOComplete<<endl;

    // * static fn[invoked like this-->className :: staticFnName()]
    cout<<"result of static fn-> random is: "<<Hero::random()<<endl;

    
}