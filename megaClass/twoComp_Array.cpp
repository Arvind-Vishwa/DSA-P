//Two complement
#include<iostream>
#include<vector>
using namespace std;

void TwoComp(vector<int>arr){
    int n=arr.size();
    vector<int>twoCom(n,0);

    // flip the bits
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            twoCom[i] = 1;
        }
        else
        twoCom[i] =0;
    }
    // add +1
    int carry=1;
    for (int i = n - 1; i >= 0; --i) {
        int sum = twoCom[i] +carry;
        twoCom[i] = sum%2;
        carry = sum/2;
    }
    for(int i=0;i<twoCom.size();i++){
        cout<<twoCom[i]<<" ";
    }

}
int main(){
    vector<int>arr={0,1,0,0};
    TwoComp(arr);
    return 0;
}