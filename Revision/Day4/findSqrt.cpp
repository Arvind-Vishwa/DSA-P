// find Sqrt without using inbuilt
#include<iostream>
using namespace std;

void findSqrt(int n){

    int ans=0;
    for(int i=1;i<=n/2;i++){
        ans=i*i;
        if(ans == n){
            cout<<i<<endl;
            break;
        }
    }
    

}

int binarySqr(int n){
    int s=0;
    int e=n/2;

    while(s <= e){
        int mid=(s+e)/2;
        if(mid*mid == n){
            return mid;
        }
        else if(mid*mid > n){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return -1;
}

int main(){
    int n=81;
    // findSqrt(n);
    int ans=binarySqr(n);
    cout<<ans<<endl;
}