// Trapping rain water
#include<bits/stdc++.h>
using namespace std;

vector<int> getMaxLeft(vector<int>&h,int n){
    vector<int>leftMax(n,0);
    leftMax[0]=h[0];

    for(int i=1;i<n;i++){
        leftMax[i]=max(leftMax[i-1],h[i]);
    }
    return leftMax;
}
vector<int> getRightMax(vector<int>&h,int n){
    vector<int>rightMax(n,0);
    rightMax[n-1]=h[n-1];

    for(int i=n-2;i>=0;i--){
        rightMax[i]=max(rightMax[i+1],h[i]);
    }
    return rightMax;
}


void findTrap(vector<int>&h){
    int n=h.size();

    vector<int>leftMax=getMaxLeft(h,n);
    vector<int>rightMax=getRightMax(h,n);
    int ans=0;
    for(int i=0;i<n;i++){
        int l=min(leftMax[i],rightMax[i])-h[i];
        ans +=l;
    }

    cout<<"ans "<<ans<<endl;

}

int main(){
    vector<int>h={2,1,5,3,1,0,4};
    findTrap(h);
}