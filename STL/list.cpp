// Doubly-linked list
// allows fast inserions anywhere int the list
// No random access like cetor

#include<iostream>
#include<list>
using namespace std;
int main(){

    //creation
    list<int>mylist;
    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_back(30);

    mylist.push_front(90);
    cout<<mylist.front()<<endl;

    mylist.pop_back();
    mylist.pop_front();
    cout<<"front "<<mylist.front()<<endl;

    cout<<"size :"<<mylist.size()<<endl;
    if(mylist.empty()==true){
        cout<<"list is empty "<<endl;
    }
    else
    cout<<"list is not empty "<<endl;
    list<int>::iterator it=mylist.begin();
    while(it != mylist.end()){
        cout<<*it<<" ";
        it++;
    }

    return 0;
}