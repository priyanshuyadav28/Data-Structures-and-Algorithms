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
    Node *curr = head;

    cout << "Printing Node " << endl;

    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }

    cout << endl;
}

// method 1 to sort 0's, 1's and 2's

void sortZeroOneTwo(Node* &head) {
    int zero = 0; 
    int one = 0; 
    int two = 0; 

    Node *curr = head; 
    
    while (curr != NULL)
    {
        if (curr->data == 0)
        {
            zero++;  
        }
        if (curr->data == 1)
        {
            one++;  
        }
        if (curr->data == 2)
        {
            two++; 
        }

        curr = curr->next;
    }
    
    curr = head; 

    while ((zero--) && (curr != NULL))
    {
        curr->data = 0; 
        curr = curr->next;
    }
    while ((one--) && (curr != NULL))
    {
        curr->data = 1; 
        curr = curr->next; 
    }
    while ((two--) && (curr != NULL))
    {
        curr->data = 2; 
        curr = curr->next; 
    } 
}

Node* sortTwo(Node* &head) {

    Node* zeroHead = new Node(-1); 
    Node* zeroTail = zeroHead; 

    Node* oneHead = new Node(-1);
    Node *oneTail = oneHead; 

    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;

    Node *curr = head;

    while (curr != NULL)
    {
        if (curr->data == 0) {
            Node* temp = curr; 
            curr = curr->next; 
            temp->next = NULL; 

            zeroTail->next = temp; 
            zeroTail = temp; 

        } else if (curr->data == 1)
        {
            Node* temp = curr; 
            curr = curr->next; 
            temp->next = NULL; 

            oneTail->next = temp; 
            oneTail = oneTail->next; 
            
        } else if (curr->data == 2) {
            Node* temp = curr; 
            curr = curr->next; 
            temp->next = NULL; 

            twoTail->next = temp; 
            twoTail = twoTail->next;            
        } 
        
    }

    Node *temp = oneHead; 
    oneHead = oneHead->next; 
    temp->next = NULL; 
    delete temp; 

    temp = twoHead; 
    twoHead = twoHead->next; 
    temp->next = NULL; 
    delete temp; 


    if (oneHead != NULL)
    {
        zeroTail->next = oneHead; 

        if (twoHead != NULL)
        {
            oneTail->next =  twoHead; 
        }
    } else {
        if (twoHead != NULL)
        {
            zeroTail->next = twoHead; 
        }
        
    }

    temp = zeroHead; 
    zeroHead = zeroHead->next; 
    temp->next = NULL; 
    delete temp; 

    return zeroHead; 
    
    
}




int main() {

    Node *head = new Node(2);
    Node *second = new Node(1);
    Node *third = new Node(0);
    Node *fourth = new Node(0);
    Node *fifth = new Node(2);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth = NULL; 

    printNode(head);

    // sortZeroOneTwo(head); 
    // printNode(head);

    head = sortTwo(head); 
    printNode(head); 




    return 0; 
}