// duplicate no
#include <iostream>
using namespace std;



int negativeMethod(int arr[], int n){
    for(int i=0;i<n;i++){
        arr[arr[i]] =-1;

        if(arr[arr[i]] == -1){
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {1, 3, 4, 2, 2};
    int n = sizeof(arr) / sizeof(int);
    // int ans = duplicateNo(arr, n);
    // cout << ans;

    int ans1 = negativeMethod(arr,n);
    cout<<ans1;
    
}