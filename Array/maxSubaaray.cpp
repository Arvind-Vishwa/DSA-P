// MaxSubarray bruteforce method
/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

double maxSub(vector<int> &nums, int &k)
{
    int size = nums.size();
    int maxSum = INT_MIN;
    int i = 0;
    int j = k - 1;

    while (j < size)
    {
        int sum = 0;
        for (int k = i; k <= j; k++)
        {
            sum += nums[k];
        }
        maxSum = max(maxSum, sum);
        j++;
        i++;
    }
    return maxSum / (double)k;
}
int main()
{
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;
    double ans = maxSub(nums, k);
    cout << "ans :" << ans;
}
*/

// m-2 Sliding window
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

double slidingWin(vector<int> &nums, int k)
{
    int size = nums.size();
    int i = 0;
    int j = k - 1;
    int sum = 0;
    int maxSum;
    for (int k = i; k <= j; k++)
    {
        sum = sum + nums[k];
    }
    j++;
    maxSum = sum;
    while (j < size)
    {

        sum -= nums[i];
        sum += nums[j];
        i++;j++;
        maxSum = max(maxSum, sum);
    }
    return maxSum / (double)k;
}
int main()
{

    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;
    double ans = slidingWin(nums, k);
    cout << ans;

    return 0;
}
