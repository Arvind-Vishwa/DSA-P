// palidrome using recursion
#include<iostream>
#include<string>

using namespace std;

bool pali(string s,int i,int j){
    // base case
    
    if(i >= j ){
        return true;
    }

    if(s[i] != s[j])
    return false;
    
    return pali(s,i+1,j-1);
    
}

bool findPali(string s){
    int i=0;
    int j=s.size()-1;
    return pali(s,i,j);
}

int main(){
    string str="abbca";
    bool ans = findPali(str);
    if(ans == true){
        cout<<"palidrome"<<endl;
    }else{
        cout<<"Not palidrome"<<endl;
    }
}