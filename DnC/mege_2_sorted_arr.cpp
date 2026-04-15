// merging two sorted array
#include <iostream>
#include <vector>

using namespace std;
void mergeSorted(int arr[], int brr[], int sizeArr, int sizeBrr, vector<int> &ans)
{

    // i --> arr
    int i = 0;
    // j --> brr
    int j = 0;

    // jab tk bounds k andar h
    while (i < sizeArr && j < sizeBrr)
    {
        if (arr[i] < brr[j])
        {
            ans.push_back(arr[i]);
            i++;
        }
        else
        {
            ans.push_back(brr[j]);
            j++;
        }
    }

    // agar main yha tk aagya
    // toh 2 cases ho sakte h
    // 1 case --> arr me still elements bacha h
    while (i < sizeArr)
    {
        ans.push_back(arr[i]);
        i++;
    }
    // 2 case --> brr me still elements bache h
    while (j < sizeBrr)
    {
        ans.push_back(brr[j]);
        j++;
    }
}
int main()
{
    int arr[] = {10, 30, 50, 70};
    int sizeArr = 4;

    int brr[] = {20, 40, 60, 80, 90, 100};
    int sizeBrr = 6;

    vector<int> ans;
    mergeSorted(arr,brr, sizeArr, sizeBrr, ans);

    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}