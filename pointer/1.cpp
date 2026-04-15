// pointer  --->  *p = it point the integer
#include<iostream>
using namespace std;
int main(){
    
    int a=10;

    int* p=&a;
    int **t=&p;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    cout<<" "<<" "<<endl;
    cout<<t<<endl;

    cout<<&t<<endl;
    cout<<*t<<endl;
    cout<<**t<<endl;


    return 0;
}