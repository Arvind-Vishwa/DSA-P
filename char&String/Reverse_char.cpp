// Reverse the char 
#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;

void reverseChar(char arr[],int size){
    int s=0;
    int e=4;
    // while(s <= e){
    //     swap(arr[s],arr[e]);
    //     s++;
    //     e--;
    // }
    reverse(arr,arr+size);
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    
}
int main(){
    char arr[100]="Rahul";
    int size=100;
    reverseChar(arr,size);
}