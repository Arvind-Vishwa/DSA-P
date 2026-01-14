// triplet sum with target
#include<bits/stdc++.h>
using namespace std;

void findTriplet(int arr[],int n,int target){
    // two pointer
    sort(arr,arr+n);
    vector<int>ans;
    for(int i=0;i<n-1;i++){
        int num=arr[i];
        int j=i+1;
        int k=n-1;
        while(j < k){
            int sum=num+arr[j]+arr[k];
            if(sum == target){
                ans.push_back(num);
                ans.push_back(arr[j]);
                ans.push_back(arr[k]);
                break;
            }else if(sum > target){
                k--;
            }else
            j++;
        }
    }
    // for(int i=0;i<3;i++){
    //     cout<<"ans "<<res[i]<<" ";
    // }
    
    cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2];
}

int main(){
    int arr[]={1,4,45,6,10,8};
    int target=13;
    int n=6;
    findTriplet(arr,n,target);
    
}