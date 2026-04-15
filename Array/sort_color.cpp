// M-1 --> bruteforce
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int nums[6] = {2, 0, 2, 1, 1, 0};

    int countZero, countOne, countTwo;
    for (int i = 0; i < 6; i++)
    {
        if (nums[i] == 0)
        {
            countZero++;
        }
        else if (nums[i] == 1)
        {
            countOne++;
        }
        else
            countTwo++;
    }
    int i = 0;
    while (countZero--)
    {
        nums[i] = 0; // loop 1
        i++;
    }
    while (countOne--)
    {
        nums[i] = 1; // loop 2
        i++;
    }
    while (countTwo--)
    {
        nums[i] = 2; // loop 3
        i++;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}
*/

// optimized way
// 3 pointer approach
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int nums[6] = {2, 0, 2, 1, 1, 0};
    int low = 0;
    int med = 0;
    int high = 5;
    while (med <= high)
    {
        if (nums[med] == 0)
        {
            swap(nums[low], nums[med]);
            low++;
            med++;
        }
        else if (nums[med] == 1)
        {
            med++;
        }
        else if (nums[med] == 2)
        {
            swap(nums[high], nums[med]);
            high--;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}