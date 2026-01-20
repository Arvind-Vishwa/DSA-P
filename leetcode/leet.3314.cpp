// construct minimum bitwise array I
#include<bits/stdc++.h>
using namespace std;

void findBit(int arr[],int n){
    vector<int>ans;
    for(int i=0;i<n;i++){
        bool found=false;

        for(int x=0;x< arr[i];x++){
            if((x | (x+1)) == arr[i]){
                ans.push_back(x);
                found=true;
                break;
            }
            
        }
        if(!found){
            ans.push_back(-1);
        }
    }
    
    // ans
    for(auto num:ans){
        cout<<num<<" ";
    }
}

int main(){
    int arr[]={11,13,31};
    int n=3;
    findBit(arr,n);
}