// letter combnation
#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

void solve(string &output, unordered_map<char,string>&mapping,vector<string>&ans,string digits,int i){
    // base case
    if(i >= digits.size()){
        if(output.length()>0){
            ans.push_back(output);
        }
        return;
        
    }
    //  1 case main baaki recursion
    char digit = digits[i];
    string mappedString = mapping[digit];

    for(int i=0;i<mappedString.size();i++){
        output.push_back(mappedString[i]);
    }
    // recursion call
    solve(output,mapping,ans,digits,i+1);
    //backtrack
    output.pop_back();
}

vector<string>printLetter(string digit){
    vector<string>ans;
    unordered_map<char,string>mapping;
    mapping['2'] ="abc";
    mapping['3']="def";
    mapping['4']="ghi";
    mapping['5']="jkl";
    mapping['6']="mno";
    mapping['7']="pqrs";
    mapping['8']="tuv";
    mapping['9']="wxyz";

    int i=0;
    string output="";
    solve(output,mapping,ans,digit,i);
    return ans;

}
int main(){
    string digit ="23";
    vector<string>ans = printLetter(digit);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}