#include<iostream>
#include<vector>
#include<stack>
using namespace std;

bool findValidOper(vector<int>a,vector<int>b){
    stack<int>s;
    int n=a.size();

    int i=0;
    int j=0;

    while(i < n){
        // push
        s.push(a[i]);

        // pop when top of stack match with b array of element

        while(!s.empty() && s.top() == b[j]){
            s.pop();
            j++;
        }
        i++;
    }
    if(s.empty()){
        return true;
    }
    return false;
}

int main(){
    vector<int>a={1,2,3};
    vector<int>b={2,1,3};

    bool ans=findValidOper(a,b);
    cout<<"ans :"<<ans;
}