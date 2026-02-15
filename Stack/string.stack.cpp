// Reverse string using stack
#include<iostream>
#include<stack>
using namespace std;

void reverseStr(string str){
    // traverse karo str
    stack<char>s;
    for(int i=0;i<str.size();i++){
        s.push(str[i]);
    }
    string ans="";
    while(s.size() != 0){
        ans+=s.top();
        s.pop();
    }
    cout<<ans<<endl;
}

int main(){
    string str="Arvind";
    reverseStr(str);
}