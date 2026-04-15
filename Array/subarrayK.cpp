// Longest subarray with sum k
// breute forece

#include<iostream>
#include<vector>
using namespace std;

int subarray(vector<int>arr,int k){
    
    int len=0;
    int sum;
    for(int i=0;i<arr.size();i++){
        sum=0;
        for(int j=i;j<arr.size();j++){
                sum+=arr[j];
                if(sum == k){
                len=max(len,j-i+1);
            }
            
        }
        
    }
    return len;
}

int main(){
    vector<int>arr={1,2,3,1,1,1,1,4,2,3};
    int sum=4;
    int ans= subarray(arr,sum);
    cout<<"max len:"<<ans;
}