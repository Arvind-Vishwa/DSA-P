// brute force
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int missing(vector<int> nums)
{
    int size = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 0; i < size; i++)
    {
        if (i == nums[i])
        {
            continue;
        }
        else
            return i;
    }
    return -1;
}
int missingNo(vector<int> nums)
{                                                                     // XOR
    int size = nums.size();
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans ^= nums[i];  // Revision 
    }
    for (int i = 0; i < size; i++)
    {
        ans ^= i;
    }
    return ans;
}
int main()
{
    vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    // int ans = missing(nums);
    int ans = missingNo(nums);
    cout << "ans :" << ans;

    return 0;
}