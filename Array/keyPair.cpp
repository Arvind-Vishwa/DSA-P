// brute-force method
/*
#include <iostream>
using namespace std;

bool keyPair(int arr[], int size, int sum)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == sum)
                return true;
        }
    }
    return false;
}
int main()
{
    int arr[6] = {1, 4, 45, 6, 10, 8};
    int size = 6;
    int Sum = 87;

    bool ans = keyPair(arr, size, Sum);
    cout << "ans :" << ans;
}

*/

// Two pointer approach

//  ---> sort the array
// take low and high

#include <iostream>
#include <algorithm>
using namespace std;

bool TwoSum(int arr[], int size, int sum)
{
    int low = 0;
    int high = size - 1;
    int currentSum = 0;

    sort(arr, arr + size);
    
    while (low < high)
    {
        currentSum = arr[low] + arr[high];

        if (currentSum == sum)
        {
            return true;
        }
        else if (currentSum > sum)
        {
            high--;
        }
        else if (currentSum < sum)
        {
            low++;
        }
    }
    return false;
}
int main()
{
    int arr[6] = {1, 4, 45, 6, 10, 8};
    int size = 6;
    int Sum = 16;

    bool ans = TwoSum(arr, size, Sum);
    if(ans == true){
        cout<<"Sum is exist "<<endl;
    }
    else{
        cout<<"Sum is not exist";
    }
}