// reverse prefix
#include<iostream>
#include<string>
#include<algorithm>
#include<limits>
using namespace std;
void prefixR(string s,char ch,int size){
    int index=s.find(ch);
    // cout<<index;
    // reverse(s,s+index+1);
    int i=0;
    int j=index;
    while(i <= j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    for(int i=0;i<size;i++){
        cout<<s[i]<<" ";
    }
}

int main(){

    string s="abcdefd";
    int size=7;
    char ch='d';
    prefixR(s,ch,size);
}