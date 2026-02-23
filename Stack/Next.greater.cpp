// Next greater element
#include<iostream>
#include<vector>
using namespace std;

void findNext(int arr[],int n){
    vector<int>ans(n,-1);

    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){

            if(arr[j] > arr[i]){
                ans[i]=arr[j];
                break;
            }
        }
    }
    for(auto i:ans){
        cout<<i<<endl;
    }
}

int main(){
    int arr[]={1,3,2,4};
    int n=4;
    findNext(arr,n);
}