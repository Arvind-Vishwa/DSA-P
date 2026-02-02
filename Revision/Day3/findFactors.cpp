// find factors
#include<iostream>
using namespace std;

void findFact(int num){
    int cnt=0;
    for(int i=1;i<=num;i++){
        if(num%i == 0){
            cnt++;
            cout<<i<<" ";
        }
    }cout<<endl;
    cout<<"count of fact :"<<cnt<<endl;
}

int main(){
    int num=28;
    findFact(num);
}