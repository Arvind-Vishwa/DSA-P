// Valid substr
#include<iostream>
#include<stack>
using namespace std;

void findValid(string s){
    int n=s.size();
    stack<char>st;

    int i=0;
    int idx=-1;
    int ans=0;
    while(i < n){

        if(s[i] == '('){
            st.push(i);
        }else{
            if(!st.empty()){
                st.pop();

                if(!st.empty()){
                    ans=max(ans,i-st.top());
                }else{
                    ans=max(ans,i-idx);
                }

            }else{
                idx=i;
            }
        }
        
        i++;
    }
    

    cout<<"size of valid Substing:"<<ans;
}

int main(){
    string s="()(())(";
    findValid(s);
}