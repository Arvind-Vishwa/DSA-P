// Replacing the char
#include <iostream>
using namespace std;

void replaceChar(char arr[], int size)
{
    int repalceCharacter = ' ';
    int i = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] == '@')
        arr[i] =repalceCharacter;
        i++;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}
int main()
{
    char arr[100] = "My@Name@is@Love@Babbar";
    int size = 100;
    replaceChar(arr, size);
    return 0;
}