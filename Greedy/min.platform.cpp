// Min platforms 
#include<bits/stdc++.h>
using namespace std;

void findMinPlat(int arr[],int dept[],int m,int n){
    // sort
    sort(arr,arr+n);
    sort(arr,arr+m);

    int i=0;
    int j=0;
    int cnt=0;
    int maxCnt=0;
    while(i < m){
        if(arr[i] <= dept[j]){
            cnt++;
            i++;
        }else{
            cnt--;
            j++;
        }
        maxCnt=max(maxCnt,cnt);
    }

    cout<<"ans :"<<maxCnt;
}

int main(){
    int m=6;
    int n=6;
    int arr[]={900,940,950,1100,1500,1800};
    int dept[]={910,1200,1120,1130,1900,2000};
    findMinPlat(arr,dept,m,n);
}