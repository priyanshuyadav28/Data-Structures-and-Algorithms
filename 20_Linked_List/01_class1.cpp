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
        cout << "Dtor called: " << data << endl;
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

int findLen(Node *&head)
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

void insertAtPosition(int position, Node* &head, Node* &tail, int data) {
    
    if (head == NULL) {
        Node *newNode = new Node(data); 
        head = newNode; 
        tail = newNode; 
    }

    if (position == 0)
    {
        insertAtHead(head, tail, data);
        return;  
    }

    
    int len = findLen(head); 

    if (position >= len) {
        insertAtTail(tail, head, data); 
        return; 
    }
    

    // step 1-> find the prev location
    Node *prev = head; 
    int i = 1; 
    while (i < position)
    {
        prev = prev->next; 
        i++; 
    }

    Node* curr = prev->next; 

    Node *newNode = new Node(data); 
    newNode->next = curr; 
    prev->next = newNode;        
    

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


void deleteNode(int position, Node* &head, Node *&tail) {
    if (head == NULL) {
        cout << "Cannot delete empty list" << endl; 
        return; 
    }

    int checkLen = findLen(head); 

    if (position > checkLen)
    {
        cout << checkLen << endl; 
        cout << "Out of bound" << endl; 
    }
    
    

    if (position == 1) {
        Node *temp = head; 
        head = head->next;
        temp->next = NULL;  
        delete (temp); 
        return; 
    }

    int len = findLen(head);

    if (position == len) {
         
        // find prev
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

        return; 
    }

    int i = 1; 
    Node *prev = head; 
    while (i < position - 1)
    {
        prev = prev->next; 
        i++; 
    }

    Node* curr = prev->next;    
    prev->next = curr->next; 
    curr->next = NULL; 
    delete curr; 
  
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

    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);

    insertAtTail(tail,head, 50);
    insertAtTail(tail,head, 60);

    cout << "Printing Linked List: " << endl;
    printNode(head);
    cout << endl; 

    // insertAtPosition(6, head, tail, 201); 
    // printNode(head); 

    // deleteNode(5, head, tail); 
    // printNode(head); 
    // cout << endl; 

    deleteNode(7, head, tail); 
    printNode(head); 
    cout << endl; 

    // deallocation(head);

    return 0;
}