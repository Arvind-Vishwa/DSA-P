// check array is sorted
#include<iostream>
#include<stack>
#include<limits.h>
using namespace std;

bool checkSorted(stack<int>&s,int ele1){
    // base casee
    if(s.empty()){
        // iska mtlb k stack poora sorted h
        return true;
    }
    // 1 case solve
    int ele2=s.top();
    s.pop();

    if(ele2 < ele1){
        // iska mtlb aage check kar sakte h
        bool aageKaAns=checkSorted(s,ele2);
        return aageKaAns;
    }
    else{
        // mtlb stack not sorted
        return false;
    }
}

int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(5);
    s.push(40);
    s.push(50);
    int ele1=INT_MAX;
    cout<<checkSorted(s,ele1)<<endl;

}