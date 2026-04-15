#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    int id;
    int age;
    int nos;
    string name;

    private:
    string gf;
    float *gpa;

    public:
    // accessing privste so need to setter or getter function
    void setGpa(float a){
        *this->gpa=a;
    }

    float getGpa() const{
        return *this->gpa;
    }

    Student(int id,int age,string name,int nos,float gpa,string gf){
        cout<<"Constructor parameterized"<<endl;
        this->id=id;
        this->age=age;
        this->name=name;
        this->nos=nos;
        this->gpa=new float(gpa);
        this->gf;


    }

    // function
    void sleep(){
        cout<<"sleeping "<<endl;
    }
    void study(){
        cout<<"studying"<<endl;
    }
    void bunk(){
        cout<<"bunking"<<endl;
    }

    // Destructor
    ~Student(){
        cout<<"Destructor called"<<endl;
    }

    // private things
    private:
    void gfChatting(){
        cout<<this->gf<<" "<<"chatting with gf"<<endl;
    }
};

int main(){
    Student A(1,23,"Arvind",5,7,"yashi");
    cout<<A.age<<endl;
    cout<<A.getGpa()<<endl;
    A.setGpa(8.1);
    cout<<A.getGpa()<<endl;
}