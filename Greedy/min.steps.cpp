// Min steps to halve the sum
// uses proprity queue
#include<bits/stdc++.h>
using namespace std;

void findSteps(vector<int>&arr){
    priority_queue<double>pq;
    int sum=0;
    for(auto x:arr){
        sum +=x;
        pq.push(x);
    }

    double target=sum/2.0;
    int steps=0;

    while(sum > target){
        double largest=pq.top();
        pq.pop();

        double half=largest/2.0;
        sum -= half;
        pq.push(half);
        steps++;
    }
    cout<<"ans :"<<steps;
}

int main(){
    vector<int>arr={9,1,2};
    findSteps(arr);
}