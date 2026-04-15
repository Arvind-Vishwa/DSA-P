// Partition equal subset sum
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

bool solve(vector<int> &arr, int target, int i)
{
    if (target < 0 || i == arr.size())
        return false;

    if (target == 0)
    {
        return true;
    }

    bool inc = solve(arr, target - arr[i], i + 1);
    bool exc = solve(arr, target, i + 1);
    return inc || exc;
}

bool canPartition(vector<int> &arr, int target)
{
    // base case
    // sum 0f arr
    int sum = accumulate(arr.begin(), arr.end(), 0);
    if ((sum % 2) != 0)
        return false; // odd

    // int target = sum >> 1;
    return solve(arr, target, 0);
}
int main()
{
    vector<int> arr = {1, 5, 11, 5};
    int target = 11;
    bool ans = canPartition(arr, target);
    cout << ans;
    return 0;
}