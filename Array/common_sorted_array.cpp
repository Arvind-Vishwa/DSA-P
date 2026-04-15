// common 3 Array given that is array is sorted and find the common element from them
// gfg
// set is used to store unique element
#include <iostream>
#include <vector>
using namespace std;
vector<int> commonEle(int a[], int b[], int c[], int a1, int b1, int c1)
{
    vector<int> ans;
    int i, j, k = 0;
    while (i < a1 && j < b1 && k < c1)
    {
        if (a[i] == b[j] && b[j] == c[k])
        {
            ans.push_back(a[i]);
            i++;
            j++;
            k++;
        }
        else if (a[i] < b[j])
        {
            i++; // due to sorted we incrment
        }
        else if (b[j] < c[k])
        {
            j++;
        }
        else
            k++;
    }
    return ans;
}
int main()
{
    int a[5] = {2, 2, 3, 4, 4};
    int a1 = 5;
    int b[4] = {2, 2, 3, 7};
    int b1 = 4;
    int c[4] = {2, 3, 4, 10};
    int c1 = 4;
    vector<int> ans = commonEle(a, b, c, a1, b1, c1);
    for (auto i : ans)
    {
        cout << i;
    }

    return 0;
}
