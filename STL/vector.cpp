#include<iostream>
#include<vector>
using namespace std;
int main(){
    //creation
    vector<int>marks;

    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);
    cout<<marks.size()<<endl;

    

    marks.pop_back();
    
    cout<<" now :"<<marks.size();
    marks.insert(marks.begin(),60);  // inserting 

    cout<<endl;
    cout<<"front :"<<marks.front()<<endl;
    cout<<"back :"<<marks.back()<<endl;

    cout<<"max_size "<<marks.max_size()<<endl;  //compiler dependent
    if(marks.empty() == true){
        cout<<"Vector is empty "<<endl;
    }else{
        cout<<"not empty "<<endl;
    }

    vector<int>miles(10);  // size of vector array
    cout<<miles[0]<<endl;

    vector<int>dist(10,0);  // size of vector is and initialized with 0

    // traversing the vector using iterator
    vector<int>::iterator it = marks.begin();

    while( it != marks.end()){
        cout<<*it<< " ";
        it++;
    }cout<<endl;

    // using a for each loop
    for(int i:marks){
        cout<<i<<" ";
    }
//  creating 2D vector
vector<vector<int>>arr(5,vector<int>(4,0));
int totalRows = arr.size();
int totalCol = arr[0].size();

// to make unstandard 2D array
vector<vector<int>>arr1(4);
int rowSize = arr1.size();
arr1[0] = vector<int>(4);
arr1[1] = vector<int>(5);
arr[2]= vector<int>(2);
arr[3] = vector<int>(6);

// using a loop we calc a coloumnCount

}