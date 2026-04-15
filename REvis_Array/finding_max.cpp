// finding a max element
#include<iostream>
#include<limits.h>
using namespace std;

void printingEleTwoPointer(int arr[],int size){
    int l=0;
    int h=size-1;
    while(l <= h){
        if(l == h){
            cout<<arr[l]<<" ";
            l++;
        }else{
        cout<<arr[l]<<" "<<arr[h]<<" ";
        l++;
        h--;
        }
        
    }
}

int finding_min(int arr[],int size){
    // using a INT_MAX
    int min_no = INT_MAX;
    for(int i=0;i<size;i++){
        if(min_no > arr[i]){
            min_no=arr[i];
        }
    }
    return min_no;
}
int finding_max(int arr[],int size){
    // by using a INT_MIN 
    int max_no=INT_MIN;
    for(int i=0;i<size;i++){
        if(max_no < arr[i]){
            max_no=arr[i];
        }
    }
    return max_no;
    
}
int main(){
    int arr[5]={10,20,30,40,50};
    int size=5;
    int ans = finding_max(arr,size);
    int ans1= finding_min(arr,size);
    cout<<ans<<endl;
    cout<<"min no: "<<ans1<<endl;
    printingEleTwoPointer(arr,size);
}