// due to internal framentation we use a linked list for non-continous memory
// node --> data + address(int the form of pointer)
// we use the classes for linked list

// basic creation
// class node{
//     int data;
//     node* next;
// }

#include <iostream>
using namespace std;

class Node
{   
    public:
    int value;
    Node *next;

    // constructor
    Node(int data)
    {
        this->value = data;
        this->next = NULL;
    }
};
int main()
{
    // stack memory
    // Node first;

    // Dyanamic memeory
    Node *first = new Node(11);
}