# STACK
## Follow a `LIFO` ordering

### `STL` 
* `stack<int>s` initialization

### `Operation`
* ***`push()`*** --> used to insert in satck
* ***`pop()`*** - It is used to remove the top element in stack
* ***`top()`*** - It return the top element in stack
*  ***`size()`*** - It return the size of stack

## Stack Implementation using Array  
### Define Class
    class Stack{
        public:
        int *arr;
        int top;
        int size;

        Stack(int capacity){
        arr=new int[capacity];
        size=capacity;
        top=-1;
    }
    }

### Define Function
#### push()
            void push(int val){
            if(top == size-1){
                cout<<"stack overflow"<<endl;
            }
            else{
                top++;
                arr[top]=val;
            }
        }
#### pop()
    void pop(){
        if(top == -1){
            cout<<"stack underflow"<<endl;
        }else{
            arr[top]=-1;
            top--;
        }
    }
#### size()
    int getSize(){
        return top+1;
    }
#### top()
    int getTop(){
        if(top == -1){
            cout<<"There is no element at the top,as stack is empty"<<endl;
            return -1;
        }else
        return arr[top];
    }
#### empty()
    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }
#### print
    void print(){
        for(int i=0;i<size-1;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

### Object
    int main(){

    Stack s1(5);

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);

    s1.print();
    
    cout<<s1.getTop()<<endl;
    cout<<s1.getSize()<<endl;
    cout<<s1.isEmpty()<<endl;
    }
   
    
    
