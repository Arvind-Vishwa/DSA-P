// Double linked list
// simple creating  a Double LL
#include <iostream>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;

    // constructor
    Node(int value)
    {
        prev = NULL;
        data = value;
        next = NULL;
    }
};

// insertion
// AThead
void insertAtHead(int value, Node *&head, Node *&tail)
{
    // 2 cases --> LL is empty /Non- empty
    // empty wala case
    if (head == NULL && tail == NULL)
    {
        // firstlt create node
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // LL is not empty
        Node *newNode = new Node(value);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

// insert at Tail

void insertAtTail(int value, Node *&head, Node *&tail)
{
    // checking LL is empty or not
    if (head == NULL && tail == NULL)
    {
        // create a Node
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // LL is not empty
        Node *newNode = new Node(value);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
// printing function
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// calc length
int getLength(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

// insertAtPOs
void insertAtPos(int pos, int value, Node *&head, Node *&tail)
{
    // 3 cases -->leftmost / rightMost/ middle mein
    int len = getLength(head);
    if (pos == 1)
    {
        insertAtHead(value, head, tail);
    }
    // right most
    else if (pos == len + 1)
    {
        insertAtTail(value, head, tail);
    }
    // middle
    else
    {
        // middle mein kisi bhi pos bhi insert krna cht hun
        Node *temp = head;
        // fir main temp pos-2 steps se aage badaunga
        for (int i = 0; i < pos - 2; i++)
        {
            temp = temp->next;
        }
        // crete a node
        Node *newNode = new Node(value);
        // forward pointer
        Node *forward = temp->next;
        // pointers ko set krna h
        newNode->prev = temp;
        temp->next = newNode;
        forward->prev = newNode;
        newNode->next = forward;
    }
}
// searching a element
bool searchElement(Node *head, int target)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == target)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

// printing reverse
void printReverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->data << "-> ";
        temp = temp->prev;
    }
    cout << "NULL" << endl;
}

// deleting the node
void deleteFromPos(int pos, Node *&head, Node *&tail)
{
    int len = getLength(head);
    // LL is empty
    if (head == NULL && tail == NULL)
    {
        cout << "No nodes to delete" << endl;
        return;
    }
    // single node exist
    else if (head == tail)
    {
        // single node to delete
        Node *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }
    else if (pos == 1)
    {
        // we want to delete head node
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    else if (len == pos)
    {
        // we wnt to delte tail node
        Node *temp = tail;
        tail = temp->prev;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
    }
    else
    {
        // we wnt to delte other node than a head or tail node
        Node *backward = head;
        for (int i = 0; i < pos - 2; i++)
        {
            backward = backward->next;
        }
        Node *curr = backward->next;
        Node *forward = curr->next;

        // pointer changes
        backward->next = forward;
        forward->prev = backward;
        // curr ko isolate krna h
        curr->prev = NULL;
        curr->next = NULL;
        // curr isolate ho chuka h
        delete curr;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(20, head, tail);
    insertAtHead(45, head, tail);
    print(head);

    // tail
    insertAtTail(43, head, tail);
    insertAtTail(83, head, tail);
    insertAtTail(49, head, tail);
    insertAtTail(73, head, tail);
    print(head);

    // position
    insertAtPos(3, 100, head, tail);
    print(head);

    // searching
    bool ans = searchElement(head, 43);
    cout << ans << endl;

    // printing reverse
    // printReverse(tail);

    // delete
    deleteFromPos(4, head, tail);
    print(head);
    deleteFromPos(1, head, tail);
    print(head);
}
