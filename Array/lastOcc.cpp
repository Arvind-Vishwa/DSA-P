// last occurence
#include<iostream>
#include<vector>
using namespace std;

int last(vector<int>arr,int x){
    int ansIndex=-1;
    int s=0;
    int e=arr.size()-1;
    while(s < e){
        int mid=s+(e-s)/2;
        if(arr[mid] == x){
            ansIndex=mid;
            s=mid+1;
        }
        else if(arr[mid] > x){
            e=mid;
        }
        else{
            s=mid+1;
        }
    }
    return ansIndex;
}

int main(){
    vector<int>arr={1,3,5,5,5,5,67,123,125};
    int x=5;
    
    int ans = last(arr,x);
    cout<<"occur : "<<ans;
}