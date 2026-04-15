// steps to solve promblem

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void printDouble(int a){
    cout<<2*a<<" ";
}
int main(){

vector<int>arr(5);
arr[0]=10;
arr[1]=20;
arr[2]=30;
arr[3]=40;
arr[4]=50;

for_each(arr.begin(),arr.end(),printDouble);
    return 0;
}