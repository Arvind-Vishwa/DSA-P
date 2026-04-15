// finding a length of character
#include <iostream>
using namespace std;

int getLength(char arr[], int size)
{
    int i = 0;
    int count = 0;
    while (arr[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}
int main()
{
    // char arr[10];
    // cin>>arr;
    // cout<< arr;   Gives only Arvind and neglect the after the letter
    // cin.getline(arr,20);   // delimeter is null character

    // cin.getline(arr,200,'\t');
    // cout<<arr;

    char arr[100];
    int size = 100;
    cout << "Enter the word " << endl;
    cin.getline(arr, 100);
    int ans = getLength(arr, size);
    cout << ans;

    return 0;
}