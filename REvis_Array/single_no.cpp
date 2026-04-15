// finding the single no 136
#include<iostream>
#include<unordered_map>
using namespace std;

void mapSingle(int a[],int size){
    // mujhe ek map create karna hoga
    unordered_map<int,int>m;
    for(int i=0;i<size;i++){
        // m[a[i]] =
    }
}

void xorSingle(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        // using a Xor
        ans =ans^arr[i];
    }
    cout<<"single no :"<<ans<<endl;
}
int main(){
    int a[5]={4,1,1,2,2};
    int size=5;
    // xorSingle(a,size);
    mapSingle(a,size);
    
}