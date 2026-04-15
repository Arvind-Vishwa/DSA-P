//  finding first repeating element returning value on 1- index based
// brute force

/*
#include <iostream>
using namespace std;

int firstRepeating(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count != 0)
        {
            return i + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[7] = {1, 5, 3, 4, 3, 5, 6};
    int size = sizeof(arr) / sizeof(int);

    int ans = firstRepeating(arr, size);
    cout << "ans :" << ans;

    return 0;
}

*/

// by using a hashing function (optimized)
#include<iostream>
#include<unordered_map>
using namespace std;

int firstRepeating(int arr[],int size){
unordered_map<int,int>hash;
for(int i=0;i<size;i++){
    hash[arr[i]]++;
}
for(int i=0;i<size;i++){
    if(hash[arr[i]] > 1){
        return i+1;
    }
}
return -1;
}
int main(){
int arr[7] = {1, 5, 3, 4, 3, 5, 6};
int size = sizeof(arr) / sizeof(int);

int ans =firstRepeating(arr,size);
cout<<"ans :"<<ans;


    return 0;
}
