// brute method of pivot
/*
#include<iostream>
#include<algorithm>
using namespace std;

int pivotIndex(int arr[],int size){

    for(int i=0;i<size;i++){
    int lSum=0;
    int rSum =0;
        for(int j=0;j<i;j++){
            lSum +=arr[j];
        }
        for(int k=i+1;k<size;k++){
            rSum += arr[k];
        }

        if(lSum == rSum){
        return i;
    }
    }
    return -1;
}
int main(){
    int arr[6]= {1,7,3,6,5,6};
    int size=6;
    int ans =pivotIndex(arr,size);
    cout<<"ans :"<<ans;
    return 0;
}

*/

// prefixSumApproach

#include <iostream>
#include <vector>
using namespace std;

int prefixSum(vector<int> &arr)
{
    int size=arr.size();
    vector<int> lSum(size, 0);
    vector<int> rSum(size, 0);

    for (int i = 1; i < size; ++i)
    {
        lSum[i] = lSum[i - 1] + arr[i - 1];
    }
    for (int i = size - 2; i >= 0; --i)
    {
        rSum[i] = rSum[i + 1] + arr[i + 1];
    }

    for (int i = 0; i < size; ++i)
    {
        if (lSum[i] == rSum[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 7, 3, 6, 5, 6};

    int ans = prefixSum(arr);
    cout << "ans :" << ans;
}