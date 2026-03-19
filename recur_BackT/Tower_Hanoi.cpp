// Tower of Hanoi
#include<iostream>
using namespace std;

int towerOfHanoi(int N,int from,int to,int aux){
    // base case
    if(N == 0){
        return 0;
    }
    if(N == 1){
        return 1;
    }

    int cnt=0;
    cnt=towerOfHanoi(N-1,from,to,aux);
    cnt++;
    cnt +=towerOfHanoi(N-1,aux,to,from);
    return cnt;

}

int main(){
    int N=3;
    int from;
    int to;
    int aux;
    int ans=towerOfHanoi(N,from,to,aux);
    cout<<"ans :"<<ans;
}