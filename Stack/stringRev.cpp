// reversing string using stack
#include<iostream>
#include<stack>
using namespace std;

void revStr(string str){
    stack<char>s;
    for(int i=0;i<str.size();i++){
        s.push(str[i]);

    }
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    cout<<endl;
    cout<<str<<endl;
    
}

int main(){
    string str="racecar";
    revStr(str);
}