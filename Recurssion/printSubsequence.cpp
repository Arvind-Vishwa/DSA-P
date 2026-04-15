// printing Sub Sequence

#include<iostream>
#include<string>
#include<vector>
using namespace std;
void printSub(string str,int index,string output){
    //Base case
    if(index == str.size()){
        cout<<output<<endl;
        return ;

    }


    // 1 case main karunga
    char ch =str[index];
    printSub(str,index+1,output+ch);  //include
    printSub(str,index+1,output);  // exclude



}
int main(){
    string str ="abc";
    int index=0;
    string output="";
    
    printSub(str,index,output);
    
}