// TWO POINTER and targeted sum
#include<iostream>
using namespace std;

pair<int,int> findPair(int arr[],int n,int target){
    pair<int,int>p{-1,-1};
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] == target){
                p.first=i;
                p.second=j;
            }
        }

    }
    return p;
}

int main(){
    int arr[]={2,7,11,15};
    int n=4;
    int target=9;

    pair<int,int>ans=findPair(arr,n,target);
    cout<<ans.first<<" "<<ans.second<<endl;
}