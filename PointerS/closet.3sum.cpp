// closet to 3 sum
#include<bits/stdc++.h>
using namespace std;

void findCloset(int arr[],int target,int n){
    // bruteforece
    int res=0;
    int min_diff=INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){

                int curr_sum=arr[i]+arr[j]+arr[k];
                int diff=abs(target-curr_sum);

                if(min_diff > diff){
                    min_diff=diff;
                    res=curr_sum;
                }
                else if(min_diff == diff){
                    res=max(res,curr_sum);
                }

            }
        }
    }
    cout<<"ans :"<<res<<endl;
}

int main(){
    int arr[]={-1,2,2,4};
    int n=4;
    int target=4;
    findCloset(arr,target,n);
}