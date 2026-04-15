// Insert at Head

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

// insert at head
Node *insertAtHead(int value, Node *&head, Node *&tail)
{
    // Linked list is empty  --> head and tail will be pointing to NULL
    // it means we are creating first node of it

    if (head == NULL && tail == NULL)
    {
        // step:1 create a new node

        Node *newNode = new Node(value);

        // step:2 head ko node pr lagado
        head = newNode;

        // ste:3 tail ko newNode pr lagado
        tail = newNode;
    }
    else
    {
        // LL is not empty
        // pehle se node present h
        // insert at head

        // step 1: create Node

        Node *newNode = new Node(value);

        // step 2: connect this newNode to head Node

        newNode->next = head;

        // step 3: head update krdo
        head = newNode;
    }
    return head;
}

// insert head of updated list
Node *insertAtTail(int value, Node *&head, Node *&tail)
{
    if (head == NULL && tail == NULL)
    {
        // LL is empty
        // iska matlab h first node create krne ja rahe h
        // steps: create node, head on that node, tail on that node

        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // LL is not empty
        // step 1: create Node
        Node *newNode = new Node(value);

        // step 2: tail node ko new node se connect karo
        tail->next = newNode;

        // step 3: tail update
        tail = newNode;
    }
    return head;
}
void print(Node *head)
{
    Node *temp = head;
    // jabtak temp null ke equal nhi h loop chalega
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtPos(int position, int value, Node *&head, Node *&tail)
{
    // assumed to be valid position
    int lenght = getLength(head);
    if (position == 1)
    {
        // insert at head
        head = insertAtHead(value, head, tail);
    }
    else if (position == lenght + 1)
    {
        // insert at tail
        insertAtTail(value, head, tail);
    }
    else
    {
        // insert in between
        Node *temp = head;
        for (int i = 0; i < position - 2; i++)
        {
            temp = temp->next;
        }
        Node *newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

bool SearchLL(int target, Node *head)
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
    // agar yaha tak pohoch gya
    // iska matlab poori LL traverse ho chuki h
    // and kahin pr bhi target nhi mila
    // iska matlab return false krdo
    return false;
}

void deleteNodeFromLL(int position, Node *&head, Node *&tail)
{
    // if LL is empty,then we cannot delete
    if (head == NULL && tail == NULL)
    {
        cout << "No node to delete" << endl;
        return;
    }
    // single node LL
    if (head == tail)
    {
        Node *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }
    else
    {
        // Multiple nodes inside LL
        // 2 case
        // first Case -> pos =1 delete krna chta h
        if (position == 1)
        {
            Node *temp = head;
            head = temp->next;
            temp->next = NULL;
            delete temp;
        }
        else
        {
            // any other node except the first onne
            Node *prev = head;
            for (int i = 0; i < position - 2; i++)
            {
                prev = prev->next;
            }
            Node *curr = prev->next;
            Node *forward = curr->next;
            prev->next = forward;
            curr->next = NULL;
            delete curr;
        }
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    // LL is empty
    head = insertAtTail(101, head, tail);
    // print(head);
    // 101 ->NULL

    head = insertAtTail(102, head, tail);
    print(head);

    insertAtPos(2, 55, head, tail);
    print(head);

    // Searching
    cout << SearchLL(55, head) << endl;

    // delete the node
    deleteNodeFromLL(1, head, tail);
    print(head);
    /*
    // Node *first = new Node(11);
    Node *head = NULL;
    Node *tail = NULL;
    // LL is empty

    head = insertAtHead(10, head, tail);
    print(head);
    head = insertAtHead(20, head, tail);
    print(head);
    head = insertAtHead(30, head, tail);
    print(head);
    // print(head);
    */
}