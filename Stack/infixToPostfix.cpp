// Infix to Postfix
#include<iostream>
#include<stack>
using namespace std;

int priority(char ch){
    if(ch == '^'){
        return 3;
    }else if(ch == '+' || ch =='-'){
        return 1;
    }else if(ch == '/' || ch == '*'){
        return 2;
    }else{
        return -1;
    }
}

void findPostfix(string s){
    int n=s.size();
    stack<char>st;
    string ans="";
    int i=0;

    while(i < n){

        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')||
        (s[i] >= '0' && s[i] <= '9')){
            // sare operand ko push karo ans mein
            ans += s[i];
        }
        else if(s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            // abhi mujhe pop karna hoga till (
            while(!st.empty() && st.top() != '('){
                ans += st.top();
                st.pop();
            }
            st.pop();     // (
        }
        else{
            // operator
            while(!st.empty() && priority(s[i]) <= priority(st.top())){
                ans += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        i++;
    
    }
    // remaining in stack
    while(!st.empty()){
        ans +=st.top();
        st.pop();
    }

    cout<<ans;
}

int main(){
    string s="a*(b+c)/d";
    findPostfix(s);
}