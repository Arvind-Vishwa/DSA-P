// stock buy and sell single transaction
#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;

void findProfit(int arr[],int n){
    int bestBuy=arr[0];
    int max_profit=INT_MIN;

    for(int i=1;i<n;i++){
        if(arr[i] > bestBuy){
            max_profit=max(max_profit,arr[i]-bestBuy);
        }
        bestBuy=min(bestBuy,arr[i]);
    }

    cout<<"Profit :"<<max_profit;
}

int main(){
    int arr[]={100,180,260,310,40,535,695};
    int n=7;
    findProfit(arr,n);
}