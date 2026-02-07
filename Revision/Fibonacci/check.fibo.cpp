// check no is fibonacci
#include<iostream>
using namespace std;

bool checkFibo(int num){
    int value=num;
    int arr[num]={0};
    arr[0]=0;
    arr[1]=1;

    for(int i=2;i<=num;i++){
        int no=arr[i-2]+arr[i-1];
        arr[i]=no;
        if(no == value){
            return true;
        }
    }
    return false;
}

int main(){
    int num=13;
    bool ans = checkFibo(num);
    if(ans == true){
        cout<<"founded"<<endl;
    }else{
        cout<<"Not valid num"<<endl;
    }
}