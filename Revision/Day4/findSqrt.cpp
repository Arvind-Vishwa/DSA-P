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
    int e=n;
    int ans=0;
    while(s <= e){
        int mid=(s+e)/2;
        if(mid*mid <= n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}

int main(){
    int n=72;
    // findSqrt(n);
    int ans=binarySqr(n);
    cout<<ans<<endl;
}