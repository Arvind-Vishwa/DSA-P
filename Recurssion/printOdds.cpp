// printing all Odds
#include<iostream>
using namespace std;

void printOdds(int arr[], int size, int index){
    // base case
    if(index == size){
        return ;
    }
    if((arr[index])&1){
        cout<<arr[index]<<" ";
    }
    printOdds(arr,size,index+1);
}
int main(){
    int arr[] ={1,2,7,4,6,11};
    int size =6;
    int index= 0;
    printOdds(arr,size,index);
}