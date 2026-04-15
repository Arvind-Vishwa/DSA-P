// finding the permutation 
#include<iostream>
#include<string>
using namespace std;
void printPermutation(string str,int i){
    // base case
    if(i >= str.length()){
        cout<<str<<endl;
        return ;
    }
    // check karenge pura ways
    // 1 case hum solve karenge aur baaki recursion
    for(int j=i;j<str.length();j++){
        //applying a swap 
        swap(str[i],str[j]);
        printPermutation(str,i+1);
        // backtracking
        swap(str[i],str[j]);
    }
}
int main(){
    string str ="abc";
    int i=0;
    printPermutation(str,i);
}