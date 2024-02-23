#include <iostream>

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
        cout << "Dtor called: " << data << endl; // Print data for debugging
    }
};

void insertAtHead(Node *&head, Node *&tail, int data)
{
    // step 1-> create a node
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return; 
    }  
    Node *newNode = new Node(data);
    // step 2 -> assign newNode.next to the current head
    newNode->next = head;
    // step 4-> assign head to the newNode
    head = newNode;
}

// inserting node right at the end of linked list
void insertAtTail(Node *&tail, Node *&head, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return; 
    }
    // create a node
    Node *newNode = new Node(data);
    // step2: connect with tail node
    tail->next = newNode;   
    // step3: update tail
    tail = newNode;
}

void printNode(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

void deallocation(Node *&first)
{
    // Deallocation using delete
    Node *temp = first;
    while (temp != NULL)
    {
        Node *next = temp->next;
        delete temp;
        temp = next;
    }
}

int main()
{
    // Node *first = new Node(10);
    // Node *second = new Node(20);
    // Node *third = new Node(30);
    // Node *fourth = new Node(40);
    // Node *fifth = new Node(50);

    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;

    // cout << "Printing Linked List: ";
    // printNode(first);

    // creating linkedList with insertAtNode() method
    // Node *head = new Node(10);
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 50);

    insertAtTail(tail,head, 60);
    insertAtTail(tail,head, 70);
    insertAtTail(tail,head, 80);
    insertAtTail(tail,head, 90);

    cout << "Printing Linked List: " << endl;
    printNode(head);

    // deallocation(head);

    return 0;
}