// swapping diff methods
// 1 -> temp
#include<iostream>
#include<algorithm>
using namespace std;

void printReverseArray(int arr[], int size){
    int l=0;
    int h=size-1;
    while(l <= h){
        swap(arr[l],arr[h]);
        l++;
        h--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void XORSwapp(int a,int b){
    a=a^b;
    b=b^a;
    a=a^b;
    cout<<"After swapping "<<a<<" "<<b<<endl;
}

void arithmeticSwap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping "<<a<<" "<<b<<endl;

}

void usingBulit(int a,int b){
    swap(a,b);
    cout<<"After swapping "<<a<<" "<<b<<endl;
}

void tempWithSwap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping "<<a<<" "<<b<<endl;
}

int main(){
    int a=5;
    int b=6;
    int arr[5]={10,20,30,40,50};
    int size=5;
    cout<<"Before swapping "<<a<<" "<<b<<endl;
    // tempWithSwap(a,b);
    // usingBulit(a,b);
    // arithmeticSwap(a,b);
    // XORSwapp(a,b);
    printReverseArray(arr,size);
}