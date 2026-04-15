// first occurrence
#include<iostream>
#include<vector>
using namespace std;

int first(vector<int>arr,int x){
    
    int s=0;
    int e=arr.size()-1;
    int store=-1;
    while(s < e){
        int mid= s+(e-s)/2;
        if(arr[mid] == x){
            store=mid;
            e=mid-1;
            
        }
        else if(arr[mid] > x){
            e=mid;
        }
        else{
            s=mid+1;
            
        }
    }
    return store;
}

int main(){
    vector<int>arr={1,3,5,5,5,5,67,123,125};
    int x=5;
    
    int ans = first(arr,x);
    cout<<"occur : "<<ans;
}