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
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        cout << "dtor called...";
    }
};

void printNode(Node *&head)
{
    Node *temp = head;
    cout << "Printing list: " << endl;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int findLength(Node *&head)
{
    Node *temp = head;
    int len = 0;

    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }

    return len;
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node *newNode = new Node(data);
    newNode->next = head;
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
    tail = newNode;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // CASE 1: insert at position 1 i.e head
    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }

    // CASE 2: insert at last position i.e tail

    int len = findLength(head);

    if (position >= len)
    {
        insertAtTail(head, tail, data);
        return;
    }

    // CASE 3: Insert at any random location
    int i = 0;
    Node *prevNode = head;
    while (i < position - 1)
    {
        prevNode = prevNode->next;
        i++;
    }

    Node *currNode = prevNode->next;

    Node *newNode = new Node(data);
    newNode->next = currNode;
    // prevNode->next = NULL;
    prevNode->next = newNode;
}

void deleteNode(Node *&head, Node *&tail, int position)
{
    if (head == NULL)
    {
        cout << "List is empty " << endl;
        return;
    }

    int toalLength = findLength(head);

    if (position > toalLength)
    {
        cout << "Invalid Position..." << endl;
        return;
    }

    // deleting the first list
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    // deleting the last list
    int len = findLength(head);

    if (position > len)
    {
        int i = 1;

        Node *prev = head;

        while (i < position - 1)
        {
            prev = prev->next;
            i++;
        }
        prev->next = NULL;
        Node *temp = tail;
        tail = prev;
        delete temp;
    }

    // delete at any random position
    int i = 1;
    Node *prev = head;
    while (i < position - 1)
    {
        prev = prev->next;
        i++;
    }

    Node *currentNode = prev->next;
    prev->next = currentNode->next;
    currentNode = NULL;
    delete currentNode;
}



Node *reverseKNodes(Node* &head, int k) {
    // when list is empty 
    if (head == NULL)
    {
        cout << "List is empty " << endl; 
        return head; 
    }

    // when k > total length of node
    int totalLength = findLength(head); 

    if (k > totalLength)
    {
        return head; 
    } 

    // solve for one case 

    Node *prev = NULL;
    Node *curr =  head; 
    Node *next = curr->next; 

    // base case     

    int count = 0; 

    while (count < k)
    {   
        next = curr->next; 
        curr->next = prev; 
        prev = curr; 
        curr = next; 
        
        // increase count
        count++; 
    }

    // baaki recursion sambhal lenga 
    // just check once that next.next != null 
    if (next != NULL)
    {
        // we still have nodes to reverse 
        head->next = reverseKNodes(next, k);
    }

    // return head of the modified nodes
    return prev; 
    
}


int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    insertAtPosition(head, tail, 1, 10);
    insertAtPosition(head, tail, 2, 20);
    insertAtPosition(head, tail, 3, 30);
    insertAtPosition(head, tail, 4, 40);
    insertAtPosition(head, tail, 4, 50);
    insertAtPosition(head, tail, 4, 60);

    printNode(head);

    head = reverseKNodes(head, 2); 

    printNode(head); 

    return 0;
}