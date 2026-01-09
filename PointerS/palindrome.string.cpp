// palindrome string
#include<iostream>
using namespace std;

bool findPali(string s,int n){

    int i=0;
    int j=n-1;

    while(i <= j){
        if(s[i] == s[j]){
            i++;
            j--;
        }
        else
        return false;
    }
    return true;
}

int main(){
    string st="abbac";
    int size=5;
    bool ans = findPali(st,size);
    if(ans == true){
        cout<<"Palindrome string"<<endl;
    }else{
        cout<<"Not a Palindrome"<<endl;
    }
}