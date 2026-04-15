// valid palindrome -II
#include <iostream>
using namespace std;

bool checkPalin(string str, int s, int e)
{
    if (str[s] != str[e])
    {
        return false;
    }
    else
    {
        s++;
        e--;
    }
    // valid palindrome
    return true;
}

bool validPalindrome(string s)
{
    int length = s.length();
    int i = 0;
    int j = length - 1; // apply two pointer
    while (i <= j)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        else
        {
            bool ansOne = checkPalin(s, i + 1, j);
            bool ansTwo = checkPalin(s, i, j--);
            bool finalAns = ansOne || ansTwo;
            return finalAns;
        }
    }
    return true;
}
int main()
{
    string s = "abca"; // after deleting atmost one it is valid valindrome
    bool ans = validPalindrome(s);
    if (ans == true)
    {
        cout << "valid palindrome" << endl;
    }
    else
        cout << "Not valid";
}