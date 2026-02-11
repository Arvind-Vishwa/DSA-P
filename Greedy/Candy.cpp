// Candy 
// Appraoch 1
#include<bits/stdc++.h>
using namespace std;

void findCandy(vector<int>&rating){
    int n=rating.size();

    vector<int>L(n,0);
    vector<int>R(n,0);

    L[0]=1;
    for(int i=1;i<n;i++){
        if(rating[i] > rating[i-1]){
            L[i]=L[i-1]+1;
            
        }else{
            L[i]=1;
            
        }
    }
    R[n-1]=1;
    for(int i=n-2;i>=0;i--){
        if(rating[i] > rating[i+1]){
            R[i]=R[i+1]+1;
            
        }else{
            R[i]=1;
            
        }
    }
    int candy=0;
    for(int i=0;i<n;i++){
        candy +=max(L[i],R[i]);
        cout<<" left: "<<L[i]<<" "<<"Right :"<<R[i]<<endl;
    }

    cout<<"candy :"<<candy;
}

int main(){
    vector<int>rating={1,2,10,10,10,2,1};
    findCandy(rating);
}