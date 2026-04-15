#include<iostream>
using namespace std;

class Prac{

    // private
    // public
    public:
    string name;
    int age;

    Prac(string n,int g){
        this->name=n;
        this->age=g;
    }

    // methods
    void printName(){
        cout<<"name --"<<this->name<<endl;
    }
    void printAge(){
        cout<<"age : "<<this->age<<endl;
    }
};

int main(){
    Prac P("Kewal",22);
    P.printName();
    P.printAge();
    Prac Q("Ashish",23);
    Q.printName();
    Q.printAge();

}