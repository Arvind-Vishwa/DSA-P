#include <iostream>
using namespace std;
int main()
{

    int arr[5] = {1, 0, 1, 0, 0};
    int count_zero = 0;
    int count_one = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == 1)
        {
            count_one++;
        }
        else
            count_zero++;
    }
    cout << "Count Zero: " << count_zero;
    cout << " " << "Count one " << count_one;
}