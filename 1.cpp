// hash map
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

void countAndSay(int n) {
        // code here
        string st="1";
        for(int i=1;i<=n;i++){
            
            // map
            unordered_map<char,int>m;
            for(int i=0;i<st.size();i++){
                m[st[i]]++;
                
            }

            st="";
            unordered_map<char,int>::iterator it;
            for(it=m.begin();it!=m.end();it++){
                char key=it ->first;
                int freq=it ->second;
                char ans=char(freq);
                
                st.push_back(ans);
                st.push_back(key);
                cout<<st<<endl;
            }
            
        }
        // return st;
        
    }


int main(){
    int n=5;
    
    countAndSay(n);
}
