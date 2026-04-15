// reverse K group 
#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverseKGroup(queue<int>&q,int k,int count){
    
    if( count >= k){
        // reverse krna h
        stack<int>s;
        for(int i=0;i<k;i++){
            int ele=q.front();
            q.pop();
            s.push(ele);
            
        }

        // fetch k element from stack and insert into queue
        for(int i=0;i<k;i++){
            int ele=s.top();
            s.pop();
            q.push(ele);
        }
        // 1 case main solve karunga 
        // baaki recursion
        reverseKGroup(q,k,count-k);
    }
    else{
        // as it push karna h last mein
        // queue k front se uthakar end mein dlana h
        for(int i=0;i<count;i++){
        int ele=q.front();
        q.pop();
        q.push(ele);
            }
        }

}

int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(35);
    q.push(38);
    q.push(40);
    q.push(42);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);

    int k=3;
    int count=q.size();
    // it tracks the no of element to reverse
    reverseKGroup(q,k,count);

    // printing
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}