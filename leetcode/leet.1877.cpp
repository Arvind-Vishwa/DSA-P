// minimized the maximum pair sum in Array
#include<bits/stdc++.h>
using namespace std;

void findPair(vector<int>&arr){
    int n=arr.size();
    sort(arr.begin(),arr.end());

    // two pointer
    int i=0;
    int j=n-1;
    int max_sum=INT_MIN;
    while(i < j){
        int sum=arr[i]+arr[j];
        max_sum=max(max_sum,sum);
        i++;
        j--;
    }

    cout<<"ans "<<max_sum;
}

int main(){
    vector<int>arr={3,5,2,3};
    findPair(arr);
}