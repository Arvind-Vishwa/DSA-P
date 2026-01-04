// Merge sort
#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&arr,int st,int mid,int e){
    vector<int>temp;

    int i=st;
    int j=mid+1;

    while(i <= mid && j <= e){
        if(arr[i] <= arr[j]){
            // asce
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    // left
    while(i <=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= e){
        temp.push_back(arr[j]);
        j++;
    }

    // copy froom temp to original
    for(int idx=0;idx<temp.size();idx++){
        arr[idx+st]=temp[idx];
    }
}

void mergeSort(vector<int>&arr,int s,int e){
    if(s < e){
        int mid=s+(e-s)/2;

        mergeSort(arr,s,mid); // left
        mergeSort(arr,mid+1,e); // right

        merge(arr,s,mid,e);
    }
}

int main(){
    vector<int>arr={12,31,35,8,32,17};
    int s=0;
    mergeSort(arr,s,arr.size()-1);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}