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

Node* reverse(Node* head) {
    if (head == NULL)
    {
        cout << "Empty List " << endl; 
        return head; 
    }

    Node *prev = NULL; 
    Node* curr = head; 
    Node* next = curr->next; 

    while (curr != NULL)
    {
        next = curr->next; 
        curr->next = prev; 
        prev = curr; 
        curr = next; 
    }    
    
    return prev; 
}


Node* sum(Node* &head1, Node* &head2) {

    if (head1 == NULL)
    {
        return head2; 
    }
    if (head2 == NULL)
    {
        return head1; 
    }
    
    

    // reverse head1 and head2 
    head1 = reverse(head1); 
    head2 = reverse(head2); 

    Node* ans = NULL; 
    Node* ansHead = NULL; 
    Node * ansTail = NULL; 
    
    // int sum = 0; 
    // int digit = 0; 
    int carry = 0; 

    while (head1 != NULL && head2!= NULL)
    {
        int sum = carry + head1->data + head2->data; 
        int digit = sum % 10; 
        Node* newNode = new Node(digit); 
        carry = sum / 10; 

        if (ans == NULL)
        {
            ans = newNode; 
            ansHead = newNode; 
            ansTail = newNode; 
        } else {
            ansTail->next = newNode; 
            ansTail = newNode; 
        }

        head1 = head1->next; 
        head2 = head2->next; 

    }

    while (head1 != NULL)
    {
        int sum = carry + head1->data; 
        int digit = sum % 10; 
        carry = sum / 10; 

        Node *newNode = new Node(digit); 

        ansTail->next = newNode; 
        ansTail = ansTail->next; 
        head1 = head1->next; 
    }

    while (head2 != NULL)
    {
        int sum = carry + head2->data; 
        int digit = sum % 10; 
        carry = sum / 10; 

        Node *newNode = new Node(digit); 
        ansTail->next = newNode; 
        ansTail = ansTail->next; 
        head2 = head2->next; 
    }
    
    while (carry != 0)
    {    
        int digit = carry % 10; 
        carry = carry / 10; 
        Node* newNode = new Node(digit); 

        ansTail->next = newNode; 
        ansTail = ansTail->next; 
    }

    ansHead = reverse(ans); 
    return ansHead; 
}




int main() {

    Node* head1 = new Node(1); 
    Node* second1 = new Node(2); 

    head1->next = second1; 

    printNode(head1); 

    Node *head2 = new Node(2); 
    Node *second2 = new Node(3); 
    // Node *third2 = new Node(4); 

    head2->next = second2; 
    // second2->next = third2; 

    printNode(head2); 
    
    Node* ansHead = sum(head1, head2); 
    printNode(ansHead); 



    return 0; 
}