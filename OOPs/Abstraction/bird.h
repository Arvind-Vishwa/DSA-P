// defining a header file
#if !defined(BIRD_H)
#endif !defined(BIRD_H)
#define BIRD_H
#include<iostream>
using namespace std;

class Bird{
    public:
    virtual void eat()=0;
    virtual void fly()=0;
    // classes that inherits this class
    // has to implement pure virtual fun

};
class Sparrow:public Bird{
    public:
    void eat(){
        cout<<"Sparrow is eating\n";
    }
    void fly(){
        cout<<"Sparrow is fly\n";
    }
};
class Eagle:public Bird{
    public:
    void eat(){
        cout<<"Eagle is eating\n";
    }
    void fly(){
        cout<<"Eagle is fly\n";
    }
};

