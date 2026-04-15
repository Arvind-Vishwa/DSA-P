//  used in LIFO data 
#include<iostream>
#include<stack>
using namespace std;
int main(){
    // creation
    stack<int>st;
    //insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout<<"Size :"<<st.size()<<endl;
    st.pop();
    cout<<"top :"<<st.top();


    return 0;
}