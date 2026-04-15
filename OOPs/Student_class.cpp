#include<iostream>
#include<string>
using namespace std;


// object life cycle
// when object created firstly constructor will be called
// then some function will be perform 
// Destructor called
class Student{
    public:
    //Attributes
    int id;
    int age;
    string name;
    int nos;

    // constructor
    // Default constructor
    Student(){
        cout<<"Default constructor"<<endl;
    }
    // Parameterized constructor
    Student(int id,int age,string name,int nos){
        cout<<"Parameterizes constructor"<<endl;
        this->id=id;
        this->age=age;
        this->name=name;
        this->nos=nos;
    }

    // Copy Constructor
    Student(const Student &srcobj)
    {
        cout<<"Student copy constructor called"<<endl;
        this->id=srcobj.id;
        this->age=srcobj.age;
        this->name=srcobj.name;
        this->nos=srcobj.nos;
    }

    // Behaviour / Methods / Function
    void study(){
        cout<<this->name<<" "<<"studying"<<endl;
    }
    void sleep(){
        cout<<this->name<<" "<<"sleeping"<<endl;
    }
    void bunk(){
        cout<<this->name<<" "<<"bunking"<<endl;
    }

    // destructor
    ~Student(){
        cout<<"Destructor"<<endl;
    }


};

int main(){
    // Student A;
    // A.age=20;
    // A.name="Arvind";
    // A.id=1;
    // A.study();

    // Student B;
    // B.id=2;
    // B.name="Aman";
    // B.age=21;

    // B.sleep();

    // Student A(1,21,"Arvind",5);          // stack
    // cout<<A.name<<" "<<A.age<<" "<<A.id<<endl;
    // A.study();

    //copy constructor
    // Student C=A;
    // cout<<C.name <<" "<<C.age<<endl;

    // Dynamic memory allocation on Heap
    Student *D=new Student(3,20,"Aman",6);
    cout<<D->name<<endl;
    cout<<D->age<<endl;
    D->study();
    delete D;
    return 0;
}