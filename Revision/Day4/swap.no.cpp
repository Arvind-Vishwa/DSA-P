// swap two no without using temp
#include<iostream>
using namespace std;

void findSwap(int a,int b){
    // using a xor
    a=a^b;
    b=b^a;
    a=a^b;

    cout<<a<<" "<<b<<endl;

}

int main(){
    int a=5;
    int b=9;
    findSwap(a,b);
}