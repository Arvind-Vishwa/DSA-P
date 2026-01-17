// find subarray count with k odds
#include<bits/stdc++.h>
using namespace std;

// void findSub(int arr[],int n,int k){
//     int ans=0;
//     // int maxlen=INT_MIN;
//     for(int i=0;i<n;i++){
//         int currSum=0;
        
//         for(int j=i;j<n;j++){

//             if(arr[j]%2 != 0){
//                 // odd find
//                 currSum++;
//             }
//             if(currSum == k)
//             ans++;
//         }
//     }
//     cout<<"ans :"<<ans;
// }

// opimal

int solve(int arr[],int k,int n){
    int i=0;
    int j=0;
    int odd=0;
    int ans=0;

    while(j < n){
        if(arr[j]%2 == 1){
            // odd milgaya
            odd++;
        }
        while(odd > k){
            if(arr[i]%2 == 1){
                odd--;
            }
            i++;
        }
        ans +=(j-i+1);
        j++;
    }
    return ans;
}
int findSub(int arr[],int n,int k){
    return solve(arr,k,n)-solve(arr,k-1,n);
}

int main(){
    int arr[]={2,2,5,6,9,2,11};
    int n=7;
    int k=2;
    int ans = findSub(arr,n,k);
    cout<<"ans :"<<ans;
}