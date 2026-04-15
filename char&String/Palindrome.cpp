// Palindrome
#include<iostream>
using namespace std;

bool palindrome(char arr[],int size){
    //using a two pointer
    int l=0;
    int h=size-1;
    while(l <= h){
        if(arr[l] == arr[h]){
            l++;
            h--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    char arr[100] ="RACECAR";
    int size=7;
    bool ans = palindrome(arr,size);
    if(ans == true){
        cout<<"This is palindrome "<<endl;
    }
    else
    cout<<"Not a Palindrome"<<endl;
}