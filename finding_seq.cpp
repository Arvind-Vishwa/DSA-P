// operator --> { /, * , + , - }
// prime no  --> n (user)

#include<iostream>
#include<vector>
using namespace std;

void findOpr(vector<int>prime,char opr[],int n){
    
    int size=prime.size();
    for(int i=0;i<size;i++){

        cout<<prime[i]<<" ";
        char ch=opr[i%n];
        if(i < prime.size()-1){
            cout<<ch<<" ";
        }
        
    }

    
}

vector<int> findPrime(int n){
    vector<int>prime;

    for(int i=1;i<=n;i++){
        int cnt=0;
        for(int j=1;j<=i;j++){
            if(i%j == 0){
                cnt++;
            }
        }
        if(cnt == 2){
            prime.push_back(i);
        }
    }
    return prime;
}

int main(){
    char opr[]={ '/' ,'*','+','-'};
    int size=4;
    cout<<"Enter the num :";
    int n;
    cin>>n;

    vector<int>ans = findPrime(n);
    findOpr(ans,opr,size);
}