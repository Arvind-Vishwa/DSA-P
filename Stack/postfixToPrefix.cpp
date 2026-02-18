// Postfix to infix
#include<iostream>
#include<stack>
using namespace std;

void findPrefix(string s){
    stack<string>st;

    int i=0;
    int n=s.size();
    while(i < n){

        if((s[i] >='A' && s[i] <= 'Z') || 
        (s[i] >= 'a' && s[i] <='z') ||
        (s[i] >= '0' && s[i] <= '9')){
            st.push(string(1,s[i]));
        }
        else{
            string t1=st.top();
            st.pop();
            string t2=st.top();
            st.pop();

            string covn=s[i]+t2+t1;
            st.push(covn);
        }
        i++;
    }
    cout<<st.top();
}

int main(){
    string s="AB-DE+F*/";
    findPrefix(s);
}