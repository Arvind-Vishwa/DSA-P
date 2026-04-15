// House Robbery Promblem
// constrained  No two adjacent houses will be robbed by a Theif

#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> &arr, int size, int index)
{
    // base case
    if (index >= size)
    {
        return 0;
    }
    // 1 case main karunga
    int inc = arr[index] + solve(arr, size, index + 2); // include
    int exc = solve(arr, size, index + 1);

    int finalAns = max(inc, exc);
    return finalAns;
}

int rob(vector<int> &arr)
{
    int size = arr.size();
    int index = 0;
    return solve(arr, size, index);
}
int main()
{
    vector<int> arr = {2, 7, 9, 3, 1};
    int ans = rob(arr);
    cout << "ans :" << ans;

    return 0;
}