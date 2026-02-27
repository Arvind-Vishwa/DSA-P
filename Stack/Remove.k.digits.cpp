// Remove k digits using stack
#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

class Solution {
    public:
      string removeKdig(string &s, int k) {
          // code here
          // remove leading zero
          
          stack<char>st;
          
          int n=s.size();
          int i=0;
          
          while(i < n){
              
              while(!st.empty() && k>0 &&
              (st.top()-'0') > (s[i] - '0')){
                  st.pop();
                  k--;
              }
              st.push(s[i]);
              i++;
          }
          
          while(k> 0){
              st.pop();
              k--;
          }
          if(st.empty()){
              return "0";
          }
          string res="";
          while(!st.empty()){
              res += st.top();
              st.pop();
          }
          
          while(res.size() != 0 && res.back() == '0'){
              res.pop_back();
          }
          reverse(res.begin(),res.end());
          if(res.empty()){
              return "0";
          }
          return res;
          
      }
  };

  int main(){
    Solution s1;
    string str="1235432";
    string ans =s1.removeKdig(str,2);
    cout<<ans<<endl;
  }