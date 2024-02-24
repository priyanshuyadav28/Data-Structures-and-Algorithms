#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm>

using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        cout << "Destructor called ..." << endl;
    }
};

void printNode(Node *&head)
{
    Node *temp = head;
    cout << "Printing List :" << endl;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *&head)
{
    Node *temp = head;
    int length = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        length++;
    }
    return length;
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
    // when LL is empty
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // when LL is not empty
    // step 1: create a new node
    Node *newNode = new Node(data);
    // assign current head to newNode->next
    newNode->next = head;
    // set head->prev to newNode
    head->prev = newNode;
    // set head as newNode for further operations
    head = newNode;
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node *newNode = new Node(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insertAtPosition(int position, Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    int currLen = getLength(head); 

    if (currLen < 0) {
        cout << "List is Empty..." << endl; 
        return; 
    }

    if (position > currLen) {
        cout << "No position exist " << endl; 
        return; 
    }

    // inserting at position 0 (head)
    if (position == 0)
    {
        insertAtHead(head, tail, data);
        return;
    }

    // inserting at position end(tail)
    int len = getLength(head);
    if (position > len)
    {
        insertAtTail(head, tail, data);
        return;
    }

    // inserting at any other place in between
    // step 1 find previous and current node for insertion
    int i = 0;
    Node *prev = head;

    while (i < position - 1)
    {
        prev = prev->next;
        i++;
    }

    Node *curr = prev->next;

    Node *newNode = new Node(data);
    prev->next = newNode;
    newNode->prev = prev;

    curr->prev = newNode;
    newNode->next = curr;
}

void deleteNode(int position, Node* &head, Node* &tail) {
    if (head == NULL) {
        cout << "The list is already empty " << endl; 
        return; 
    }

    int currLen = getLength(head); 
    if (position > currLen)
    {
        cout << "Index out of bound" << endl; 
        return; 
    }
    

    // CASE 0: when only one list is present 
    if (head->next == NULL) {
        Node *temp = head; 
        head = NULL; 
        tail = NULL; 
        delete temp; 
    }


    // CASE 1: delete the first index or head
    if (position == 0)
    {
        Node *temp = head; 
        head = head->next; 
        // head->prev = NULL; 
        temp->next = NULL; 
        delete temp; 
        return; 
    }

    // CASE 2: delete the tail or the last index
    int len = getLength(head); 

    if (position == len)
    {
        // delete last node 
        Node *temp = tail; 
        tail = tail->prev; 
        temp-> prev = NULL; 
        tail->next = NULL; 
        delete temp; 
        return; 
    }

    // CASE 3: delete from between of the list
    int i = 0; 
    Node *left = head; 
    while (i < position - 1)
    {
        left = left->next; 
        i++; 
    }

    Node *curr = left->next; 
    Node *right = curr->next; 

    curr->next = NULL; 
    left->next = right; 
    curr->prev = NULL; 
    right->prev = left; 

    return; 
}



int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 101);
    insertAtHead(head, tail, 102);
    insertAtHead(head, tail, 103);

    // printNode(head);

    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);

    // printNode(head);

    insertAtPosition(0, head, tail, 2);
    printNode(head); 

    // insertAtPosition(8, head, tail, 22);
    insertAtPosition(3, head, tail, 5);

    printNode(head);
    cout << getLength(head) << endl; 

    deleteNode(12, head, tail); 
    printNode(head); 



    return 0;
}