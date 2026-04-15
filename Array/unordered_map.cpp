#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<int, int> desk_map;

    // insertion
    desk_map[1] = 34;
    desk_map[2] = 45;
    desk_map[3] = 56;

    // iterator
    // for loop
    unordered_map<int, int>::iterator it;
    for (it = desk_map.begin(); it != desk_map.end(); it++)
    {
        int key = it->first;
        int value = it->second;
        cout << "key: " << key << " " << "value: " << value << endl;
    }
    // Another syntax
    // for(auto it : desk_map){

    //     int key =it.first;
    //     int value=it.second;
    //     cout<<"key :"<<key<<"value :"<<value<<endl;
    // }

    // access
    // find ?   T.C --> O(1)

    if (desk_map.find(2) != desk_map.end())
    {
        // found
        int value = desk_map[2];
        cout << "found :" << value << endl;
    }
    // deletion
    // key se delete hoga
    desk_map.erase(2);
    cout << "After erase " << endl;
    if (desk_map.find(2) != desk_map.end())
    {
        // found
        int value = desk_map[2];
        cout << "found :" << value << endl;
    }
    else
        cout << "Not found" << endl;

    return 0;
}