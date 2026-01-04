#include<iostream>
#include<limits.h>
using namespace std;

// we also solve this using the binary search

void findSquare(int n,int p){
    float max_num=INT_MIN;
    for(int i=1;i<=n/2;i++){
        // float
        float ans;
        for(float j=0;j<=9;j++){
            
        
        float num=i+j;
        
        if(num*num <=n){
            ans=num;
        }
    }
        max_num=max(ans,max_num);
    }
    cout<<"the no :"<<max_num<<endl;
    
    double incre=0.1;
    for(int j=1;j<=p;j++){
        while((max_num+incre)*(max_num+incre) <=n){
            max_num += incre;
        }
        incre/=10;
    }

    cout<<"ans :"<<max_num;
    

}

int main(){
    int n=50;
    int p=3;

    findSquare(n,p);
}