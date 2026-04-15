#include<iostream>
#include<string>
using namespace std;

class Vehicle{
    // public:
    protected:
    string name;
    string model;
    int nofTyres;

    // constructor
    public:
    Vehicle(string _name,string _model,int _nofTyres){
        this ->name=_name;
        this->model= _model;
        this->nofTyres=_nofTyres;
    }

    public:
    void start_engine(){
        cout<<"Engine is starting"<<" "<<name<<endl;
    }

    void stop_engine(){
        cout<<"Engine is stop"<<" "<<name<<endl;
    }
};

class Car : public Vehicle{
    // public:
    protected:
    int noOfDoor;
    string transmissionOfTyre;

    public:
    Car(string _name,string _model,int _noOfTyres,int _noOfDoor,string _transmissionOfTyre):Vehicle(_name,_model,_noOfTyres){
        this->noOfDoor=_noOfDoor;
        this->transmissionOfTyre=_transmissionOfTyre;
    }
    void startAc(){
        cout<<"AC is started "<<" "<<name<<endl;
    }

};

class MotorCycle : public Vehicle{
    protected:
    string handleBarStyle;
    string suspensionTypes;

    public:
    MotorCycle(string _name,string _model,int _nofTyres,string _handleBarStyle,string _suspensionTypes):Vehicle(_name,_model,_nofTyres){
        
        this->handleBarStyle=_handleBarStyle;
        this->suspensionTypes=_suspensionTypes;
    }
    void Wheelie(){
        cout<<"Wheelie hota h "<<" "<<name<<endl;
    }

};

int main(){
    Car A("Swift","600",4,4,"yes");
    A.start_engine();
    A.stop_engine();

    MotorCycle M("BMW","LXI",2,"yes","yes");
    M.start_engine();
    M.Wheelie();
    M.stop_engine();
    
}
