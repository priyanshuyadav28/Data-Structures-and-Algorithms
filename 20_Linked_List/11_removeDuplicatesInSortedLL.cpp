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
        cout << "dtor called for " << this->data << endl;
    }
};

void printNode(Node *&head)
{
    Node *temp = head;

    cout << "Printing Node " << endl;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

void removeDuplicates(Node* &head) {
    if (head == NULL)
    {
        cout << "Empty List" << endl; 
        return; 
    }

    if (head->next == NULL)
    {
        cout << "single node in LL " << endl; 
        return; 
    }

    // remove duplicates when LL > 1

    Node *curr = head;
    Node *next = curr->next;

    while (curr != NULL)
    {
        next = curr->next;     

        if  ((next != NULL) && (curr->data == next->data))
        {
            curr->next = next->next; 
            next->next = NULL; 
            delete next; 
        } else {
            curr = curr->next; 
        }
        
    }
    
    // return head; 
    
}




int main()
{

    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(2);
    Node *fourth = new Node(3);
    Node *fifth = new Node(4);
    Node *six = new Node(4);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = six;
    six->next = NULL; 

    printNode(head); 

    removeDuplicates(head); 
    printNode(head); 


    return 0;
}