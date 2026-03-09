// sum subarray
#include<bits/stdc++.h>
using namespace std;

int findMinSub(vector<int>arr,int n){
    int min_sub=0;
    for(int i=0;i<n;i++){
        int curr_min=arr[i];
        for(int j=i;j<n;j++){
            curr_min=min(curr_min,arr[j]);
            min_sub +=curr_min;
        }
        
    }
    cout<<"min subarray :"<<min_sub;

}

int main(){
    vector<int>arr={1,2,3,4};
    int n=4;
    findMinSub(arr,n);
}