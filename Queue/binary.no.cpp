//Generate all Binary Num
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

void generateBinary(int n){

    
    vector<string>vec;
    for(int i=1;i<=n;i++){
        string ans="";
        int num=i;
        while(num > 0){
            int val=num%2;
            char mod=val + '0';
            ans.push_back(mod);
            num=num/2;
            
        }
        cout<<endl;
        reverse(ans.begin(),ans.end());

        cout<<"ans :"<<ans<<endl;
        vec.push_back(ans);
    }

    

    for(const string &s :vec){
        cout<<s<<" ";
    }

}

int main(){
    int n=4;
    generateBinary(n);
}