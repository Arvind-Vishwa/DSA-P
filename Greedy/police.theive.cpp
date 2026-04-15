// Police and Theive
#include<iostream>
using namespace std;

void findTheive(char arr[],int n,int k){
    int p=0;
    int t=0;
    int ans=0;

    while(p <n && t< n){

        while(p < n && arr[p] != 'P'){
            p++;
        }
        while(t < n && arr[t] != 'T'){
            t++;
        }

        if(p < n && t < n){
            if(abs(p-t) <= k){
                ans++;
                p++;
                t++;
            }
            else{
                if(p < t){
                    p++;
                }else{
                    t++;
                }
            }
        }
    }

    cout<<"max theive caught :"<<ans;
}

int main(){
    char arr[]={'P','T','T','P','T'};
    int n=5;
    int k=1;

    findTheive(arr,n,k);

}