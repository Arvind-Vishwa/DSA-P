// coverting into the Uppercase
#include<iostream>
using namespace std;
// void convertToLowercase(char arr[],int size){
//     for(int i=0;i<100;i++){
//         char ch = arr[i];
//         if(ch >='A' && ch<='Z'){
//             ch = ch -'A'+'a';
//         }
//         arr[i] =ch;
//     }
//     cout<<arr;
// }

void convertToUpper(char arr[],int size){
    for(int i=0;i<size;i++){
        char ch=arr[i];
        if(ch >='a' && ch <= 'z')
        ch=ch - 'a' + 'A';
        arr[i]=ch;
        
    }
    cout<<arr;
    
}
int main(){
    char arr[100];
    int size=100;
    cin>>arr;
    // convertToLowercase(arr,size);
    convertToUpper(arr,size);
}