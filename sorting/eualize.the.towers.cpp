// Equalize the towers
#include<iostream>
#include<limits.h>
using namespace std;

void findEqualize(int h[],int cost[]){
    // brute force

    int min_ans=INT_MAX;
    for(int i=0;i<3;i++){
        int totalCost=0;
        for(int j=0;j<3;j++){
            totalCost +=cost[j]*abs(h[j]-h[i]);
        }
        min_ans=min(min_ans,totalCost);
    }

    cout<<"ans :"<<min_ans;
}

int main(){
    int h[]={1,2,3};
    int cost[]={10,100,1000};
    findEqualize(h,cost);
}