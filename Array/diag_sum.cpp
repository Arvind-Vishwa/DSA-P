#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {10, 20, 30, 15, 20, 50, 25, 10, 10};
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i + j == 2)
            {
                sum = sum + arr[i][j];
            }
        }
    }
    cout << "Sum is : " << sum;
}