//collection of key - pair value
// keys are unique within a map
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,string>table;

// INSERTION
    table["in"] ="India";
    table.insert(make_pair("en","England"));

    pair<string,string>p;
    p.first="br";
    p.second="brazil";
    table.insert(p);
    cout<<table.size()<<endl;

    // traversing
    unordered_map<string,string>::iterator it=table.begin();
    pair<string,string>p1=*it;
    cout<<p1.first<<" "<<p1.second<<endl;
    it++;

    //using find()
    

    return 0;
}