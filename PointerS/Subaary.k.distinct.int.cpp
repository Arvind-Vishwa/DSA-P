// Subarray with k distinct integer
// Better approach
#include<bits/stdc++.h>
using namespace std;

void findDist(int arr[],int n,int k){
    int cnt=0;
    for(int i=0;i<n;i++){
        unordered_set<int>s;
        for(int j=i;j<n;j++){

            s.insert(arr[j]);
            if(s.size() <= k){
                cnt++;
            }
        }
    }

    cout<<"ans :"<<cnt<<endl;
}


int main(){
    int arr[]={1,2,1,1,3,3,4,2,1};
    int n=9;
    int k=2;
    findDist(arr,n,k);
}