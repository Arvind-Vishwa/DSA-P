// valid Anagram 242
#include<iostream>
using namespace std;

void validAnagram(string s,string t){
    int freqTable[256] ={0};
    for(int i=0;i<s.size();i++){
        freqTable[s[i]]++;       // table mein count kareng
    }

    for(int i=0;i<t.size();i++){
        freqTable[t[i]]--;      // decrement karenge
    }

    for(int i=0;i<256;i++){
        if(freqTable[i] !=0){
            cout<<"Not a valid anagram"<<endl;
            break;
        }
        else{
                cout<<"Valid anagram";
                break;
        }
            
    }
    cout<<"Valid anagram";
}
int main(){
    string s="anagram";
    string t="naaram";
    validAnagram(s,t);
}