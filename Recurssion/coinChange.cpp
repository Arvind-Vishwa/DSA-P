// coin change
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int coinCh(vector<int> arr, int amt)
{
    // base case
    if (amt == 0)
    {
        return 0;
    }
    int minCoinAns;
    for (int i = 0; i < arr.size(); i++)
    {
        int coin = arr[i];

        if (coin <= amt)
        {
            int recuAns = coinCh(arr, amt - coin);
            if (recuAns != INT_MAX)
            {
                int coinUsed = 1 + recuAns;
                minCoinAns = min(minCoinAns, coinUsed);
            }
        }
    }
    return minCoinAns;
}

int main()
{
    vector<int> arr = {2, 5, 1};
    int amt = 6;
    int ans = coinCh(arr, amt);
    if (ans == INT_MAX)
    {
        cout << "Not valid";
    }
    else
        cout << ans;

    return 0;
}