// Infix to Prefix
#include<iostream>
#include<stack>
#include<limits>
#include<algorithm>
using namespace std;

int priority(char ch){
    if(ch == '^'){
        return 3;
    }else if(ch == '/' || ch =='*'){
        return 2;
    }else if(ch == '-' || ch == '+'){
        return 1;
    }
    return -1;
}

void findPrefix(string s){
    // steps
    // Reverse string
    // convert barackets to oposite
    // reverse ans

    string ans="";
    stack<char>st;

    int n=s.size();
    reverse(s.begin(),s.end());
    for(int i=0;i<n;i++){
        if(s[i] == '('){
            s[i]=')';
        }else if(s[i] == ')'){
            s[i]='(';
        }
    }

    int i=0;
    while(i < n){
        // operand
        if((s[i] >='A' && s[i] <= 'Z') || 
        (s[i] >= 'a' && s[i] <='z') ||
        (s[i] >= '0' && s[i] <= '9')){
            ans += s[i];
        }
        else if(s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            while(!st.empty() && st.top() != '('){
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            //operantor
            if(s[i] == '^'){
                while(!st.empty() && priority(s[i]) <= priority(st.top())){
                    ans += st.top();
                    st.pop();
                }
            }else{
                while(!st.empty() && priority(s[i]) < priority(st.top())){
                    ans += st.top();
                    st.pop();
                }
            }
            st.push(s[i]);
        }
        i++;
    
    }
    // remaining
    while(!st.empty()){
        ans +=st.top();
        st.pop();
    }
    // reverse ans
    reverse(ans.begin(),ans.end());
    cout<<ans;
}

int main(){
    string s="a*(b+c)/d";
    findPrefix(s);
}