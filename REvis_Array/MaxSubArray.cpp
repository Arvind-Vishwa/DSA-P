// Maximum subarray
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void maxSubarray1(vector<int>num,int size,int k){
    // finding the sum
    int i=0;
    int j=k-1;
    int sum=0;
    int maxAns=INT_MIN;
    
    for(int k=i;i<=j;k++){
        sum=sum+num[k];
    }

    while(j < size){
        maxAns=max(maxAns,sum);
        sum = sum-num[i];
        sum =sum+num[j+1];
        i++;
        j++;
        
    }
    cout<<"hello"<<endl;
    cout<<"maxAns :"<<maxAns;

}

// void maxSubarray(vector<int> nums, int size, int k)
// {
//     int i = 0;
//     int j = k - 1;
//     int maxAns = INT_MIN;
//     while (j < size)
//     {
//         // cal sum
//         int curr_sum = 0;
//         for (int k = i; k <= j; k++)
//         {
//             curr_sum = curr_sum + nums[k];
//         }
//         maxAns = max(maxAns, curr_sum);
//         i++;
//         j++;
//     }

//     cout<<"max :"<<maxAns;
// }



int main()
{
    vector<int> nums = {1,12,-5,-6,50,3};
    int k = 4;
    int size = nums.size();
    // maxSubarray(nums, size, k);
    maxSubarray1(nums, size, k);
}