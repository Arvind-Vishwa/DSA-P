// polymorphism
// Static polymorphism  ---> compile time polymor
// function overloading , operator overloading
// function overloading --->same function name but different argument type and augment count

/*
#include<iostream>
using namespace std;

class Add{

    public:
    int sum(int x,int y){
        return x+y;
    }

    int sum(int x,int y,int z){
        return x+y+z;
    }

    double sum(double x,double y){
        return x+y;
    }

};

int main(){
Add A;
cout<<A.sum(2,3)<<endl;
cout<<A.sum(2,3,4)<<endl;
cout<<A.sum(3.2,4.3)<<endl;

}

*/

// operator overloading 
// when operators are overloaded they execute user-defined functions whenever used, allowing for 
// customised behaviour

/*
    syntax 
    ret_type operator <op> (args){
    // some work
    return    
    }
*/

/*
#include<iostream>
using namespace std;

class Complex{
    public:
    int real;
    int imag;

    Complex(){
        real=imag=-1;
    }
    Complex(int r,int i){
        this->real=r;
        this->imag=i;
    }

    Complex operator+(const Complex &B){
        // this -> A instance
        Complex temp;
        temp.real=this->real+ B.real;
        temp.imag=this->imag+B.imag;
        return temp;
    }

    void print(){
        printf("[%d + i%d]", this->real, this->imag);
    }
};

int main(){
    Complex C(10,5);
    Complex B(20,3);
    Complex A=C+B;
    A.print();
    
    return 0;
}

*/

// Runtime polymorphism
// 1 --> Function Overriding 
// 2 -> Early vs  late binding
// 3 -> Virtual Keyword -Helps to achieve polymorphism by deferring binding decsion to runtime
// 4 -> Override Keyword - Helps to make the intention clear and allows the compiler to enforce
// Overriding rules, make your code more safer and easier to undestand
// Upcasting /DownCasting

#include<iostream>
#include<string>
using namespace std;

class Shape{
    public:
    virtual void draw(){
        cout<<"Generic Drawing.. "<<endl;
    }
};

class Circle:public Shape{
    public:
    void draw(){
        cout<<"Circle is drawing.. "<<endl;
    }
};

class Rectangle:public Shape{
    public:
    void draw(){
        cout<<"Rectangle is drawing.."<<endl;
    }
};

void ShapeDrawing(Shape *s){
    s ->draw();       // draw is polymorphic
}

int main(){

    Circle c;
    Rectangle r;
    ShapeDrawing(&c);
    ShapeDrawing(&r);

}