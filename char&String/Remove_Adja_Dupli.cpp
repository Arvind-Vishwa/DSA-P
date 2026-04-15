// Remove all adjacent duplicate
#include <iostream>
using namespace std;

string removeDuplicate(string s)
{
    string ans = "";
    char currentChar;
    for (int i = 0; i < s.length(); i++)
    {
        currentChar = s[i];
        if (ans.empty())        // if ans string is empty then push
        {
            ans.push_back(currentChar);
        }
        else if (currentChar == ans.back())   // checking the duplicatcy
        {
            ans.pop_back();
        }
        else if (currentChar != ans.back())   // Not found any duplicate
        {
            ans.push_back(currentChar);
        }
    }
    return ans;
}
int main()
{

    string s = "azxxzy"; // ay
    string store = removeDuplicate(s);
    cout << store;
    return 0;
}