// check no is armstrong

#include<iostream>
using namespace std;

bool findArmstrong(int num){
    int sum=0;
    int temp=num;
    while(num >0){
        int no=num%10;
        int mul=no*no*no;
        sum=sum+mul;
        // cout<<"sum :"<<sum<<" ";
        num=num/10;
    }
    if(temp==sum){
        return true;
    }
    return false;
    
}

int main(){
    int num=153;
    bool ans=findArmstrong(num);
    if(ans == true){
        cout<<"The No is Armstrong"<<endl;
    }else{
        cout<<"Given No is not Armstrong"<<endl;
    }
}