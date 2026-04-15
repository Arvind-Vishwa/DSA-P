// reversing a letter
#include<iostream>
#include<string>
using namespace std;

void reverseLetter(string s){
    int i=0;
    int j=s.size()-1;
    while(i <= j){
        if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'){
            swap(s[i],s[j]);
            i++;
            j--;
        }else{
            i++;
            j--;
        }
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
}

int main(){
    string s="ab-cd";
    reverseLetter(s);
}