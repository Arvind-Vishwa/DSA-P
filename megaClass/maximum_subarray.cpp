// Maximum subarray
// Revision  some correction

/*
#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;

void maximumSubarray(int arr[],int size){
    int ans=INT_MIN;
for(int i=0;i<size;i++){
    int sum=0;
    for(int j=i;j<size;j++){
        sum = sum+arr[j];
    }
    ans =max(ans,sum);
}
cout<<"ans :"<<ans;
}
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int size=9;
    maximumSubarray(arr,size);
}

*/

// kadane algo

#include <iostream>
#include <limits.h>
using namespace std;

void kadaneAlgo(int arr[], int size)
{
    int ans = INT_MIN;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
        ans = max(ans, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << "ans :" << ans;
}
int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = 9;
    kadaneAlgo(arr, size);
    return 0;
}