// check no is perfect
#include<iostream>
using namespace std;

void findPerfect(int num){
    int sum=0;
    int temp=num;

    // perfect no is sum of their digits is equal to num {excluding the itself num}
    // divisor which completely divide

    for(int i=1;i<temp;i++){
        
        if(temp%i == 0){
            sum +=i;
        }
    }
    if(sum == num){
        cout<<"Given number is Perfect no"<<endl;
    }else{
        cout<<"Given number is not Perfect no"<<endl;
    }
}

int main(){
    int num=28;
    findPerfect(num);
}