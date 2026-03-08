// subarray with first element
#include<iostream>
#include<vector>
using namespace std;

int findSub(int arr[],int n){

    int cnt=0;
    for(int i=0;i<n;i++){
        vector<int>temp;

        for(int j=i;j<n;j++){
            temp.push_back(arr[j]);
            cout<<"temp el:"<<arr[j]<<endl;
        }
        int min_el=temp[0];
        for(int k=1;k<temp.size();k++){
            if(temp[k] >= min_el){
                cout<<temp[k]<<" "<<min_el<<endl;
                cnt++;

            }else
            break;
        }
    }
    return cnt+n;
}

int main(){
    int arr[]={15,8,6,5,10};
    int n=5;
    int ans=findSub(arr,n);
    cout<<"ans :"<<ans<<endl;
}