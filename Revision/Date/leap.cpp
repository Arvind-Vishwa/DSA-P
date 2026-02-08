// Leap year
#include<iostream>
using namespace std;

void findLeap(int n){
    if(n%400 == 0){
        // century may be leap year
        cout<<"Leap year guys!"<<endl;
    }else if(n%100 == 0){
        // normal century
        cout<<"Not Leap Year"<<endl;
    }else if(n%4 == 0){
        // regular year
        cout<<"Leap year"<<endl;
    }else{
        cout<<"Not a leap year";
    }
}

int main(){
    cout<<"Enter the year :";
    int n;
    cin>>n;
    findLeap(n);
}