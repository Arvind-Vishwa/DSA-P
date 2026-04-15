// matrix ques
#include<iostream>
using namespace std;

void matrix(int arr[][3]){
    for(int i=0;i<3;i++){
        cout<<"Enter the element in : "<<i<<" row"<<endl;
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool searchingTarget(int arr[3][3],int target){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[3][3];
    int target=30;
    matrix(arr);
    bool ans =searchingTarget(arr,target);
    cout<<ans<<endl;
}