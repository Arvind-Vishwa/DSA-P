// finding the Duplicate no and returning that number
// M-1
                                    // Revision
/*
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[5] = {3, 3, 3, 4, 2};
    sort(arr, arr + 5); // firstly sort the array
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == arr[i + 1])
        { // this used when consecutive
            cout << arr[i] << " ";
            break;
        }
    }
}

*/

// M-2 bruteforce
/*
#include <iostream>
using namespace std;
int main()
{
    int flag = 0;
    int arr[5] = {3, 3, 3, 4, 2};
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                flag++;
                if (flag == 1)
                    cout << arr[i];
                break;
            }
        }
    }
    return 0;
}

*/

// M-3   -ve marking approach with modifying array

/*
#include<iostream>
#include<limits.h>
using namespace std;


int main(){
    int arr[5]={3,3,3,4,2};
    int ans=-1;
    int index;
    for(int i=0;i<5;i++){

        index=abs(arr[i]);
        // already visited
        if(arr[index] < 0){
            ans =index;
            break;
        }

        // visited
        arr[index] *= -1;
    }
    cout<< ans;


    return 0;
}
*/

// without modifying array
// posotioning method
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2,1, 3, 4, 2};
    while (arr[0] != arr[arr[0]])
    {
        swap(arr[0], arr[arr[0]]);
    }
    cout << "ans :" << arr[0];

    return 0;
}